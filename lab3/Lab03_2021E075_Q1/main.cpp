//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab03
//check his/her eligibility to get driver license
//I certainly  that the code in the method function main of this project
#include <iostream>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string fname , lname;
    int age , amcno , lno;

    cout << "Enter your First name = " << endl;
    cin>>fname;
    cout << "Enter your last name = " << endl;
    cin>>lname;
    cout << "Enter your age = " << endl;
    cin>>age;
    if (age>17){
            cout << "Enter your learner number = " << endl;
            cin>>lno;
            if (lno==0){
                cout<<"You can register for written exam"<<endl;}
            else{
                cout<<" a learners permit is issued and you can practice driving"<<endl;
                }
                if (age>18){
                        cout << "Enter your Aptitude Medical Certificate No = " << endl;
                        cin>>amcno;
                        cout << "You can take for practical exam" << endl;}}

    else{
        cout<<"You can't register for written exam";
    }
    return 0;

}
