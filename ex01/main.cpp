#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(5, "GIGACHAD");

    zombies[3].announce();

    Zombie newzombie("simp");
    newzombie.announce();
    delete [] zombies;
    //system("leaks");
    return 0;
}