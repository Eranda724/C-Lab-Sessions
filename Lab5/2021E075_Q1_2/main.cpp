// K.J.M.U.G.S. Eranda Jayasinghe
// 2021E075
// EC2010
// Group B
// Lab 05
// check Palindrome
// I certify that the code in the method function main of this project
// is entirely my own work.

#include <iostream>
using namespace std;
bool Palindrom(string Str)
{
   int len=Str.length();
   char letter;
   char pal;

   for (int i=0;i<len;i++){
       letter=Str[i];
       pal=Str[(len-i)-1];
       if (pal!=letter){
            return false;
            break;
            }
       else{
            return true;
            }
}}

int main()
{
    string Str;
    cout<<"Enter the word = ";
    cin>>Str;
    bool j=Palindrom(Str);
    if(j==true){
        cout<<Str<<" is a palindrom";
    }
    else{
        cout<<Str<<" is not a palindrom";
    }
    return 0;
}
