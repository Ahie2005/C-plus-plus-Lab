#include <iostream>
using namespace std;
class media
{
protected:
    char title[50];
    char publication[50];
public:
    virtual void read()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter publication: ";
        cin >> publication;
    }
    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};
class book : public media
{
    int pages;
public:
    void read()
    {
        media::read();
        cout << "Enter number of pages: ";
        cin >> pages;
    }
    void show()
    {
        media::show();
        cout << "Number of pages: " << pages << endl;
    }
};
class tape : public media
{
    float time;
public:
    void read()
    {
        media::read();
        cout << "Enter playing time in minutes: ";
        cin >> time;
    }
    void show()
    {
        media::show();
        cout << "Playing time: " << time << " minutes" << endl;
    }
};
int main()
{
    media *ptr;
    book b;
    tape t;
    cout << "Enter book details:" << endl;
    ptr = &b;
    ptr->read();
    cout << "\nBook details:" << endl;
    ptr->show();
    cout << "\nEnter tape details:" << endl;
    ptr = &t;
    ptr->read();
    cout << "\nTape details:" << endl;
    ptr->show();
    return 0;
}
