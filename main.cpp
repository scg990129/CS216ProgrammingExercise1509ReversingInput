#include <iostream>
#include <cmath>

using namespace std;

int reverseDigits(int num, int reverse);

int main() {
    int num, reverse = 0;
    cin >> num;
    reverse = reverseDigits(num, 0);
    std::cout << "Reverse of the number: " << reverse << std::endl;

    return 0;
}

int reverseDigits(int num, int reverse){
    if (num == 0)
        return reverse;

    return reverseDigits(num / 10, reverse * 10 + num % 10);
}