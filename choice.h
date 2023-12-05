#include<iostream>
#include"calculate1.h"
using namespace std;

void select(int choice,int curr)
{
    
    switch(choice)
    {
        case 1: 
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                 Indian Ruppee -->> Afghanistan Afghani";
                cout<<"\n                  1 INR = 0.82286 Afghani"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;
        
        case 2: 
                cout<<"                ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                 Indian Ruppee -->> Australia Australian dollar ";
                cout<<"\n                 1 INR = 0.01809 Australian dollar"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                cout<<"                 ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 3: 
                cout<<"                 ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                 Indian Ruppee -->> Bangladesh Taka ";
                cout<<"\n                 1 INR =1.30969 Taka"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                cout<<"                 ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 4: 
                cout<<"                ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                 Indian Ruppee -->>Brazil Real ";
                cout<<"\n                  1 INR =0.05891 Real"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"               ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 5: 
                 cout<<"             ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Canada Canadian dollar";
                cout<<"\n                 1 INR = 0.01623 Canadian dollar"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"             ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 6: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> China Chinese Yuan";
                cout<<"\n               1 INR = 0.08493 Chinese Yuan"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 7: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> Denmark Danish Krone";
                cout<<"\n               1 INR = 0.08218 Danish Krone"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 8: 
                 cout<<"             ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"              Indian Ruppee -->> Dominican Republic Dominican Peso";
                cout<<"\n              1 INR = 0.67749 Dominican Peso"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"             ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;    
        case 9: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"              Indian Ruppee -->> Egypt Egyptian pound ";
                cout<<"\n               1 INR = 0.3706 Egyptian pound"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;
        case 10: 
                cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                    Indian Ruppee -->> Finland Euro";
                cout<<"\n                     1 INR =0.01102 Euro"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"           ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;
        case 11: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                   Indian Ruppee -->>France Euro";
                cout<<"\n                   1 INR = 0.01102 Euro"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 12: 
                cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                 Indian Ruppee -->> Germany Euro";
                cout<<"\n                  1 INR = 0.01102 Euro"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"           ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 13:
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl; 
                cout<<"                Indian Ruppee -->> Indonesia Rupiah";
                cout<<"\n                 1 INR = 185.606 Rupiah"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;
         
        case 14: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                  Indian Ruppee -->> Iran Rial";
                cout<<"\n                   1 INR = 504.404 Rial"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 15: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Japan Yen ";
                cout<<"\n                 1 INR = 1.77209 Yen"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;
        case 16: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Malaysia Ringgit";
                cout<<"\n                 1 INR = 0.05609 Ringgit"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 17: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Mauritania Ouguiya";
                cout<<"\n                 1 INR = 0.47484 Ouguiya"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 18: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Nepal Nepalese Rupee";
                cout<<"\n                 1 INR = 1.58243 Rupee"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 19: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Netherlands Euro";
                cout<<"\n                 1 INR = 0.01102 Euro"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break; 

        case 20: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                  Indian Ruppee -->> Russia Ruble";
                cout<<"\n                   1 INR = 1.08237 Ruble"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 21: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"              Indian Ruppee -->> South Korea South Korean Won";
                cout<<"\n               1 INR = 15.6133 South Korean Won"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                break;

        case 22: 
                 cout<<"            '''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"              Indian Ruppee -->> Singapore Singapore dollar";
                cout<<"\n               1 INR = 0.01604 Singapore dollar"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 23: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> Spain Euro ";
                cout<<"\n                1 INR = 0.01102 Euro"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 24: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> Switzerland Swiss Franc";
                cout<<"\n                1 INR = 0.01048 Swiss Franc"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 25: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"                Indian Ruppee -->> Taiwan Taiwan Dollar";
                cout<<"\n                 1 INR = 0.37559 Taiwan Dollar"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 26: 
                 cout<<"            '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> United Arab Emirates  U.A.E. Dirham";
                cout<<"\n                1 INR = 0.04408 Dirham"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;

        case 27: 
                 cout<<"            ''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> United Kingdom Pound Sterling";
                cout<<"\n                1 INR = 0.00948 Pound Sterling"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;               
        case 28: 
                cout<<"            ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                cout<<"               Indian Ruppee -->> United States of America Dollar";
                cout<<"\n             1 INR = 0.01201 Dollar"<<endl;
                cout<<"              ''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                calculate(choice,curr);
                 cout<<"            '''''''''''''''''''''''''''''''''''''''''''''''''''''''''"<<endl;
                break;   

        default: cout<<"                       You Enter Wrong Option Please Try again.."<<endl;                
    }
    
}