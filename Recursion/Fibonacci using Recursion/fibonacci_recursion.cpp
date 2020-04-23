#include <iostream>

using namespace std;

void fibonacci(long long int number1, long long int number2){
    if(number1 >= 0 && number2 >= 0){
        cout << number1 << " " << number2 << " ";
        number1 += number2;
        number2 += number1;

        fibonacci(number1, number2);
    }
}

int main(void){
    fibonacci(0, 1);
}