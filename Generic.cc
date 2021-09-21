#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void staticExample()
{
    static int i{0};
    std::cout << "Static value: " << i << std::endl;
    i+=1; //i++
}


void equal_to(int values[], int numOf)
    {
        int i,j;
        for (i = 0; i < numOf; i++) {
            for (j = i+1; j < numOf; j++) {
            if (values[i] == values[j]) {
                printf("%d is equal to %d", values[i], values[j]);
                printf("\nThe intergers are equal");
            }
        }
    }
    std::cout << std::endl; std::cout << "No other integers are equal" << std::endl;
    //printf("Nothing else alike");
}

void greater_than(int values[], int numOf) {
    int i,j;
        for (i = 0; i < numOf; i++) { //This will loop through the number of elements
            for (j = i+1; j < numOf; j++) { //This loops through each value of the array
            if (values[i] >= values[j]) {
                printf("\n%d is greater than or equal to %d", values[i] , values[j]);
            }
        }
    }
    std::cout << std::endl;
}

void less_than(int values[], int numOf) {
    int i,j;
        for (i = 0; i < numOf; i++) { //This will loop through the number of elements
            for (j = i+1; j < numOf; j++) { //This loops through each value of the array
            if (values[i] <= values[j]) {
                printf("\n%d is less than or equal to %d", values[i] , values[j]);
            }
        }
    }
    std::cout << std::endl;
}


int main()
{
//This can be program can be condensed into one function
    int a[5] = {4,3,70,4,65};
    equal_to(a,5);
    greater_than(a,5);
    less_than(a,5);
    std::cout << "Static Example:\n";
    staticExample();
    staticExample();
    staticExample();
    return 0;
}
