#include <iostream>
using namespace std;
int main(){
    int num, copy, rev=0, d;
    cout << "Enter Number: " << endl;
    cin >> num;
    copy= num;
    while (num!=0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if (rev == copy){
        cout << "Palindrome number" << endl;
    }else {
        cout << "Not a palindrome number" << endl;
    }
    return 0;
}