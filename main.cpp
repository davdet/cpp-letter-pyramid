#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your string: ";
    string inputString;
    getline(cin, inputString);

    for(size_t i { 0 }; i < inputString.length(); i++) {
        for(size_t j { inputString.length() - i }; j > 0; j--) {
            cout << " ";
        }
        for(size_t l { 0 }; l < i; l++) {
            cout << inputString.at(l);
        }
        for(int k { i }; k >= 0; k--) {
            cout << inputString.at(k);
        }
        cout << endl;
    }

    return 0;
}
