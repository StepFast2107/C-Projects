// Reverse A String.cpp
// Created/Revised by Christopher Foster on 6/28/2022 


#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main()
{
    string word = "";   
    void getWordBack(string & word);

    cout << "Enter a word: ";
    getline(cin, word);

    while (word != "XXX")
    {
        
        getWordBack(word);
        cout << word << endl;
        cout << "Enter another word or XXX to end program: ";
        getline(cin, word);

        

    }

}

void getWordBack(string& word)
{
    int len = word.length();
    int n = len - 1;
    int i = 0;

    while (i <= n)
    {
        swap(word[i], word[n]);
        n = n - 1;
        i = i + 1;

    }
    
    
}
