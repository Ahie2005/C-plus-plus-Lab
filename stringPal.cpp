#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string word, rev="", ch;
    cout << "Enter word: " << endl;
    cin >> word ;
    for (char &c: word){
        c=tolower(c);
    }
    for (int i=word.length()-1; i>=0; i--){
        ch=word.at(i);
        rev=rev+ch;
    }
    if (word == rev){
        cout << "Palindrome string" << endl;
    }else {
        cout << "Not a palindrome string" << endl;
    }
    return 0;
}