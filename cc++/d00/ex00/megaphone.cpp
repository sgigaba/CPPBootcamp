#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int i = 0;
    int l = 1;
    char currentchar;

    if(argc > 1){
        while(argv[l]){
            i = 0;
                while(argv[l][i] != '\0'){
                        currentchar = toupper(argv[l][i]);
                        std::cout << currentchar;
                        i++;

                    }
                    l++;
        }

    std::cout << "\n";
    }else{
        std::cout << "* LOUD AND UNBEARABLE NOISE *\n";
    }
  
    

    return 0;
}