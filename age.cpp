#include <iostream>
#include <cstring>
using namespace std;
class Person
{
    char name[64];
    int age;
    char address[64];
    float salary;
public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> ws;
        cin.getline(name, 64);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> ws;
        cin.getline(address, 64);
        cout << "Enter total salary: ";
        cin >> salary;
    }
    inline static void findYoungestEldest(Person p[], int n)
    {
        int youngest = 0, eldest = 0;
        for (int i = 1; i < n; i++)
        {
            if (p[i].age < p[youngest].age)
                youngest = i;

            if (p[i].age > p[eldest].age)
                eldest = i;
        }
        cout << "\nYoungest Person:\n";
        cout << "Name: " << p[youngest].name << endl;
        cout << "Age: " << p[youngest].age << endl;
        cout << "\nEldest Person:\n";
        cout << "Name: " << p[eldest].name << endl;
        cout << "Age: " << p[eldest].age << endl;
    }
};
int main()
{
    Person p[10];
    cout << "Enter details of 10 persons:\n\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "\nPerson " << i + 1 << ":\n";
        p[i].getData();
    }
    Person::findYoungestEldest(p, 10);
    return 0;
}