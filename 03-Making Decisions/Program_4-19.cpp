// This test scoring program does not accept test scores that are less than 0 or greater than 100.
//!  If a user enters bad input, the program will produce bad output. Programs should be written to filter out bad inputs.



#include <iostream>
using namespace std;

int main()
{
    // Constants for grade thresholds
    const int A_SCORE = 90,
              B_SCORE = 80,
              C_SCORE = 70,
              D_SCORE = 60,
              MIN_SCORE = 0,        // Minimum valid score
              MAX_SCORE = 100;      // Maximum valid score
    
    int testScore;  // To hold a numeric test score

    // Get the numeric test score.
    cout << "Enter your numeric test score and I will tell you the letter grade you earned: ";
    cin >> testScore;

    // Validate the input and determine the letter grade.
    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {
        // Determin the letter grade if the score is a valid input
        if (testScore >= A_SCORE)
            cout << "Your grade is A.\n";
        else if (testScore >= B_SCORE)
            cout << "Your grade is B.\n";
        else if (testScore >= C_SCORE)
            cout << "Your grade is C.\n";
        else if (testScore >= D_SCORE)
            cout << "Your grade is D.\n";
        else if (testScore >= 0)
            cout << "Your grade is F.\n";
        else 
            cout << "Invalid test score.\n";
    }
    else
    {
        // An invalid score was entered.
        cout << "That is an invalid score.\n"
             << "Run the program again and enter a value in the range of\n"
             << MIN_SCORE
             << " through "
             << MAX_SCORE
             << ".\n";
    }

    return 0;
}