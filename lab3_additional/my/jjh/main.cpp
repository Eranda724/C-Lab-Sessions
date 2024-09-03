#include <iostream>

using namespace std;

int main()
{
    int i=1 , t=0 , sum=0 ;
    while (i<=10){
        cout<<"Enter name = ";
        cin>>t;
        sum+=t;
        i++;
    }
    cout<<sum;
    return 0;
}
