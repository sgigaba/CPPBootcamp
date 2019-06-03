#include <iostream>


class contactbook
{
    public : int index;
    std::string firstname;
    std::string lastname;
     std::string nickname;
    std::string login;
     std::string postaladress;
    std::string email;
     std::string phonenumber;
    std::string birthday;
     std::string favemeal;
    std::string underwear;
     std::string darkestsecret;

     
    public : contactbook(){
     
    }

    

    // public : std::string SEARCH(){
    //     while(){

    //     }
    // }

    // public : void addcontact(){

    // }

    public : void ADD(int indexno){
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

    public : void SEARCH(contactbook listofContacts[8]){

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

        std::cout << "Enter Desired index: ";
        std::cin >> index;
            std::cout >> index;
    if (index){
 while(i < 8){
                if(listofContacts[i].index == index){
                        std::cout << listofContacts[i].firstname +"\n";
                     std::cout << listofContacts[i].lastname +"\n";
                     std::cout << listofContacts[i].nickname +"\n";
                     std::cout << listofContacts[i].login +"\n";
                     std::cout << listofContacts[i].postaladress +"\n";
                     std::cout << listofContacts[i].email +"\n";
                     std::cout << listofContacts[i].phonenumber +"\n";
                     std::cout << listofContacts[i].birthday +"\n";

                }
                
                 i++;
        }
       
    }
           

    }

};

int main(){

    std::string option;
    contactbook access = contactbook();
    int i = 0;
    std::cin >> option;
    contactbook contactlist[8];

while(1){
 if(option == "ADD"){
       contactlist[i].ADD(i);
      i++;
       
    }
    if (option == "EXIT"){
        return 0;
    }
    if (option == "SEARCH"){
       access.SEARCH(contactlist);
       
   

    }
    std::cin >> option;
}
   


    return 0;
}