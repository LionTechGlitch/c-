// WEEK 5 ACTIVITY 2: global vs local scope
#include <iostream>
using namespace std;

int globalCounter = 100;   // global

void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;
}

void modifyGlobal() {
    globalCounter = 500;
    cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}

void localDemo() {
    int globalCounter = 999;   // shadows the global one
    cout << "Inside localDemo: globalCounter = " << globalCounter << endl;
}

int main() {
    int localCounter = 50;
    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;
    displayGlobal();
    modifyGlobal();
    localDemo();
    cout << "Back in main: globalCounter = " << globalCounter << endl;
    return 0;
}
