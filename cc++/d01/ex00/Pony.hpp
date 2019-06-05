#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>

class Pony{


public:

std::string color;
std::string favefood;
Pony(void);
~Pony(void);
void ponyOnTheHeap(std::string fcolor, std::string fave);
void ponyOnTheStack(std::string fcolor, std::string fave, std::string typeofp);

};

#endif