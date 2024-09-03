//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab10
//hotel reservation system
//I certainly that the code in the method function main of this project
#include <iostream>
using namespace std;
int n = 1 ;
class Reservation{
    public :
    int room ;
    char food ;
    int count=0;
    void type ()
    {
        cout << "Booking number - " << n<< endl;
        cout << "What type of room do you need ? (Single bedroom = 1 , Double bedroom = 2)"<<endl;
        cin >> room ;
        if (room == 1){
                count +=1000;
                }
        else if (room == 2){
                count +=2000;

 }
        cout << "Do you want to breakfast (Y/N)? "<< endl;
        cin >> food ;
        if (food == 'Y'){
                count+=200;
                }
        else{
                count+=0;
                }
        cout << "The room is booked. pay "<<count<<endl;
        n++;
}};
int main()
{
    cout << "Welcome to the hotel reservation system !" << endl;
    cout << endl;
    cout<<"Available Rooms"<<endl;
    cout << "Single bedrooms:" << endl;
    cout << "Total- 50" << endl;
    cout << "Available-30" << endl;
    cout << "Price per room-1000\n" << endl;

    cout << "Double bedrooms:"<< endl ;
    cout << "Total- 50"<< endl;
    cout << "Available-20"<< endl;
    cout << "Price per room-2000" << endl;
    cout << "Breakfast will be provided for 200."<< endl;

    cout << endl;
    int n = 1 ;
    n++ ;
    while(n>0){
            Reservation booking;
            booking.type() ;
    }
 return 0;
}

