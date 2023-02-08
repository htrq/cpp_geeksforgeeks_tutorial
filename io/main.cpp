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

    cout.rdbuf(streamBufferOfFile);
    cout << "this is written to the file" << endl;

    cout.rdbuf(streamBufferOfCout);
    cout << "this is written to the screen" << endl;

    return 0;
}
