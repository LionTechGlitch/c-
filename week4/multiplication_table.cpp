// WEEK 4 ACTIVITY 4: multiplication table with nested loops (with header row challenge)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "     MULTIPLICATION TABLE (1 to 10)" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Challenge 2: header row + separator
    cout << setw(5) << " ";
    for (int j = 1; j <= 10; j++) cout << setw(5) << j;
    cout << endl;
    cout << string(55, '-') << endl;

    for (int i = 1; i <= 10; i++) {
        cout << setw(3) << i << " |";
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j;
        }
        cout << endl;
    }
    cout << "========================================" << endl;
    return 0;
}
