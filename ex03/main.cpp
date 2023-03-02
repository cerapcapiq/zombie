#include <iostream>

class Weapon{
    private:
    
    std::string type;

    public:
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string type);
};

class HumanA{
    private :
    class Weapon &weapon;
    std::string name;
    
    public:
    HumanA();
    ~HumanA();
   void  attack(); 
};


class HumanB{
    private :
    class Weapon *weapon;
    std::string name;
    
    public:
     HumanB(std::string name);
    ~HumanB();
   void  attack(std::string ); 
}


Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with his "
				<< this->weapon.getType() << std::endl;
}


	const &Weapon::getType() 
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}