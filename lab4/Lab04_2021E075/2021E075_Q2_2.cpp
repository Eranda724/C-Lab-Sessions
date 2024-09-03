//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab04
//get factorial number using recursive way
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int factorial(int);

int main()
{
    int x,y;
    cout<<"Enter Positive number = ";
    cin>>x;

    y = factorial(x);
    cout<<"Your number "<<x<<"! , Factorial sum is = "<<y;
    return 0;
}
int factorial(int x){
    if (x>0){
        return x*factorial(x-1);
    }
    else{
        return 1;
    }
}
