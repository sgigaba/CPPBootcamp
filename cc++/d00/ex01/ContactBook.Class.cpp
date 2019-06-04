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
        std::cin >> email;

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
}


void contactbook::IndexSearch(int indexnumber, contactbook listofContacts[8], int numberof){
    int i = 0;


 while(i < numberof){
                if(listofContacts[i].index == indexnumber){
                  std::cout << "Firstname: ";
                        std::cout << listofContacts[i].firstname;
                        std::cout << '\n';
                          std::cout << "Lastname: ";
                     std::cout << listofContacts[i].lastname;
                       std::cout << '\n';
                         std::cout << "Nickname: ";
                     std::cout << listofContacts[i].nickname;
                       std::cout << '\n';
                         std::cout << "Login: ";
                     std::cout << listofContacts[i].login;
                       std::cout << '\n';
                         std::cout << "Postal Adress: ";
                     std::cout << listofContacts[i].postaladress;
                       std::cout << '\n';
                         std::cout << "Email: ";
                     std::cout << listofContacts[i].email;
                       std::cout << '\n';
                         std::cout << "Phone Number: ";
                     std::cout << listofContacts[i].phonenumber;
                       std::cout << '\n';
                         std::cout << "Birthday: ";
                     std::cout << listofContacts[i].birthday;
                       std::cout << '\n';
                }
                i++;            
        }
     
}

std::string contactbook::FormatString(std::string input){

  std::string newstring = "";
 
  int i = 0;
  int maxchars = 9;

  for(int i = 0; i < input.length(); i++){
    if(i == maxchars){
      newstring = newstring +'.';
      return newstring;
    }
    else{
      newstring = newstring + input[i];
    }
  }
  return newstring;
}

void contactbook::SEARCH(contactbook listofContacts[8], int numberof){
  int i = 0;
  std::string first;
  std::string last;
  std::string nickname;
    while(i < numberof){
    std::cout << "|";
    first = FormatString(listofContacts[i].firstname);
    last = FormatString(listofContacts[i].lastname);
    nickname = FormatString(listofContacts[i].nickname);

   
    std::cout.width(10);
     std::cout << std::right << listofContacts[i].index;
                 std::cout << "|";
      std::cout.width(10); 
      std::cout << std::right << first;
                 std::cout << "|";
      std::cout.width(10); 
      std::cout << std::right << last;
                 std::cout << "|";
    std::cout.width(10); 
    std::cout << std::right << nickname;
                 std::cout << "|";
                 std::cout << "\n";
                 i++;     
    }
}