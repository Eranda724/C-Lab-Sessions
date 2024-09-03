//K.J.M.U.G.S. Eranda Jayasinghe
//2021E075
//EC2010
//BY1
//Lab09
//Find out length of the given string
//I certainly  that the code in the method function main of this project

#include <iostream>
using namespace std;

int str_length(char* str)
{

    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }

    return len;
}

int main()
{
    char str[] = "Hello I am Programming langugae";
    cout <<"Length of string [Hello I am Programming language] is = "<<str_length(str);
    return 0;
}
