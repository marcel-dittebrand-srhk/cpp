#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Shop 1\n";                                      // Title
    cout << "Program to calculate the invoice price\n\n";    // Description
    float priceBefore, priceAfter;

    string txt;

    cout << "Price:\t\t    ";
    cin >> priceBefore;
    
    if (priceBefore < 50) {                                 // Check if the price is less than 50
        
        priceAfter = priceBefore - 4.95;                    // Apply shipping costs

    } else if (priceBefore >= 50 && priceBefore < 100) {    // Check if the price is between 50 and 99

        priceAfter = priceBefore;                            

    } else if (priceBefore >= 100 && priceBefore < 200) {   // Check if the price is between 100 and 200

        priceAfter = priceBefore * 0.90;                    // Apply 10% discount

    } else if (priceBefore >= 200) {                        // Check if the price is greater than 200

        priceAfter = priceBefore * 0.80;                    // Apply 20% discount

    }

    cout << "Invoice price:\t\t" << priceAfter;

    /*
     Wait until the user presses a key.
     Alternative:     You can use system("pause") and remove the variable txt afterwards
    */

    cin >> txt;

    return 0;
    
}
