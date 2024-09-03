//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab03
//help a customer involving two cases, deposit and withdraw amount
//I certainly  that the code in the method function main of this project
#include <iostream>
using namespace std;

int main()
{
    string p;
    int acc , wanttoget,wanttodeposit,amount=1000;
    //Lets get current amount in the bank account is 1000
    cout << "....Welcome to our Bank...." << endl;
    cout << "Enter your account number." << endl;
    cin>>acc;
    cout << "What is the service do you want today." << endl;
    cin>>p;

    if (p =="withdraw"){
            cout<<"Enter the value of money do you want to get = ";
            cin>>wanttoget;
            while(amount<wanttoget){
                cout<<"Account balance is not enough"<<endl;
                cout<<"Enter the value of money do you want to get";
                cin>>wanttoget;
                }
            cout<<"You have enough account balance and you successfully withdraw your money";
            }
    else{
        cout<<"Enter balance if you want to deposit = ";
        cin>>wanttodeposit;
        while(wanttodeposit<=0){
            cout<<"Please enter valid positive value to deposit"<<endl;
            cout<<"Enter balance if you want to deposit = ";
            cin>>wanttodeposit;
        }
        cout<<"you successfully deposit your money";
    }
    return 0;
}
