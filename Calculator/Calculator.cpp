#include <iostream>

int main()
{
    double x, y;
    char sign;
    bool flag = 1;
    while (flag) {
        std::cout << "Enter X: ";
        std::cin >> x;
        std::cout << "Enter sign: ";
        std::cin >> sign;
        std::cout << "Enter Y: ";
        std::cin >> y;
        switch (sign)
        {
        case '+': {
            std::cout << "Result: " << (x + y) << std::endl;
            break;
        }
        case '-': {
            std::cout << "Result: " << (x - y) << std::endl;
            break;
        }
        case '*': {
            std::cout << "Result: " << (x * y) << std::endl;
            break;
        }
        case '/': {
            if (y == 0) {
                std::cout << "Error: division by zero" << std::endl;
            }
            else {
                std::cout << "Result: " << (x / y) << std::endl;
            }
            break;
        }
        default:
            std::cout << "Error: sign is incorrect" << std::endl;
            break;
        }
        std::cout << "Enter any number to continue or zero to close: ";
        std::cin >> flag;
    }
}
