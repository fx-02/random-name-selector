# Random Name Selector
This is a random name selector that uses a random number generator with a pseudorandom seed. It can be downloaded and run on any IDE.

********************************************USER MANUAL********************************************
1. How to change the names?
Ans: Just change the words inside the parenthesis (""). 

2. How do I add/remove people?
Ans: Add another 'case' in the switch function, then edit the top of the program.
Example for the 11th person:
        int randNum = rand() % 11 + 1;
And also add this:
        case :
            cout << "PERSON_11" << endl;
            break;

3. What is this? How do I use this?
Ans: A very stripped down, basic random number generator that can be used to pick a person.
