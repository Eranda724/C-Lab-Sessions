//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab02
//Create function to get area and circumference of circle in c++
//I certainly  that the code in the method function main of this project
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    double r , pi=3.14 , Area , Circumference;

    cout << "Enter the radius of a circle = ";
    cin>>r;

    Area = 2*pi*r;
    Circumference = pi*r*r;

    cout << "Area of circle : " <<Area<<endl;
    cout << "Circumference of circle : "<<Circumference;
    return 0;
}
