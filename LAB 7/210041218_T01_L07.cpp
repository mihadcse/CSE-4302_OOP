#include<iostream>
#include<string>

using namespace std;

class StudentCollection
{
private:
    static const int Max_student=10;
    string name[Max_student];
    double grades[Max_student];
    int Std_count=0;


public:
    StudentCollection(string n="", double g=0.00)
    {
        for (int i = 0; i < Max_student; i++)
        {
            name[i] = "";
            grades[i] = 0.0;
        }
        Std_count = 0;
    }
    ~StudentCollection() {}

    void addStudent(const string& name, double grades)
    {
        if(Std_count<Max_student)
        {
            name[Std_count]=name;
            grades[Std_count]=grades;
            Std_count++;
            cout<<"After Adding Total Student- "<<Std_count<<endl;
        }
        else
        {
            cout<<"Student Collection Table Full"<<endl;
        }
    }

    double& operator[] (const string& name)
    {
        for(int i=0; i<Std_count; i++)
        {
            if(name[i]==name)
            {
                return grades[i];
            }
        }
    }

    double &operator[](const string& name)
    {
        double N_grades;
        cin>>N_grades;
        for(int i=0; i<Std_count; i++)
        {
            if(name[i]==name)
            {
                grades[i]=N_grades;
                return grades[i];
            }
            else
            {
                cout<<"Student Not Found"<<endl;
            }
        }
    }
};

int main()
{
    StudentCollection Std_col;

    Std_col.addStudent("Rahim",3.45);
    Std_col.addStudent("Karim",3.35);
    Std_col.addStudent("Rafiq",3.70);
    Std_col.addStudent("Shafiq",3.95);
    Std_col.addStudent("Zarif",3.75);
    Std_col.addStudent("Kamal",2.99);
    Std_col.addStudent("Shanto",3.77);
    Std_col.addStudent("Nafi",3.15);

    //Showing Grades
    cout<<"Shafiq's Grade- "<<Std_col["Shafiq"]<<endl;
    cout<<"Kamal's Grade- "<<Std_col["Kamal"]<<endl;

    //Updating Grades
    cout<<"Kamal's Updated Grade- "<<Std_col["Kamal"];
    cout<<"Nafi's Updated Grade- "<<Std_col["Nafi"];

    //Adding Students
    Std_col.addStudent("Hasan",3.78);
    Std_col.addStudent("Ahmed",3.68);
    Std_col.addStudent("Haris",3.92);
    Std_col.addStudent("Shaheen",3.40);
}
