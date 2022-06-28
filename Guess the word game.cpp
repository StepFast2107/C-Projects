//Guess the Word game
//Created/revised by Christopher Foster on 06/27/2022
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string origWord = "";
    string letter = "";
    char dashReplaced = 'N';
    char gameOver = 'N';
    int numIncorrect = 0;
    string displayWord = "-----";

    //get original word
    while (origWord.length() != 5)
    {
        cout << "Enter a 5-letter word in upper case: ";
        getline(cin, origWord);
    }  //end while

    system("cls"); // clear the screen

    //start guessing
    cout << "Guess this word: " <<
        displayWord << endl;
    while (gameOver == 'N')
    {
        cout << "Enter an uppercase letter: ";
        cin >> letter;

        //search for letter in the original word
        for (int x = 0; x < 5; x += 1)
        {
            //if the current character matches 
            //the letter, replace the corresponding 
            //dash in the displayWord variable and the
            // set the dashReplaced variable to 'Y'
            if (origWord.substr(x, 1) == letter)
            {
                displayWord.replace(x, 1, letter);
                dashReplaced = 'Y';
            } //end if
        }  //end for

        //if a dash was replaced, check whether the
        //displayWord variable contains another dash
        if (dashReplaced == 'Y')
        {
            //if the displayWord variable dose not 
            //contain any dashes, the game is over
            if (displayWord.find("-", 0) == -1)
            {
                gameOver = 'Y';
                cout << endl << "Yes, the word is " << origWord << endl;
                cout << "Great guessing!" << endl;
            }
            else //otherwise, continue guessing
            {
                cout << endl << "Guess this word: " << displayWord << endl;
                dashReplaced = 'N';
            } // end if
        }
        else // processed when dashReplaced contains 'N'
        {
            //add 1 to the number of incorrect guesses
            numIncorrect += 1;
            // if number of incorrect guesses is 10,
            // the game is over
            if (numIncorrect == 10)
            {
                gameOver = 'Y';
                cout << endl << "Sorry, the word is " << origWord << endl;
            }  //endif
        }  //endif
    }  //end while
    return 0;
} //end of main function




