#ifndef CONTACTBOOK_CLASS_HPP
#define CONTACTBOOK_CLASS_HPP
#include <iostream>

class contactbook{

    public:
        public : int index;
    std::string firstname;
    std::string      lastname;
    std::string      nickname;
    std::string       login;
    std::string      postaladress;
    std::string     email;
    std::string     phonenumber;
    std::string      birthday;
    std::string      favemeal;
    std::string      underwear;
    std::string      darkestsecret;

        contactbook(void);
        void ADD(int indexno);
        void SEARCH(contactbook listofContacts[8], int numberof);
        void IndexSearch(int indexnumber, contactbook listofContacts[8],int numberof);
        std::string FormatString(std::string input);
        

};

#endif