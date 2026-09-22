#include <iostream>
using namespace std;
class Shape
{
private:
    int radius;
    int length;
    int width;
public:
    Shape(int r, int l, int w)
    {
        radius = r;
        length = l;
        width = w;
    }
    void calc()
    {
        int p1;
        float p2;
        p1 = 2 * (length + width);
        p2 = 2 * 3.14 * radius;
        cout << "Perimeter of rectangle = " << p1 << endl;
        cout << "Perimeter of circle = " << p2 << endl;
    }
    ~Shape()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    Shape s(4, 5, 6);
    s.calc();
    return 0;
}