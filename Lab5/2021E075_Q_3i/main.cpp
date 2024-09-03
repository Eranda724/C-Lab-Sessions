// K.J.M.U.G.S. Eranda Jayasinghe
// 2021E075
// EC2010
// Group B
// Lab05
// Fibonacci iterative
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,x=0;
    cout<<"Enter the number = ";
    cin>>n;
    for (int i=1;i<=n;i++){
            if(i==1){
                cout<<a<<" , ";
                continue;
    }
            if(i==2){
                cout<<b<<" , ";
                continue;
    }
    x=a+b;
    a=b;
    b=x;
    cout<<x<<" , ";
    }

    return 0;
}
