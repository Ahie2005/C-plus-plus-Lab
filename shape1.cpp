#include <iostream>
#include <cmath>
using namespace std;
class Shape
{
public:
    float AREA(float r)
    {
        return 3.14 * r * r;
    }
    float AREA(float l, float b)
    {
        return l * b;
    }
    float AREA(float a, float b, float c)
    {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
int main()
{
    Shape s;
    float r, l, b, a, c;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << s.AREA(r) << endl;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << s.AREA(l, b) << endl;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    cout << "Area of triangle = " << s.AREA(a, b, c) << endl;
    return 0;
}