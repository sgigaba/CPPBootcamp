#include <iostream>
#include "ContactBook.Class.cpp"

int main(){

    std::string option;
    contactbook access = contactbook();
    int i = 0;
        std::string line;
      std::cout << "Enter ADD, SEARCH OR EXIT to start\n";
    std::getline(std::cin,line);
    contactbook contactlist[8];
    int indexsearch;


while(1){
 if(line.compare("ADD") == 0){
       contactlist[i].ADD(i);
      i++;
       
    }
    if (line.compare("EXIT") == 0){
        return 0;
    }
    if (line.compare("SEARCH") == 0){
       access.SEARCH(contactlist, i);
       if (i > 0){
       std::cout << "Enter Desired Index: ";
       std::cin >> indexsearch;
       access.IndexSearch(indexsearch,contactlist,i);
       }
    

    }
    std::getline(std::cin,line);
}
   
    return 0;
}