//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab10
//hotel reservation system
//I certainly that the code in the method function main of this project
#include <iostream>

using namespace std;

class Reservation{
    public:
        int totalrooms;
        int available;
        int price;
        string type;
};
int main()
{
    char A;
    int count=0;
    int book=1;
    int k;

    while(book!=0){

    Reservation type1;
    type1.totalrooms = 50;
    type1.available = 30;
    type1.price = 1000;

    Reservation type2;
    type2.totalrooms = 50;
    type2.available = 20;
    type2.price = 2000;

    cout<<"Welcome to the hotel reservation system!"<<endl;
    cout<<"What type of room do you need? ";
    cin>>k;
    if (k ==1){
        cout<<type1.totalrooms<<endl;
        cout<<type1.available<<endl;
        cout<<type1.price<<endl;
        count += type1.price;
    }
    else if(k ==2){
        cout<<type2.totalrooms<<endl;
        cout<<type2.available<<endl;
        cout<<type2.price<<endl;
        count += type2.price;
    }
    else{
        cout<<"Enter valid answer";
    }
    cout<<"Do you want breakfast? (Y/N)"<<endl;
    cin>>A;

    if (A=='Y'){
        cout<<"Breakfast will be provided for 200."<<endl;
        count += 200;
    }
    else if(A=='N'){
        cout<<"Breakfast will not be provided for 200."<<endl;
    }
    else{
        cout<<"Enter valid answer";
    }
    cout<<"Booking number is "<<book<<endl;
    cout<<"The room is booked. Pay: "<<count<<endl;
    cout<<"Thank you";
    book+=1;
    }

    return 0;
}
