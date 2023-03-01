#include <iostream>


class Zombie {
    private :
    std::string name;

    public :

    Zombie();
    ~Zombie();

    void set_name(std::string name);
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);


void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "destruct this " << name << " zombie" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{   
    if (N <= 0)
		return (NULL);
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        horde[i].set_name(name + std::to_string(i+1));
        horde[i].announce();   
    }
    return (&horde[0]);
}

int main(void)
{

    Zombie *zombiehorde = zombieHorde(5, "boobas");
   zombiehorde[2].announce();


    delete [] zombiehorde;
   // delete zombiehorde;
    return 0; 
}