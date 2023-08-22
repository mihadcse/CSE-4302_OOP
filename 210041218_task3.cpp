#include<iostream>
using namespace std;

class STUDENT
{
private:
    string F_name;
    string L_name;
    int ID;
    int B_year;
    string course;
    double gpa;
    int marks;

public:
    void setDetails(string fname , string lname, int id)
    {
        F_name=fname;
        L_name=lname;
        ID=id;

    }

    void displayDetails()
    {
        cout<<"First name - "<< F_name <<"\n" <<"Last name - "<< L_name <<"\n"<<"ID - "<<ID<<endl;
    }

    int displayAge(int age)
    {
        cout<< "AGE- "<<age<<endl;
    }

    void willGraduate(int marks)
    {
        if(marks>40)
            cout<<"PASSED"<<endl;
        else
            cout<<"FAILED"<<endl;
    }

    float displayGPA(int marks)
    {
        if(marks<40)
            cout<<"GPA- 0"<<endl;
        else if(marks>=40 && marks<=60)
            cout<<"GPA- 3"<<endl;
        else if(marks>60 && marks<=70)
            cout<<"GPA- 3.25"<<endl;
        else if(marks>70 && marks<=80)
            cout<<"GPA- 4"<<endl;
        else if(marks>80 && marks<=90)
            cout<<"GPA- 4.5"<<endl;
        else if(marks>80 && marks<=100)
            cout<<"GPA- 5"<<endl;
    }
    float updatedGPA()
    {

    }
    void printTranscript()
    {
        cout<<"####TRANSCRIPT####"<<endl;
        cout<<"Full name - "<<F_name<<" "<<L_name<<endl;
        cout<<"ID - "<<ID<<endl;

    }

};

int main()
{
    STUDENT student;


    student.setDetails("Syed","Mihad",210041218);

    student.displayDetails();
    student.displayAge(21);

    student.willGraduate(50);
    student.displayGPA(50);

    student.printTranscript();
    student.updatedGPA();
}
