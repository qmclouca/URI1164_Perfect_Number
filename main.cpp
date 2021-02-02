#include <iostream>
using namespace std;

int main() {
    int tests = 0, number = 0, sum =0;
    std::cin >> tests;
    for (int x=0; x<tests;x++){
        std::cin >> number;
        //std::cout << number << " inserido" << std::endl; //for test proposes
        for (int x = 1; x<number; x++){
            if (number%x == 0){
                sum = sum + x;
                //std::cout << sum << " soma parcial, valor somado: " << x << std::endl; //for test proposes
            }
        }
        if (sum == number) {
            std::cout << number << " eh perfeito" << std::endl;
        } else {
            std::cout << number << " nao eh perfeito" << std::endl;
        }
        sum = 0;
    }
    return 0;
}
