//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab04
//Task 01:create class and get name and age
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

class Sample{
public:
    int age;
private:
    string name;
public:
void displayAge(){
    cout<<"Age = "<<age<<endl;
}
public:
    void displayname(string n)
    {
        name=n;
        cout<<"Name ="<<name<<endl;
    }
};
int main()
{
    Sample obj1;
    cout<<"Enter your age: ";
    cin>>obj1.age;
    string nameinput;
    cout<<"Enter your name: ";
    cin>>nameinput;
    obj1.displayAge();
    obj1.displayname(nameinput);
    return 0;
}
