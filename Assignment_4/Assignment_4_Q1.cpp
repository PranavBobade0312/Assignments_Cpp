#include<iostream>
using namespace std;



class Date{

    int day;
    int month;
    int year;

public : 

    Date()
    {
        this->day=1;
        this->month=1;
        this->year=2001;

    }
    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void setDay(int day)
    {
        this->day=day;
    }
    int getDay()
    {
        return this->day;

    }

    void setMonth(int month)
    {
        this->month=month;
    }
    int getMonth()
    {
        return this->month;
    }

    void setYear(int year)
    {
        this->year=year;
    }
    int getYear()
    {
        return this->year;
    }

    void acceptDate()
    {
        cout<<"Enter day,month and year : "<<endl;
        cin>>day>>month>>year;
    }
    void displayDate()
    {
        cout<<"Date : "<<day<<":"<<month<<":"<<year<<endl;
    }

    bool is_leap_year()
    {
        if((this->year%4==0)&&(this->year%100!=0 || this->year%400==0))
            return true;
        
        return false;
    }


};
class Person{

    string name;
    string address;
    Date birth_date;

public:

    Person()
    {
        this->name="";
        this->address="";
    }
    Person(string name,string address,int day,int month,int year):birth_date(day,month,year)
    {
        this->name=name;
        this->address=address;
    }

    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return this->name;
    }

    void setAddress(string address)
    {
        this->address=address;
    }
    string getAddress()
    {
        return this->address;
    }

    void acceptPerson()
    {
        cout<<"Enter name and address : "<<endl;
        cin>>name>>address;
        birth_date.acceptDate();
    }

    void displayPerson()
    {
        cout<<"Name : "<<name<<" address : "<<address<<endl;
        birth_date.displayDate();
    }

    
     void getBirth_Date()
    {
        birth_date.displayDate();
    }

    void setBirth_Date()
    {
       
        birth_date.acceptDate();
    }
    
    
};

class Employee{

    int id;
    float salary;
    string dept;
    Date joining;

public :

    Employee()
    {
        this->id=0;
        this->salary=0.0;
        this->dept="";
    }
    Employee(int id,float salary, string dept ,int day,int month,int year):joining(day,month,year)
    {
        this->id=id;
        this->salary=salary;
        this->dept=dept;
        
    }

    int getId()
    {
        return this->id;
    }

    void setSalary(float salary)
    {
        this->salary=salary;
    }
    float getSalary()
    {
        return salary;
    }

    void setDept(string dept)
    {
        this->dept=dept;
    }
    string getDept()
    {
        return this->dept;
    }

 
    void getJoining()
    {
        joining.displayDate();
    }

    void setJoining()
    {
        joining.acceptDate();
    }

void acceptEmployee()
    {
        cout<<"Enter id, salary and department : "<<endl;
        cin>>id>>salary>>dept;
        joining.acceptDate();
    }

    void displayEmployee()
    {
        cout<<"ID : "<<id<<" salary : "<<salary<<" Department : "<<dept<<endl;
        joining.displayDate();
    }
};


int main()
{
    Employee e(101,15000, "DAC" ,03,12,2020);
    e.displayEmployee();

    e.setJoining();
    e.getJoining();

    e.displayEmployee();

    Person p;
    p.displayPerson();
    p.setBirth_Date();
    p.getBirth_Date();

    p.setName("Pranav");
    p.displayPerson();

    Date d;
    if(d.is_leap_year())
        cout<<"Leap year"<<endl;
    cout<<"not leap year"<<endl;

    return 0;
}