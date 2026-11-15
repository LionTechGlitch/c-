// WEEK 2: Variables, Data Types & Basic I/O - Student Score Calculator
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Keeps asking until the user enters a score between 0 and maxScore
int readScore(const string& label, int maxScore) {
    int score;
    do {
        cout << "Enter score for " << label << ": ";
        if (!(cin >> score)) {          // non-numeric input: clear and retry
            cin.clear();
            cin.ignore(10000, '\n');
            score = -1;
        }
        if (score < 0 || score > maxScore)
            cout << "Error: score must be between 0 and " << maxScore << "." << endl;
    } while (score < 0 || score > maxScore);
    return score;
}

int main() {
    string studentName, course;
    int score1, score2, score3, totalScore;
    double average, percentage;
    const int MAX_SCORE = 100;

    cout << "========================================" << endl;
    cout << "      STUDENT SCORE CALCULATOR" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    // Challenge 4: input validation (re-ask until the score is 0-100)
    score1 = readScore("Test 1", MAX_SCORE);
    score2 = readScore("Test 2", MAX_SCORE);
    score3 = readScore("Test 3", MAX_SCORE);

    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (totalScore / 300.0) * 100;

    // Challenge 3: highest score
    int highest = score1;
    if (score2 > highest) highest = score2;
    if (score3 > highest) highest = score3;

    // Challenge 2: letter grade
    char grade;
    if (average >= 90) grade = 'A';
    else if (average >= 80) grade = 'B';
    else if (average >= 70) grade = 'C';
    else if (average >= 60) grade = 'D';
    else grade = 'F';

    cout << endl;
    cout << "========================================" << endl;
    cout << "              REPORT CARD" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Student: " << studentName << endl;
    cout << "Course:  " << course << endl;
    cout << endl;
    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
    cout << endl;
    cout << "Total:      " << totalScore << "/300" << endl;
    cout << "Average:    " << fixed << setprecision(2) << average << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << "Highest:    " << highest << endl;
    cout << "Grade:      " << grade << endl;
    cout << endl;
    if (percentage >= 50) cout << "Result: PASS" << endl;
    else cout << "Result: FAIL" << endl;
    cout << "========================================" << endl;
    return 0;
}
