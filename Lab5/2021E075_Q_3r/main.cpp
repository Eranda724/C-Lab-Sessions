// K.J.M.U.G.S. Eranda Jayasinghe
// 2021E075
// EC2010
// Group B
// Lab05
// Fibonacci  recursive
// I certify that the code in the method function main of this project
// is entirely my own work.
#include <iostream>

using namespace std;
int fib(int n)
{
     if(n==1){
         return 0;
    }
    if(n==2||n==3){
         return 1;
    }
    else{
         return (fib(n-1)+fib(n-2));
    }

}
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(int i=1;i<n+1;i++){
        int j=fib(i);
        cout<<j<<" , ";
    }
    return 0;
}
