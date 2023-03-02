#include <iostream>

class Zombie{
    private:

    std::string name;

    public:
    void announce();
    Zombie(std::string name);
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);