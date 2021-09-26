#include <iostream>

//Print even numbers
//Common-Sense Guide
int main()
{
    int number{2}; //Start at 2
    int counter{0};
    while (number <= 100) { //While number is less than or equal to 100
        std::cout << number << std::endl; //Output the number & end the line
        number +=2; //Increment every number n = n + 2
        ++counter;
    }
    std::cout << "Loop executed: " << counter << " times";
}