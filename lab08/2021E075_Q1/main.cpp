//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab09
//Find out even or odd number using pointers
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int main()
{
    int num;
    int *po;

    po=&num;

    cout<<"Enter your number = ";
    cin>>num;
    if(*po%2!=0){
            cout<<"Number Is odd";
            }
    else if(*po%2==0){
            cout<<"Number Is even";
            }
    return 0;
}
