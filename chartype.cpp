#include <iostream>
#include <cctype>
using namespace std;

int main () {
    cout << "Enter a character: " << endl;
    char ch;
    cin >> ch; 

    char upper_ch = toupper(ch);

    if ( upper_ch == toupper('A') || upper_ch == toupper('E')
    || upper_ch == toupper('I') || upper_ch == toupper('O') || upper_ch == toupper('U')){
        cout << upper_ch << " is a vowel. " << endl;
    }else if (upper_ch > 64 && upper_ch < 91 ){
        cout << upper_ch << " is a consonant. " << endl;
    }else if (isdigit(upper_ch)){
        cout << upper_ch << " is digit. "<< endl;
    }else if ( upper_ch > 32 && upper_ch < 65){
        cout << upper_ch << " is punctuation. " << endl;
    } else {
    cout << upper_ch << " Unrecognised. " << endl; 
    }
    return 0;

}