#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


class Zombie{




public:

Zombie(void);
std::string name;
static std::string type;

void announce(Zombie inputZombie);

};
#endif