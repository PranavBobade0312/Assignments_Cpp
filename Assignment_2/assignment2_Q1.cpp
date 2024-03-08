#include<iostream>
using namespace std;

class Box{


    int length;
    int width;
    int height;

public:
    Box()
    {
        length =0;
        width=0;
        height=0;
    }

    void acceptData()
    {
        cout<<"Enter length, breadth and width :"<<endl;
        cin>>length>>width>>height;
    }
    void displayData()
    {
        cout<<"length: "<<length<<"width: " <<width<< "and"<<"height: "<<height<<endl;
        
    }

    int calVolume()
    {
        int volume=length*width*height;
        return volume;
    }

    void displayVolume()
    {
        int v=calVolume();
        cout<<"Volume : "<<v<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"1.Accept the data"<<endl;
    cout<<"2.display the data"<<endl;
    cout<<"3.Calculate the volume"<<endl;
    cout<<"4.Display volume"<<endl;
    cin>>choice;
    return choice;
}
int main()
{

    Box B;

    do
    {
        
        switch (menu())
        {
        case 1:
            B.acceptData();
            break;

        case 2:
            B.displayData();
            break;

        case 3:
            B.calVolume();
            break;
        
        case 4:
            B.displayVolume();
            break;

        default:
            cout<<"Enter corretct choice";
            break;
        }
    } while (menu()!=0);
    
    return 0;
}