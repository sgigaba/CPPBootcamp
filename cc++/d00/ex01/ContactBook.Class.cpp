#include "ContactBook.Class.hpp"
#include <iostream>

contactbook::contactbook(){

}

void contactbook::ADD(int indexno){
         if (indexno < 8){
        index = indexno;
        std::cout << "Enter First Name:";

        std::cin >> firstname;

        std::cout << "Enter Last Name:";

        std::cin >> lastname;

        std::cout << "Enter Nick Name:";

        std::cin >> nickname;

        std::cout << "Enter login:";

        std::cin >> login;

  
        std::cout << "Enter Postal Adress:";

        std::cin >> postaladress;
      
       std::cout << "Enter Email Adress:";
        std::cin >> postaladress;

         std::cout << "Enter Phone number:";

         std::cin >> phonenumber;
        
         std::cout << "Enter Birthday:";

         std::cin>>birthday;
      
         std::cout << "Enter Favorite Meal:";

         std::cin >> favemeal;

          std::cout << "Enter Underwear Color:";

          std::cin >> underwear;

           std::cout << "Enter Darkest Secret:";

           std::cin >> darkestsecret;

        }else{
            std::cout << "Contact List is full";
        }
        std::cout << index;
    

}


void contactbook::IndexSearch(int indexnumber, contactbook listofContacts[8]){
    int i = 0;

    std::cout << "Searching ....";
       if (indexnumber){
 while(i < 8){
                if(listofContacts[i].index == index){
                        std::cout << listofContacts[i].firstname;
                        std::cout << '\n';
                     std::cout << listofContacts[i].lastname;
                       std::cout << '\n';
                     std::cout << listofContacts[i].nickname;
                       std::cout << '\n';
                     std::cout << listofContacts[i].login;
                       std::cout << '\n';
                     std::cout << listofContacts[i].postaladress;
                       std::cout << '\n';
                     std::cout << listofContacts[i].email;
                       std::cout << '\n';
                     std::cout << listofContacts[i].phonenumber;
                       std::cout << '\n';
                     std::cout << listofContacts[i].birthday;
                       std::cout << '\n';

                }
                
                 i++;
        }
       
    }

}

void contactbook::SEARCH(contactbook listofContacts[8]){

 int i = 0;
        int index;
        while(i < 8){
                 std::cout << "|";
                 std::cout << listofContacts[i].index;
                 std::cout << "|";
                 std::cout << listofContacts[i].firstname;
                 std::cout << "|";
                 std::cout << listofContacts[i].lastname;
                 std::cout << "|";
                 std::cout << listofContacts[i].nickname;
                 std::cout << "\n";
                 i++;
        }

 


}