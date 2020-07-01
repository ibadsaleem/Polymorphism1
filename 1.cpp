//Muhammad Ibad Saleem 19K0220 G Lab7-8 Task 1 

#include <iostream>
#include <string>
using namespace std;

class Employee{                         //Class Employee Main
    protected:
    string Name;
    string code;

};
class Manager: virtual public Employee{                 //Class Manager inherited from Employee
    protected:
    int noOfTeams;
};

class Consultant: virtual public Employee{              //Class Consultant inherited from Employee
protected:
int yearsOfExperience;


};
class ConsultantManager: public Consultant,public Manager{  ////Class ConsultantManager inherited from Consultant,Manager
    public:
    ConsultantManager(){}
    ConsultantManager(string b,string a,int y,int x)
    {
        Name=b;
        code=a;
        noOfTeams=x;
        yearsOfExperience=y;
    }
    void Display()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Number Of Teams: "<<noOfTeams<<endl;
        cout<<"Years of Experience: "<<yearsOfExperience<<endl;
    }
};

int main()
{
ConsultantManager obj("Ali","S-123",17,5);
obj.Display();
return 0;
}