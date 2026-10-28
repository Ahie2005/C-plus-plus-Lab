#include <iostream>
using namespace std;
class B;
class A
{
    int x;
public:
    void getdata()
    {
        cout << "Enter first number: ";
        cin >> x;
    }
    void display()
    {
        cout << "First number: " << x << endl;
    }
    friend void swap(A &, B &);
};
class B
{
    int y;
public:
    void getdata()
    {
        cout << "Enter second number: ";
        cin >> y;
    }
    void display()
    {
        cout << "Second number: " << y << endl;
    }
    friend void swap(A &, B &);
};
void swap(A &a, B &b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
}
int main()
{
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    swap(obj1, obj2);
    cout << "\nAfter swapping:" << endl;
    obj1.display();
    obj2.display();
    return 0;
}
