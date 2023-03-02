
#include <iostream>

class Zombie{
    private:
 std::string name;


    public:
    void announce();
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
