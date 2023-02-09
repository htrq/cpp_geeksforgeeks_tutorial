#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int, char**) {
    fstream file;
    file.open("cout.txt", ios::out);

    streambuf* streamBufferOfCin = cin.rdbuf();
    streambuf* streamBufferOfCout = cout.rdbuf();
    streambuf* streamBufferOfFile = file.rdbuf();
    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout.rdbuf(streamBufferOfFile);
    cout << "this is written to the file\nand your entered age is: " << age << endl;

    cout.rdbuf(streamBufferOfCout);
    cout << "this is written to the screen\nand your entered age is: " << age << endl;

    file.close();

    return 0;
}
