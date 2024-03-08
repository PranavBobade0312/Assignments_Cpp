#include<iostream>
using namespace std;

class Address{

    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        building="NULL";
        street="NULL";
        city="NULL";
        pin=0;
    }

    Address(string building,string street,string city ,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }

    void accept()
    {
        cout<<"Enter building, street, city and pin "<<endl;
        cin>>building>>street>>city>>pin;
    }
    void display()
    {
        cout<<"Building : "<<building<<" Street : "<<street<<" city : "<<city<<" and pin : "<<pin<<endl;
    }

  

    void setBuilding(string building)
    {
        this->building=building;
    }
    
    string getBuilding(){
        return this->building;
    }


   

    void setStreet(string street)
    {
        this->street=street;
    }
    string getStreet(){
        return this->street;
    }

    

    void setCity(string city)
    {
        this->city=city;
    }
    string getCity(){
        return this->city;
    }

    

    void setPin(int pin)
    {
        this->pin=pin;
    }
    int getPin()
    {
        return this->pin;
    }
};
int main()
{
    Address a;
    a.accept();
    a.display();


    Address a1("Sunbeam","Hinjewadi","Pune",411057);
    // a1.display();
    a1.setCity("Sangli");
    // cout<<a1.getCity();
    // a1.display();
    a1.setPin(416416);
    // cout<<a1.getPin();
    a1.display();
    return 0;
}