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
void printHelp(){
    std::cout << "Help - your aim is to make money." << std::endl;
    std::cout << "Analyse the market and make bids" << std::endl;
    std::cout << "and offers. " << std::endl; 
}
void printMarketStats(){
   std::cout << "Market Looks Good." << std::endl;
}
void enterAsk(){
    std::cout << "Mark an offer - enter the amount " << std::endl;
}
void enterBid(){
    std::cout << "Make a bid - enter the amount " << std::endl;
}
void printWallet(){
    std::cout << "Your wallet is empty." << std::endl;
}
void gotoNextTimeframe(){
    std::cout << "Goint to next time frame....." << std::endl; 
}
void processUser0ption(int user0ption){
        if(user0ption == 0){
            std::cout << "Invalid Option, maker another choice : " << std::endl;
        }
        if(user0ption == 1){
            printHelp();
        }
        if(user0ption == 2){
            printMarketStats();
        }
        if(user0ption == 3){
            enterAsk();
        }
        if(user0ption == 4){
            enterBid();
        }
        if(user0ption == 5){
            printWallet();
        }
        if(user0ption == 6){
            gotoNextTimeframe();
        }
}
int main(){
    while(true){
        printMenu();
        int user0ption = getuser0ption();
        processUser0ption(user0ption);
    }
    return 0;
}