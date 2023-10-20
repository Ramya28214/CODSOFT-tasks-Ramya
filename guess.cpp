#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    
    do{
        std::cout << "enter a guess (1-100):";
        std::cin >> guess;
        tries++;
    
    if(guess > num){
        std::cout << "High" << std::endl;
    }
    else if(guess < num){
        std::cout << "Low" << std::endl;
    }else{
        std::cout << "CORRECT! # of tries:" << tries << std::endl;
    }
    }while(guess != num);

    return 0;
}