#include "Zombie.hpp"

Zombie::Zombie()
{ 
}

void Zombie::announce()
{
      std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
  announce(); 
}

Zombie::~Zombie()
{
    std::cout << "Bye!" << std::endl;
}