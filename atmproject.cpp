#include<iostream>
using namespace std;
void menu()
{
    cout<<"**********MENU**********"<<endl;
    cout<<"1. CHECK BALANCE"<<endl;
    cout<<"2. DEPOSIT"<<endl;
    cout<<"3. WITHDRAW"<<endl;
    cout<<"4. EXIT"<<endl;
    cout<<"********************"<<endl;

    
}
int main()
{
    int bal=1000;
    int op;
    
do

{
    menu();
    cout<<"option"<<endl;
    cin>>op;
    system("cls");
    switch(op)
    {
        case 1: cout<<"balance is: "<<bal<<endl;
        break;
        case 2:cout<<"deposite amount is:"<<endl;
        double am ;
        cin>>am;
        bal += am;
        break;
        case 3:cout<<"wihdraw amount is:"<<endl;
        int wi;
        cin>>wi;
        if(wi>=bal)
        {
            cout<<"NOT SUFFIENT MONEY"<<endl;
        }
        else
        {bal =bal-wi;
        }
        break;
        default:cout<<"enter valid option"<<endl;

    }
}while(op!=4);

return 0;
}