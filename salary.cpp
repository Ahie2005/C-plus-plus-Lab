#include <iostream>
using namespace std;
class Person
{
    char name[64];
    int age;
    char address[64];
    float basicSalary;
    float hra;
    float da;
    float ta;
    float totalSalary;
public:
    Person(const char n[], int a, const char addr[],
           float basic, float h, float d, float t)
    {
        int i;
        for (i = 0; n[i] != '\0'; i++)
            name[i] = n[i];
        name[i] = '\0';
        age = a;
        for (i = 0; addr[i] != '\0'; i++)
            address[i] = addr[i];
        address[i] = '\0';
        basicSalary = basic;
        hra = h;
        da = d;
        ta=t;
        totalSalary = basicSalary + hra + da + ta;
    }
    void display()
    {
        cout << "\n-----------------------------";
        cout << "\n        SALARY SLIP";
        cout << "\n-----------------------------";
        cout << "\nName          : " << name;
        cout << "\nAge           : " << age;
        cout << "\nAddress       : " << address;
        cout << "\nBasic Salary  : " << basicSalary;
        cout << "\nHRA           : " << hra;
        cout << "\nDA            : " << da;
        cout << "\nTA            : " << ta;
        cout << "\n-----------------------------";
        cout << "\nTotal Salary  : " << totalSalary;
        cout << "\n-----------------------------\n";
    }
};
int main()
{
    Person p[10] =
    {
        Person("Rahul", 25, "Kolkata", 25000, 5000, 3000,2000),
        Person("Priya", 24, "Delhi", 30000, 6000, 4000,2000),
        Person("Amit", 28, "Mumbai", 35000, 7000, 5000,2000),
        Person("Sneha", 26, "Pune", 28000, 5500, 3500,2000),
        Person("Arjun", 30, "Chennai", 40000, 8000, 6000,2000),
        Person("Riya", 23, "Kolkata", 22000, 4500, 3000,2000),
        Person("Karan", 27, "Bangalore", 32000, 6500, 4500,2000),
        Person("Ananya", 25, "Jaipur", 27000, 5000, 3500,2000),
        Person("Rohit", 29, "Hyderabad", 38000, 7500, 5500,2000),
        Person("Tina", 26, "Lucknow", 29000, 5500, 4000,2000)
    };
    for (int i = 0; i < 10; i++)
    {
        p[i].display();
    }

    return 0;
}