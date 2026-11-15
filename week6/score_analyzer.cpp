// WEEK 6 ACTIVITY 4: student score analyzer (with highest/lowest/count challenges)
#include <iostream>
#include <iomanip>
using namespace std;

double calculateAverage(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += scores[i];
    return (double)sum / size;
}

int findHighest(int scores[], int size) {          // returns index of highest
    int idx = 0;
    for (int i = 1; i < size; i++) if (scores[i] > scores[idx]) idx = i;
    return idx;
}

int findLowest(int scores[], int size) {           // returns index of lowest
    int idx = 0;
    for (int i = 1; i < size; i++) if (scores[i] < scores[idx]) idx = i;
    return idx;
}

int countAboveAverage(int scores[], int size, double average) {
    int count = 0;
    for (int i = 0; i < size; i++) if (scores[i] > average) count++;
    return count;
}

void displayAboveAverage(int scores[], int size, double average) {
    cout << "\nScores above average (" << fixed << setprecision(2) << average << "):" << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {
            cout << "  Score " << scores[i] << " at position " << i + 1 << endl;
            found = true;
        }
    }
    if (!found) cout << "  None" << endl;
}

int main() {
    const int SIZE = 10;
    int scores[SIZE];

    cout << "Enter " << SIZE << " student scores:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    double average = calculateAverage(scores, SIZE);
    cout << "\n--- Results ---" << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;

    int hi = findHighest(scores, SIZE), lo = findLowest(scores, SIZE);
    cout << "Highest: " << scores[hi] << " at position " << hi + 1 << endl;
    cout << "Lowest:  " << scores[lo] << " at position " << lo + 1 << endl;
    cout << "Count above average: " << countAboveAverage(scores, SIZE, average) << endl;

    displayAboveAverage(scores, SIZE, average);
    return 0;
}
