#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int low, high;
    cin >> low >> high;
    for (int i = low; i <= high; ++i)
    {
        if (i >= 1 && i <= 9)
        {
            switch (i)
            {
            case 1:
                std::cout << "one";
                break;
            case 2:
                std::cout << "two";
                break;
            case 3:
                std::cout << "three";
                break;
            case 4:
                std::cout << "four";
                break;
            case 5:
                std::cout << "five";
                break;
            case 6:
                std::cout << "six";
                break;
            case 7:
                std::cout << "seven";
                break;
            case 8:
                std::cout << "eight";
                break;
            case 9:
                std::cout << "nine";
                break;
            default:
                std::cout << "Greater than 9";
            }
        }
        else if (i % 2 == 0)
            std::cout << "even";
        else
            std::cout << "odd";        
        std::cout << "\n";
    }
    return 0;
}
