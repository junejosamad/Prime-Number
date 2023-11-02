#include <iostream>
using namespace std;
void main() {
    char chooseOption;
    cout << "1. For a number\n2. For range\nEnter Option: ";
    cin >> chooseOption;

    if (chooseOption == '1') {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        bool check = true;
        if (number <= 1) {
            check = false;
        }
        else {
            for (int i = 2; i * i <= number; i++) {
                if (number % i == 0) {
                    check = false;
                    break;
                }
            }
        }
        if (check == true)  cout << number << " is a prime number.";
        else cout << number << " is not a prime number.";
    }
    else if (chooseOption == '2') {
        int min, max;
        cout << "Enter range mininum & maximum: ";
        cin >> min >> max;
        cout << "Prime numbers in the range " << min << " to " << max << " is: ";
        for (int number =min; number <= max; ++number) {
            int check = true;
            if (number <= 1) {
                check = false;
            }
            else {
                for (int i = 2; i * i <= number; i++) {
                    if (number % i == 0) {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true) cout << number << " ";
        }cout << endl;
    }
    else cout << "You have entered wrong option";
}