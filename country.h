#include<iostream>
#include<fstream>

using namespace std;

void displayCountry()
{  
    fstream file("country.txt");
    if(file.is_open())
    {
        string line;
        while(getline(file,line))
        {
         
            cout<<line;
            cout<<endl;
        }
    file.close();
    }
    else
    cout<<"ERROR TO DISPLAY THE COUNTRIES TRY AGAIN"<<endl;
    
}