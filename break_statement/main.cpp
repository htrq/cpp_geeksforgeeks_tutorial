#include <iostream>
using namespace std;

// The function is to find just the only one value in the array
void findInArrayFunction(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Found element: " << key << " at " << i << " position" << endl;
            break;
        }
    }
}

void printArrayOnlyWithoutTheOneNumber(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            continue;
        }
        else {
            cout << arr[i] << endl;
        }
    }

}

int SUM(int a, int b)
{
    int s1 = a + b;
    return s1;
}

// returns void
// function to print
void Print(int s2)
{
    cout << "The sum is " << s2 << endl;
    return; //this return isn't mandatory
}

void checkEvenOrNot(int num)
{
    if (num % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

even:
    cout << num << " is even";
    // return if even
    return;
odd:
    cout << num << " is odd";
}


int main(int, char**) {
    //example with break statement
    int arr[]{ 10, 20, 30, 40, 30, 50 };
    findInArrayFunction(arr, 6, 30);

    //example with continue statement
    printArrayOnlyWithoutTheOneNumber(arr, 6, 30);

    //Here is example with return statement
    int num1 = 10;
    int num2 = 10;
    int sum_of = SUM(num1, num2);
    Print(sum_of);

    //Here is example of label statement
    int num = 26;
    checkEvenOrNot(num);
    return 0;
}
