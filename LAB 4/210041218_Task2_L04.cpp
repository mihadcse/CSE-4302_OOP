#include<iostream>
#include<string>

using namespace std;

class student
{
private:
    string firstName;
    string lastName;
    string studentID;
    int birthYear;
    string course;
    int obtainedMark;
    static int totalStudents;
public:
    student(string firstName,string lastName,string ID,int birthYear): firstName = "Syed",lastName="Mihad",studentID=210041218,birthYear=2003
    {
        cout<<"Constructor works"<<endl;
        int Year = 2023;
        int Age= Year-birthYear;
        totalStudents++;
    }

    ~student()
    {
        cout<<"Destructor works"<<endl;
        totalStudents--;
    }

    void enrollinCourse()
    {
        obtainedMark=0.0;
    }
    void generateEmail()
    {
        //string fullName
        cout<<"Email ID- "<<firstName<<lastName<<"@iut-dhaka.edu"<<endl;
    }
    void obtainedMarks(string Course,int obtainedMark)
    {

    }
    void setGPAForEachCourse()
    {
        float gpa;
        if(obtainedMark>=40 && obtainedMark<60)
        {
            gpa=3.00;
        }
        else if(obtainedMark>=60 && obtainedMark<80)
        {
            gpa=3.50;
        }
        else if(obtainedMark>=80 && obtainedMark<90)
        {
            gpa=3.80;
        }
        else if(obtainedMark>=90 && obtainedMark<=100)
        {
            gpa=4.00;
        }
    }
    void displayCGPA()
    {
        cout<<"CGPA- "<<gpa<<endl;
    }
    void willGraduate()
    {

    }
    void applyForScholarship()
    {

    }
    void participateInternship()
    {

    }
    void printAcademicRecord()
    {

    }


};

int main()
{

}
