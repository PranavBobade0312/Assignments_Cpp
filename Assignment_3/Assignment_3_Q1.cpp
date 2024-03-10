#include<iostream>
using namespace std;


class Time{

    int h;
    int m;
    int s;

public:
    Time()
    {
        this->h=0;
        this->m=0;
        this->s=0;
    }
    Time(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }

    void printTime()
    {
        cout<<"Time : "<<h<<" : "<<m<<" : "<<s<<endl;
    }

    void setHour(int h)
    {
        this->h=h;
    }
    int getHour()
    {
        return this->h;
    }

     void setMinute(int m)
    {
         this->m=m;
    }
    int getMinute()
    {
        return this->m;
    }

    void setSeconds(int s)
    {
         this->s=s;
    }
    int getSeconds()
    {
        return this->s;
    }

};
int main()
{
    // Time *ptr=new Time[5]{Time(06,28,29),Time(12,53,56),Time(01,30,56),Time(02,53,31),Time(10,54,00)};
    
    Time *ptr[5];

   
    ptr[0]=new Time;
    ptr[1]=new Time(12,53,56);
    ptr[2]=new Time(02,53,31);

    for(int i=0;i<3;i++)
    {
        ptr[i]->printTime();
    }



    ptr[1]->setHour(03);
    cout<<ptr[1]->getHour()<<endl;

    ptr[0]->setHour(05);
    cout<<ptr[0]->getHour()<<endl;

    for(int i=0;i<3;i++)
    {
        ptr[i]->printTime();
    }

     for(int i=0;i<5;i++)
     {
        delete ptr[i];
        ptr[i]=NULL;
     }
    return 0;
}