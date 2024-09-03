//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab04
//Task 01:Determine the shape using c++ class
//I certainly  that the code in the method function main of this project
#include <iostream>
using namespace std;

class Shape{
public:
    float surface_area;
public:
    float radius;
public:
    float height,length,breadth;

public:
    void get()
    {
        cout<<"Enter the radius: ";
        cin>>radius;
        cout<<"Enter height : ";
        cin>>height;
        cout<<"Enter length : ";
        cin>>length;
        cout<<"Enter breadth : ";
        cin>>breadth;
    }
    double Surface_areasphere(){
        surface_area=(4*22*radius*radius)/7;
        return surface_area;
    }

    double Surface_areacylinder(){
    surface_area =
         ((2*22*radius*height)/7)*((2*22*radius*radius)/7);
         return surface_area;
    }
    double Surface_areaCuboid(){
        surface_area=
          (2*(length*breadth)+(breadth*height)+(length*height));
              return surface_area;
    }
};
int main()
{
    Shape s;
    s.get();
    float sphere;
    sphere = s.Surface_areasphere();
    cout<<"Surface area of Sphere : "<<sphere<<endl;
    cout<<endl;s.Surface_areasphere();
    float cylinder;
    cylinder = s.Surface_areacylinder();
    cout<<"Surface area of Cylinder : "<<cylinder<<endl;
    cout<<endl;
    float cuboid;
    cuboid=s.Surface_areaCuboid();
    cout<<"Surface area of Cuboid : "<<cuboid<<endl;
    cout<<endl;
    return 0;
}
