#include <iostream>
using namespace std;
void swap1(int *x,int *y){
    int temp= *x;
    *x= *y;
    *y = temp;
}
void swap2(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout << "After swap: a="<<a<<", b="<<b<<endl;
}
int main(){
    int x=5;
    int y=10;
    int a=20;
    int b=30;
    cout << "Before swap: x="<<x<<", y="<<y<<endl;
    swap1(&x, &y);
    cout << "After swap: x="<<x<<", y="<<y<<endl;
    cout << "Before swap: a="<<a<<", b="<<b<<endl;
    swap2(a,b);
    return 0;
}