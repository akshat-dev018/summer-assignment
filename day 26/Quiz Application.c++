// Quiz Application
#include <iostream>
using namespace std;

int main() {

    int score = 0;
    char ans;

    cout << "===== Quiz Application =====\n\n";

    // Question 1
    cout << "Q1. Capital of India?\n";
    cout << "A. Delhi\nB. Mumbai\nC. Chennai\nD. Kolkata\n";
    cout << "Answer: ";
    cin >> ans;

    if (ans == 'A' || ans == 'a')
        score++;

    // Question 2
    cout << "\nQ2. Which language is used for Android development?\n";
    cout << "A. Python\nB. Java\nC. C\nD. PHP\n";
    cout << "Answer: ";
    cin >> ans;

    if (ans == 'B' || ans == 'b')
        score++;

    // Question 3
    cout << "\nQ3. C++ is a ______ language.\n";
    cout << "A. Programming\nB. Database\nC. Operating System\nD. Browser\n";
    cout << "Answer: ";
    cin >> ans;

    if (ans == 'A' || ans == 'a')
        score++;

    // Question 4
    cout << "\nQ4. Which symbol is used for comments in C++?\n";
    cout << "A. ##\nB. //\nC. <!-- -->\nD. **\n";
    cout << "Answer: ";
    cin >> ans;

    if (ans == 'B' || ans == 'b')
        score++;

    // Question 5
    cout << "\nQ5. How many bits are there in 1 byte?\n";
    cout << "A. 4\nB. 16\nC. 8\nD. 32\n";
    cout << "Answer: ";
    cin >> ans;

    if (ans == 'C' || ans == 'c')
        score++;

    cout << "\n===== RESULT =====\n";
    cout << "Score: " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!";
    else if (score >= 3)
        cout << "Good Job!";
    else
        cout << "Better Luck Next Time!";

    return 0;
}