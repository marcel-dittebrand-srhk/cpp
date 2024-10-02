#include <iostream>
#include <string>

/*

    Use the namespace std for standard functionalities of iostream.
    This makes statements for console shorter:

    std::cout   is  cout
    std::cin    is  cin

*/

using namespace std;

int main() {

    string name;                                        // Name as string that should be greeted
    char gender;                                        // Gender as a char of someone who should be greeted

    string txt;                                    

    cout << "Greeting application\n\n";                 // Title


    cout << "Name:\t\t";  cin >> name;                  // Get the name

lbl1:

    cout << "Gender[m/f/d]:\t";  cin >> gender;         // Get the gender

    
    if (gender == 'm') {                                // Check if gender is m for male

        cout << "Hello Mr. " << name;
        
    }
    else {
                                             
        if (gender == 'f') {                            // Check if gender is f for female

            cout << "Hello Mrs. " << name;

        } else {                                        // If gender is not f for male

            if (gender == 'd') {                        

            cout << "Hello " << name;

            } else {                                    // If user input is not valid

                goto lbl1;                              // Go back to code after lbl1shop1.cpp

            }
            

        }
    }
    
    /*
        Wait until the user presses a key.
        Alternative:     You can use system("pause") and remove the variable txt afterwards
    */

    cin >> txt;

    return 0;
}