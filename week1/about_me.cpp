// WEEK 1: Your First Interactive C++ Program
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, course, hobby, reason, expectation, definition;

    cout << "========================================" << endl;
    cout << "   WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "1. What is your name? ";
    getline(cin, name);
    // Challenge 2: validation
    if (name.empty()) {
        cout << "You didn't enter a name!" << endl;
    }

    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);
    cout << "3. What is your hobby? ";
    getline(cin, hobby);
    cout << "4. Why did you choose this course? ";
    getline(cin, reason);
    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);
    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);

    // Challenge 1: extra questions
    string food, job;
    cout << "7. What is your favourite food? ";
    getline(cin, food);
    cout << "8. What is your dream job? ";
    getline(cin, job);

    cout << endl;
    cout << "========================================" << endl;
    cout << "         YOUR PROFILE SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Name:            " << name << endl;
    cout << "Course:          " << course << endl;
    cout << "Hobby:           " << hobby << endl;
    cout << "Reason:          " << reason << endl;
    cout << "Expectation:     " << expectation << endl;
    cout << "Programming is:  " << definition << endl;
    cout << "Favourite food:  " << food << endl;
    cout << "Dream job:       " << job << endl;
    cout << endl;
    cout << "========================================" << endl;
    // Challenge 3: personalised message
    cout << " Great job, " << name << "! You are on your way to becoming a programmer!" << endl;
    cout << "========================================" << endl;
    return 0;
}
