#include <iostream>

//Print even numbers
//Common-Sense Guide
void odd();
void even();
int main()
{
    std::cout << "Outputting even and odd numbers <= 100" << std::endl;
    std::cout << "EVEN: \n\n";
    even();
    std::cout << "ODD: \n\n";
    odd();
}

void even()
{
    int number{2}; //Start at 1
    int counter{0};
    while (number <= 100) { //While number is less than or equal to 100
        std::cout << number << " "; //Output the number & end the line
        number +=2; //Increment every number n = n + 2
        ++counter;
    }
    std::cout << "Loop executed: " << counter << " times\n\n";
}

void odd()
{
    int number{1}; //Start at 1
    int counter{0};
    while (number <= 100) { //While number is less than or equal to 100
        std::cout << number << " "; //Output the number & end the line
        number +=2; //Increment every number n = n + 2
        ++counter;
    }
    std::cout << "Loop executed: " << counter << " times";
}
