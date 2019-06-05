#include "Pony.hpp"
#include <iostream>

Pony::Pony(void){

}

Pony::~Pony(void){
    static int i = 0;
    i++;
    std::cout << i << " Pony Deleted\n";
}

void Pony::ponyOnTheHeap(std::string fcolor, std::string fave){
color = fcolor;
favefood = fave;
}

void Pony::ponyOnTheStack(std::string fcolor, std::string fave, std::string typeofp){
color = typeofp + fcolor;
favefood = fave;

}
