//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab03
//switch case to check the eligibility of the student to go next level
//I certainly  that the code in the method function main of this project
#include <iostream>

using namespace std;

int main()
{
    string name , subject ;
    int reg_no;
    char grade;

    cout << "Enter your name = " << endl;
    cin>>name;
    cout << "Enter your subject = " << endl;
    cin>>subject;
    cout << "Enter your Register no = " << endl;
    cin>>reg_no;
    cout << "Enter your grade = " << endl;
    cin>>grade;

    switch (grade){
case 'A':
    cout << "Excellent, your grade is A." << endl;
    break;
case 'B':
    cout << "Well done, your grade is B." << endl;
    break;
case 'C':
    cout << "You passed, your grade is C." << endl;
    break;
case 'D':
    cout << " Better try again, your grade is D." << endl;
    break;
default:
    cout << "Invalid grade." << endl;
    break;
    }

    return 0;
}
