#include<iostream>
#include<fstream>
#include"country.h"
#include"choice.h"
using namespace std;
int main()
{
    float ruppee;
    int choice;
    cout<<"                               -------------> Currency Converter <----------------"<<endl;
    cout<<"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout<<"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout<<"                                         Indian Currency to any Currency"<<endl;
    cout<<"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
    cout<<"                                            Countries and Currencies"<<endl;
    displayCountry();
    int key=1;
    while(key==1)
    {
    cout<<" \n\n                       Indian Ruppee:  ";
    cin>>ruppee;
    cout<<"\n                       Choose the country from the list: ";
    cin>>choice;
    select(choice,ruppee);
    cout<<"               To Use again Please Enter 1 otherwise press any key: ";
    cin>>key;
    }
    cout<<"\n                 Thank You Visit Again!!"<<endl;

    return 0;    
}