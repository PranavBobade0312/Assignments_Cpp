#include<iostream>
using namespace std;

class Date1
{
private :
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day=00;
        month=00;
        year=0000;

    }
    void printDateOnConsole()
    {
        cout<<"Date is : "<<day<<":"<<month<<":"<<year<<endl;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter day, month and year";
        cin>>day;
        cin>>month;
        cin>>year;
    }
    bool isLeapYear()
    {
       cin>>year;//1700
       if((year%4==0) && (year%400==0 || year%100!=0) )
        return true;
        else
            return false;
    }
};

int menu()
{
    int choice;
    cout<<"Enter choice "<<endl;
    cout<<"Enter 1 for default date"<<endl;
    cout<<"Enter 2 for enter your date"<<endl;
    cout<<"Enter 3 for checking leap year"<<endl;
    cin>>choice;
    return choice;

}
int main()
{
    // struct Date d;
    Date1 d1;
  
    int choice;
    while((choice=menu())!=0)
    {
    switch(choice)
    {
        case 1:
            d1.initDate();
            d1.printDateOnConsole();
            break;

        case 2:
             d1.acceptDateFromConsole();
             d1.printDateOnConsole();
            break;
        
        case 3:
            if(d1.isLeapYear())
                cout<<"Leap year\n";
            else
                cout<<"Not leap\n";
            break;

        default:
            cout<<"Wrong choice entered";
            break;

    }
    // d.printDateOnConsole();
    
     
    }
   
 return 0;
   
}