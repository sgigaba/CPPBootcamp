#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieEvent{



public:

void setZombieType(std::string zombietype);
ZombieEvent(void);
Zombie *newZombie(std::string name);
void randomChump(void);
std::string randomstring();

static int randompicker;
static std::string typeofzombie;
};

#endif


