//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab04
//check the given number prime number or not
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int prime(int,int);
int i=0;
int main()
{
    int k;
    cout << "Enter your number = ";
    cin>>k;

    cout<<"Your number "<<prime(k,1)<<" is a prime number"<<endl;

    return 0;
}
int prime(int x , int y){
    if (x%y==0){
            i++;}
    if (x==y){
        if (i==2){
            return x;}
        else{
            cout<<"Your number "<<x<<" is not a prime number ";
        }
    }
    prime(x,y+1);
    }


