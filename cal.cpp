#include <iostream>

int main(){
    int a,b;
    int result;
    char op;
    std::cout << "enter a number:";
    std::cin >> a;
    std::cout << "enter operation('+','-','x','/'):";
    std::cin >> op;
    std::cout << "enter a number:";
    std::cin >> b;
    if(op == '+'){
        int result = a + b;
        std::cout << "Sum:" << result << std::endl;
    }
    else if(op == '-'){
        int result = a - b;
        std::cout << "Difference:" << result << std::endl;
    }
    else if(op == 'x'){
        int result = a*b;
        std::cout << "Multiplication:" << result << std::endl;
    }
    else if(op == '/'){
        if(b != 0){
            int result = a/b;
            std::cout << "Division:" << result << std::endl;
        }
        else{
            std::cout << "Error as division by zero is not allowed" << std::endl;
        }
    }
    else{
        std::cout << "Invalid operation" << std::endl;
    }
}