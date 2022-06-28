// Shiping codes
// Created/Revised by Christopher Foster on 6/28/2022 


#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

char testForAorB(string code);
char testForOnlyNumbers(string code);


int main()
{
    string regionCode = "";
    string numCode = "";
           
    while (regionCode != "XXX")
    {
        cout << "Enter region code in upercase (enter XXX to end program): ";
        getline(cin, regionCode);
        while (regionCode.length() != 3)
        {
            cout << "Invalid number of digits." << endl << "Region code must be 3 digits." << endl;
            cout << "Enter region code in upercase (enter XXX to end program): ";
            getline(cin, regionCode);
        }
        
        

            if (testForAorB(regionCode) == 'Y' && testForOnlyNumbers(regionCode) == 'Y')
            {
                if (regionCode.substr(0, 1) == "A")
                {
                    cout << "Your shipping cost is $25." << endl;
                    
                }
                else if (regionCode.substr(0,1) == "B")
                {
                    cout << "Your shipping cost is $30." << endl;
                    
                }
            }
            else
            {
                cout << "Invalid entry! Please try again!" << endl;
                
            }
        
    }

        
        
    }


  

char testForAorB(string code)
{
    char yesOrNo = 'N';

    if (code.substr(0, 1) == "A" || code.substr(0,1) == "B")
    {
        yesOrNo = 'Y';
    }
    else
    {
        yesOrNo = 'N';
    }

    return yesOrNo;

}

char testForOnlyNumbers(string code)
{
    string test1 = code.substr(1, 1);
    string test2 = code.substr(2, 1);
    char yesOrNo = 'N';
    string variable = "";
    
    for (int x = 0; x < 10 ; x++)
    {
        variable = to_string(x);
        if (test1 == variable);
        {
            for (int x = 0; x < 10; x++)
            {
                variable = to_string(x);
                if (test2 == variable)
                {
                    yesOrNo = 'Y';
                }
            }
        
        }
       

    }
        
    return yesOrNo;
}

  