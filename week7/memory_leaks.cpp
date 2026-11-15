// WEEK 7 ACTIVITY 3: memory leak (createLeak) and the fix (fixLeak)
#include <iostream>
using namespace std;

// Leaks: heap memory never freed
void createLeak() {
    int* ptr = new int(42);
    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;
    // no delete -> LEAK
}

// Fixed version
void fixLeak() {
    int* ptr = new int(42);
    cout << "Inside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;
    delete ptr;
    ptr = nullptr;
    cout << "Memory has been successfully freed." << endl;
}

int main() {
    cout << "--- The Leak ---" << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked.\n" << endl;

    cout << "--- Testing the Fix ---" << endl;
    fixLeak();
    return 0;
}
