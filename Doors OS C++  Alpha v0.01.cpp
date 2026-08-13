#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
//fix doors net please
int main()
{
    std::string Doorsnet;
    std::string Ui;
    std::cout<<"Welcome to Doors OS C++\n";
    std::cout<<"Type help to get started\n";
    std::string searchs = "doors os , hi , c++ , doors net";
    std::string command = "help , version , date , doors net , shutdown";
    std::string guess;
    while (true) {
        std::cout<<">Doors ";
        std::getline(std::cin, Ui);
        
        if (Ui == "help") {
            std::cout<<"The commands / applications are: shutdown , help , version , date , Doors Net , guessing game \n";
        }
        
        if (Ui == "version") {
            std::cout<<"Doors OS C++ version: Prototyping";
        }
        
        if (Ui == "date") {
            std::cout<<"Not avalible";
        }
        if (Ui == "guessing game") {
        	std::cout<<"guess the number 1-10 \n";
			std::getline(std::cin,guess);
        	if (guess == "4") {
        		std::cout<<"You guessed right :D !!! \n";
        }
        	else if (guess != "4") {
        		std::cout<<"try again you didnt guess right good guess!! \n";
			}
			}
		}
        
		if (Ui == "doors net") {
            std::getline(std::cin,searchs);
            if (searchs == "doors os") {
                std::cout<<"Doors OS is an os that is based on scratch popular versions are: v24 , v29 ,\n";
            }
            if (searchs == "hi") {
                std::cout<<"Hi is a phrase use to greet people\n";
            }
                
            if (searchs == "c++") {
                std::cout<<"C++ is a programing language used to code oses\n ";
                }

            if (searchs == "doors net") {
                std::cout<<"Doors Net is a web browser made by Doors OS.co \n";
            
            }
            
            if (searchs == "google") {
            	std::cout<<"google is one of the worlds biggest and most used search engines \n";
			}
            
            
            }
			if (Ui == "shutdown") {
            std::cout<<"Powered off...\n";
        	return(0);
        	}
        
        	else if (Ui != "help" && Ui != "version" && Ui != "date" && Ui != "doors net" && Ui != "shutdown" ) {
				std::cout<<"command not found did you mean help?\n";
        	}
        	
        return 0;	
    }
       
 
    
    
    
