#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include "Zombie.cpp"

class Zombie{




public:
Zombie(void);
std::string name;
std::string type;

void announce(std::string nameofZombie, std::string typeofZombie);


};

#endif