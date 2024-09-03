//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab04
//find factorial number in iterative
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int main()
{
    int k , i ,y=1;
    cout<<"Enter your number = ";
    cin>>k;

    for (i=0 ; i<k ;i++){
        y= y*(k-i);
    }
    cout<<"Your number "<<k<<" factorial number is = "<<y;
    return 0;
}
