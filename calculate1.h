#include<iostream>
#include<fstream>
using namespace std;
void calculate(int choice,float inr)
{
    float num,curr;
    ifstream file("price.txt");
    if(file.is_open())
    {
    for(int i=0;i<choice;i++)
    {
       file>>num;
    }
    curr=inr*num;
    //cout<<inr<<" Indian Rupees = "<<curr<<endl;
    file.close();
    }
    else
    {
        cout<<"              Error Please Try Again!!";
    }
    ifstream file2("currency.txt");
    string line;
    if(file2.is_open())
    {
    for(int i=0;i<choice;i++)
    {
       file2>>line;
    }
    curr=inr*num;
    cout<<"                "<<inr<<" Indian Rupees = "<<curr<<" "<<line<<endl;
    file.close();
    }
    else
    {
        cout<<"                Error Please Try Again!!";
    }


}
    
    
