#include <iostream>

void printMenu(){
    std::cout << "Please select an option thorugh 1-6: " << std::endl;
    std::cout << "1 - Print Help " << std::endl;
    std::cout << "2 - Print Exchange Stats " << std::endl;
    std::cout << "3 - Make an Offer  " << std::endl;
    std::cout << "4 - Make a Bid " << std::endl;
    std::cout << "5 - Print Wallet " << std::endl;
    std::cout << "6 - Continue " << std::endl;
} 
int getuser0ption(){
    int user_option;
    std::cin >> user_option;
    return user_option;
}
int main(){
    while(true){
        printMenu();
        int user0ption = getuser0ption();
        if(user0ption == 1){
            printHelp();
        }
        if(user0ption == 2){
            exhangeStats();
        }
        if(user0ption == 3){
            makeOffer();
        }
        if(user0ption == 4){
            makeBid();
        }
        if(user0ption == 5){
            printWallet();
        }
        if(user0ption == 6){
            
        }
    }
    return 0;
}