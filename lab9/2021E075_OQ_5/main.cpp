# include <iostream>
#include <string>

using namespace std;
class Bank{
    private:
        char name;
        int acno;
        float balance=10000;
    public:
        void withdraw();
        void deposit();
    };

void Bank::deposit()
{
float more;
cout <<"Depositing............."<<endl;
cout<<"Enter the amount to deposit : ";
cin>>more;
cout<<"You are deposit = "<<more;
balance+=more;
cout<<"Your balance is = "<<balance;
}
void Bank::withdraw()
{
float amt;
cout<<"Withdrawing............."<<endl;
cout<<"Enter the amount to withdraw : ";
cin>>amt;
cout<<"You are deposit = "<<amt;
balance-=amt;
cout<<"Your balance is = "<<balance;
}

int main(){
    Bank obj;
    int choice  =1;
    while (choice != 3 ){
        cout<<"\nEnter \n 1- Deposit\n 2- Withdraw \n 3-Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1 :
                obj.deposit();
                break;
            case 2:
                obj.withdraw();
                break;
            case 3:
                break;
            default:
                cout<<"Illegal Option"<<endl;}}}
