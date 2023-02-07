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

int main(int, char**) {
    int arr[]{ 10, 20, 30, 40, 30, 50 };
    findInArrayFunction(arr, 6, 30);
    printArrayOnlyWithoutTheOneNumber(arr, 6, 30);

    return 0;
}
