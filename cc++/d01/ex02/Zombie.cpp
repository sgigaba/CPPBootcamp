#include "Zombie.hpp"
#include <iostream>

std::string Zombie::type = "";

Zombie::Zombie(void){
    
}



void Zombie::announce(Zombie inputZombie){

   std::cout << "<" << inputZombie.name << "(" << inputZombie.type << ")" << ">" << "AHHHHH\n";

}