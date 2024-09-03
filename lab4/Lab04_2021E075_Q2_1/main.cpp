#include <iostream>
#include<conio.h>

using namespace std;

int main() {
   char str[40];
   int i = 0;

   str[40]= 'Hello I am Programming langugae';
   while (*str != '\0') {
      i++;
      str[40]++;
   }
   cout << "Length of String : " << i;

   getch();
   return 0;
}

