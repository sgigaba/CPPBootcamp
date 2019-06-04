#include <iostream>
#include "ContactBook.Class.cpp"

int main(){

    std::string option;
    contactbook access = contactbook();
    int i = 0;
        std::string line;
    std::getline(std::cin,line);
    contactbook contactlist[8];
    int indexsearch;


while(1){
 if(line.compare("ADD") != 0){
       contactlist[i].ADD(i);
      i++;
       
    }
    if (line.compare("EXIT")){
        return 0;
    }
    if (line.compare("SEARCH")){
       access.SEARCH(contactlist);
       std::cout << "Enter Desired Index: ";
        //std::getline(std::cin,indexsearch);
        access.IndexSearch(indexsearch,contactlist);
    }
    std::getline(std::cin,line);
}
   
    return 0;
}