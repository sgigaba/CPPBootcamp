#ifndef CONTACTBOOK_CLASS_HPP
#define CONTACTBOOK_CLASS_HPP

class contactbook{

    public:
        public : int index;
    char* firstname;
    char* lastname;
     char*  nickname;
    char*  login;
     char*  postaladress;
    char*  email;
     char* phonenumber;
    char* birthday;
     char* favemeal;
    char*  underwear;
    char* darkestsecret;

        contactbook(void);
        void ADD(int indexno);
        void SEARCH(contactbook listofContacts[8]);
        void IndexSearch(int indexnumber, contactbook listofContacts[8]);

};

#endif