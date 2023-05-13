//
//  main.cpp
//  Sabo Calculator
//

#include <iostream>
using namespace std;
string input = "";

int main()
{
    srand((unsigned int)time(NULL));
    int randNum = rand() % 10 + 1;
    switch (randNum) {
        case 1:
            cout << "PERSON_1" << endl;
            break;
        case 2:
            cout << "PERSON_2" << endl;
            break;
        case 3:
            cout << "PERSON_3" << endl;
            break;
        case 4:
            cout << "PERSON_4" << endl;
            break;
        case 5:
            cout << "PERSON_5" << endl;
            break;
        case 6:
            cout << "PERSON_6" << endl;
            break;
        case 7:
            cout << "PERSON_7" << endl;
            break;
        case 8:
            cout << "PERSON_8" << endl;
            break;
        case 9:
            cout << "PERSON_9" << endl;
            break;
        case 10:
            cout << "PERSON_10" << endl;
            break;

        default:
            cout << "For some reason no one got called, but *INSERT QUESTION OF CHOICE*" << endl;
            break;
    }

    cout << endl << "You have been saboed to answer a question!" << endl;
}



/*
*************************************************USER MANUAL************************************************

1. How to change the names (e.g. ChemistryFanatic isn't in the CCA anymore, how do I get rid of her name? :<)
Ans: Just change the words inside the parenthesis (""). If you do not know how to code C++ (or use a switch function in C++) try not to touch the code or not things might just combust.

2. How do I add extra CCA members? (e.g. Schrodinger's cat is the 46th member, but I can't add him. Oh no!! Schrodinger's cat is now currently sad and is not dead-and-alive anymore. He's just dead.)
Ans: Add another 'case' in the switch function, then edit the top of the program.
Change this at the top of the program:
        int randNum = rand() % 46 + 1;
And also add this:
        case 46:
            cout << "Schrodinger's cat" << endl;
            break;

3. What is this? How do I use this?
Ans: A very stripped down, basic random number generator that can be used to pick a person.
****************************************************END*****************************************************

*/
