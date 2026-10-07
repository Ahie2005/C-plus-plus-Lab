#include <iostream>
#include <string>
using namespace std;
class Student{
    protected:
    string name;
    int roll;
    public:
    void getData(){
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter roll no.: "<<endl;
        cin>>roll;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
    }
};
class Exam: public Student{
    protected:
    int marks[6];
    public:
    void getData(){
        Student::getData();
        cout<<"Takings marks input: "<<endl;
        for (int i=0;i<6;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"Marks of 6 subjects "<<endl;
        for (int i=0;i<6;i++){
            cout<<marks[i]<<endl;
        }
    }
};
class Result: public Exam{
    private:
    int total=0;
    float percent=0;
    public:
    void calc(){
        Exam::getData();
        for (int i=0;i<6;i++){
            total=total+marks[i];
        }
        percent=total/6.0;
    }
    void display(){
        Student::display();
        Exam::display();
        cout<<"Total marks: "<<total<<endl;
        cout<<"Percentage: "<<percent<<endl;
    }
};
int main(){
    Result r;
    r.calc();
    r.display();
    return 0;
}