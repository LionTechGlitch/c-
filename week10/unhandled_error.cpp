// WEEK 10 ACTIVITY 2: ignoring file errors (silent failure)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream myFile("missing_file.txt");   // does NOT exist; we skip is_open() on purpose
    string data;

    cout << "Attempting to read from missing file..." << endl;
    myFile >> data;
    cout << "Data read: " << data << endl;
    cout << "Program continued running without crashing." << endl;
    return 0;
}
