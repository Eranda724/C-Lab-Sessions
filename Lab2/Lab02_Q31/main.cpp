//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab02
//Build simple calculater in c++
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int main()
{
    double num1,num2,sum;
    char op;
    cout << "Enter your first number = ";
    cin>>num1>>num2;

    cout<<"Enter your second operater(+,*,-,/):+ = ";
    cin>>op;

    if(op== '+'){
        sum=num1+num2;
        cout << "Addition result =  " << sum;
    }
    else if (op=='-'){
        sum=num1-num2;
        cout << "Subtraction result =  " << sum;
    }
    else if (op=='*'){
        sum=num1*num2;
        cout << "multiplication result =  " << sum;
    }
    else if (op=='/'){
        sum=num1/num2;
        cout << "division result =  " << sum;
    }
    else{
        cout<<"invalid operater";
    }
    return 0;
}
