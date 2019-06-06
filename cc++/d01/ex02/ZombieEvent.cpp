#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

int ZombieEvent::randompicker = 0;


ZombieEvent::ZombieEvent(void){


}




void ZombieEvent::randomChump(void){
Zombie *randomzombie = new Zombie();
ZombieEvent *createrandom = new ZombieEvent();

std::string randomname = randomstring();

randomzombie = createrandom->newZombie(randomname);

randomzombie->announce(*randomzombie);


}

void ZombieEvent::setZombieType(std::string zombietype){

typeofzombie = zombietype;
Zombie::type = zombietype;
}

std::string ZombieEvent::randomstring(){


std::string random[5] = {"Person1", "Person2", "Cyborg", "The Chosen One", "Beautiful Flower"};

    randompicker = rand() % 1 + 3;
    return random[randompicker];
}


Zombie* ZombieEvent::newZombie(std::string name){

Zombie *newzombie = new Zombie();
newzombie->name = name;

return newzombie; 
}
