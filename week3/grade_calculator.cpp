// WEEK 3 PART 4: Grade Calculator with +/- modifiers, messages and multiple students
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void gradeFor(double score, char &grade, char &modifier) {
    modifier = ' ';
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';

    if (grade != 'F') {
        int lastDigit = (int)score % 10;
        if (grade == 'A') {
            if (score >= 97) modifier = '+';
            else if (score < 93) modifier = '-';
        } else {
            if (lastDigit >= 7) modifier = '+';
            else if (lastDigit <= 3) modifier = '-';
        }
    }
}

const char* messageFor(char grade) {
    switch (grade) {
        case 'A': return "Excellent work!";
        case 'B': return "Good job!";
        case 'C': return "Satisfactory.";
        case 'D': return "Needs improvement.";
        default:  return "Please seek help.";
    }
}

int main() {
    cout << "===== GRADE CALCULATOR =====" << endl;
    int n;
    cout << "How many students? ";
    cin >> n;
    if (n <= 0) { cout << "Invalid number of students." << endl; return 1; }

    int counts[5] = {0, 0, 0, 0, 0};  // A B C D F
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string name;
        double score;
        cout << "\nStudent " << i + 1 << " name: ";
        getline(cin, name);
        cout << "Enter percentage score (0-100): ";
        cin >> score;
        cin.ignore();

        if (score < 0 || score > 100) {
            cout << "Invalid score! Must be between 0 and 100." << endl;
            i--;            // ask again for this student
            continue;
        }

        char grade, modifier;
        gradeFor(score, grade, modifier);

        cout << name << " - Score: " << fixed << setprecision(1) << score << "%  Grade: " << grade;
        if (modifier != ' ') cout << modifier;
        cout << "  (" << messageFor(grade) << ")" << endl;

        switch (grade) {
            case 'A': counts[0]++; break;
            case 'B': counts[1]++; break;
            case 'C': counts[2]++; break;
            case 'D': counts[3]++; break;
            default:  counts[4]++;
        }
    }

    cout << "\n===== SUMMARY =====" << endl;
    cout << "A: " << counts[0] << endl;
    cout << "B: " << counts[1] << endl;
    cout << "C: " << counts[2] << endl;
    cout << "D: " << counts[3] << endl;
    cout << "F: " << counts[4] << endl;
    return 0;
}
