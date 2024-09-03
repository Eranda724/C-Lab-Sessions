//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab03
//find the summation of positive numbers
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int main()
{
    int i=1 , sum = 0 ,t  ;
    do{
        cout<<"Enter number = ";
        cin>>t;
        if (t>0)
        {
           sum = sum+t;
           i++;
        }
        else{
            i++;
        }
    }
    while(i<=10);
    cout << "multiplication is = " <<sum;
    return 0;
    }
