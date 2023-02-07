#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int, char**) {
    fstream file;
    file.open("cout.txt", ios::out);
    string line;

    streambuf* stream_buffer_cout = cout.rdbuf();
    streambuf* stream_buffer_cin = cin.rdbuf();

    streambuf* stream_buffer_file = file.rdbuf();

    cout.rdbuf(stream_buffer_file);
    cout << "The line written to the file" << endl;

    cout.rdbuf(stream_buffer_cout);
    cout << "The line written to the file" << endl;
    
    file.close();
    return 0;
}
