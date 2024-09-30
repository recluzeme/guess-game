#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    int n{0}, g{0}, random{0}, diff{0}, choiceleft{10},cl2{7},cl3{5};
    cout << endl;
    cout << "              ---------------------------------------------------------------------                            " << endl;
    cout << "              |                     Welcome to GuessNumber game!                  |                            " << endl;
    cout << "              ---------------------------------------------------------------------                            " << endl;
    cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!" << endl;
    cout << fixed << setprecision(1); // setprecision(value) will display the digit up to you specify and leave other digit avaliable in library(iomanip)
    srand(time(NULL));                // srand() will take random argument and time(NULL) will take current time every time you run program time will be different
    random = 1 + (rand() % 100);      // Taking mod by 100 to get last 2 value and store in random variable
    while (1)                         // Loop will always be true(condition is written inside the loop)
    {
        cout << "Enter the difficulty:\n";
        cout << "1 for easy!";
        cout << "\t2 for medium!";
        cout << "\t3 for difficult!";
        cout << "\t0 for ending the game";
        cout << "\n\nEnter the number: ";
        cin >> diff;
        if (diff == 1)
        {
            cout << "You have 10 choices to find secrete number, lets go\n";
            for (int i = 1; i <= 10; ++i)
            {
                --choiceleft;
                cout << "\nEnter the Secrete number: " << endl;
                cin >> n;
                if (n > random)
                {
                    cout << "Nope, " << n << " is not the right number." << endl;
                    cout << "The secret number is smaller than the number you have chosen" << endl;
                    cout << choiceleft << " choices left" << endl;
                    if (choiceleft == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
                else if (n < random)
                {
                    cout << "Nope, " << n << " is not the right number." << endl;
                    cout << "The secret number is greater than the number you have chosen" << endl;
                    cout << choiceleft << " choices left" << endl;
                    if (choiceleft == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
                else if (n == random)
                {
                    cout << "Well played! You won, " << n << " is the secret number" << endl;
                    cout << "\n                       Thanks for playing....." << endl;
                    cout << "Play the game again with us!!!" << endl;
                    break;
                }
            }
        }
        else if (diff == 2)
        {
            cout << "You have 7 choices to find secrete number, lets go\n";
            for (int i = 1; i <= 7; ++i)
            {
                --cl2;
                cout << "\nEnter the Secrete number: " << endl;
                cin >> n;
                if (n > random)
                {
                    cout << "Nope, " << n << " is not the right number." << endl;
                    cout << "The secret number is smaller than the number you have chosen" << endl;
                    cout << cl2 << " choices left" << endl;
                    if (cl2 == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
                else if (n < random)
                {
                    cout << "Nope, " << n << " is not the right number." << endl;
                    cout << "The secret number is greater than the number you have chosen" << endl;
                    cout << cl2 << " choices left" << endl;
                    if (cl2 == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
                else if (n == random)
                {
                    cout << "Well played! You won, " << n << " is the secret number" << endl;
                    cout << "\n                       Thanks for playing....." << endl;
                    cout << "Play the game again with us!!!" << endl;
                    break;
                    if (cl2 == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
            }
        }
        else if (diff == 3)
        {
            cout << "You have 5 choices to find secrete number, lets go\n";
            for (int i = 1; i <= 5; ++i)
            {
                --cl3;
                cout << "\nEnter the Secrete number: " << endl;
                cin >> n;
                if (n > random)
                {
                    cout << "Nope, " << n << " is not the right number." << endl;
                    cout << "The secret number is smaller than the number you have chosen" << endl;
                    cout << cl3 << " choices left" << endl;
                    if (cl3 == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
                else if (n < random)
                {
                    cout << "Nope, " << n << " is not the right number." << endl;
                    cout << "The secret number is greater than the number you have chosen" << endl;
                    cout << cl3 << " choices left" << endl;
                    if (cl3 == 0)
                    {
                        cout << "\nYou could't find the secret number, it was " << random << " , You lose!!\n";
                        cout << "\nPlay the game with us\n\n";
                        break;
                    }
                }
                else if (n == random)
                {
                    cout << "Well played! You won, " << n << " is the secret number" << endl;
                    cout << "\n                       Thanks for playing....." << endl;
                    cout << "Play the game again with us!!!" << endl;
                    break;
                }
            }
        }
        else if (diff < 0 || diff > 3) // Logical operator to make condition difficulty is not less than 0 or not greater than 3
        {
            cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)\n\n";
        }
        else if (diff == 0)
        {
            cout << "Thanks for playing!";
            exit(0); // exit(0) means exit the program
        }
    }
    return 0;
}