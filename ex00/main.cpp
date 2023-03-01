#include <iostream>


class Zombie {
    private :
    std::string name;

    public :

    Zombie(std::string name);
    ~Zombie();

    void announce(void);
};

Zombie* newZombie(std::string name);
    
void randomChump(std::string name);



void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// from heap, remember to free
Zombie* newZombie(std::string name)
{
    return (new Zombie(name));
}


void randomChump(std::string name)
{
      Zombie Zombie(name);
}


Zombie::Zombie(std::string name) : name(name)
{
	announce();
}

Zombie::~Zombie()
{
    std::cout << "destruct this " << name << " zombie" << std::endl;
}


int main(void)
{

    Zombie zombie1("megaSubs");
    Zombie *zombie2 = newZombie("Mods");

    randomChump("Plebs");
    
    delete zombie2;
    return 0; 
}