#include "ZombieEvent.cpp"
#include "Zombie.cpp"

int main(){

Zombie *newone = new Zombie();
Zombie zombie1;

ZombieEvent *createzombie = new ZombieEvent();
newone = createzombie->newZombie("Dummy");
zombie1 = *createzombie->newZombie("Samkelo");


newone->announce(*newone);
zombie1.announce(zombie1);

createzombie->randomChump();

    return 0;
}