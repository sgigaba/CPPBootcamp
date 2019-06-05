#include "Pony.cpp"


int main(){

Pony* heappony = new Pony();
Pony stackpony =  Pony();

heappony->ponyOnTheHeap("blueish","KFC");
stackpony.ponyOnTheStack("green", "Sushi", "I'm a stack pony");

std::cout << "HeapPony\n";
std::cout <<"~~~~~~~~~~~~~~~~~~~\n";
std::cout << heappony->color;
std::cout << std::endl;
std::cout << heappony->favefood;
std::cout <<"\n~~~~~~~~~~~~~~~~~~~\n";

std::cout << "StackPony\n";
std::cout <<"~~~~~~~~~~~~~~~~~~~\n";
std::cout << stackpony.color;
std::cout << std::endl;
std::cout << stackpony.favefood;
std::cout <<"\n~~~~~~~~~~~~~~~~~~~\n";
std::cout << "After Deleting";
std::cout <<"\n~~~~~~~~~~~~~~~~~~~\n";

delete heappony;

Pony *g = new Pony();
-
std::cout << heappony->color << std::endl;
std::cout << heappony->color << std::endl;
std::cout << heappony->color << std::endl;
std::cout << heappony->color << std::endl;
return 0;
}