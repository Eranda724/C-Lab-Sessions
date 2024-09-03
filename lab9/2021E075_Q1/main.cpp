#include <iostream>

using namespace std;

int main()
{
    double val , fin;
    int type;
    char p='g';
    cout << "Enter your value of money = ";
    cin>>val;

    while(p=='g'){
        cout<<"US dollar =1 , Euro = 2 , Pound Sterling = 3 , Yuan = 4"<<endl;
        cout<<endl;
        cout<<"Enter your first letter of the currency type = ";
        cin>>type;

        switch(type){
            case 1:
                fin=val*0.0027;
                break;

            case 2:
                fin=val*0.0026;
                break;

            case 3:
                fin=val*0.0023;
                break;

            case 4:
                fin=val*0.019;
                break;

        }
        cout<<"Your value is = "<<fin<<endl;

        cout<<"Do you want to continue press Y = ";
        cin>>p;
    }
    return 0;
}
