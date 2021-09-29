#include <iostream>

//Can work on any array. Because linear traverses through everything
//N steps
void linearSearch() {
    constexpr int  size = 10; 
    int counter{0};
    constexpr int searchKey = 17;
    int ordered[size] = {5,6,7,8,9,10,17,18,456,3444};
    for (int x : ordered) {
        //std::cout << x << std::endl << counter << std::endl;
        if (x == searchKey) {
            std::cout << "Element found" << std::endl;
            std::cout << "Element Value: " << searchKey << std::endl;
            break;
        }
        else if (x > searchKey && counter == size) { //Because the array is ordered there is not point going through the entire array to look through the value
                std::cout << "Element not found within the array" << std::endl;
                break;
        }
    ++counter;
    }
    std::cout << "Linear search executed: " << counter << " times" << std::endl << std::endl;
}

//Can only work on an ordered array because it splits the values in half
//This is more efficent than the linear search
int BinarySearch()
{
    constexpr int search_Value = 17; //Search for this value
    constexpr int size = 10;
    int orderedArray[] = {5,6,7,8,9,10,17,18,456,3444};
    int lowerBound = 0;
    int upperBound = size - 1;
    int counter{0};
    while (lowerBound <= upperBound) {
        int midpoint = (upperBound + lowerBound) / 2;
        auto valueAtMid = orderedArray[midpoint];
        if (search_Value == valueAtMid) {
            std::cout << "Element found" << std::endl;
            std::cout << "Found the value " << valueAtMid << std::endl;
            std::cout << "Binary search executed: " << counter << " times" << std::endl;
            return valueAtMid;
        }
        else if (search_Value < valueAtMid) {
            upperBound = midpoint - 1;
        }
        else if (search_Value > valueAtMid) {
            lowerBound = midpoint + 1;
        }
        counter++;
    }
    return 0;
}

int main()
{
    std::cout << "Both arrays are ordered" << std::endl;
    std::cout << "Linear search: " << std::endl;
    linearSearch();
    std::cout << "Binary search: " << std::endl;
    BinarySearch();
}
