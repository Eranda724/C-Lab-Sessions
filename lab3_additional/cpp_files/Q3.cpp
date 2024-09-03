//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab03
//find the multiplication of all those 10 numbers
//I certainly  that the code in the method function main of this project
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i , sum = 1 ,t  ;
    for(i=1 ; i<=10 ; i++){
        cout<<"Enter number = ";
        cin>>t;
        sum = sum*t;
    }
    cout << "multiplication is = " <<sum;
    return 0;
}
