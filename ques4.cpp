#include <iostream>
#include <cstring>
using namespace std;

void copyString(char source[], char destination[])
{
    strcpy(destination, source);
}

int main()
{
    char str1[100], str2[100];

    cin.getline(str1,100);

    copyString(str1,str2);

    cout<<"Copied String: "<<str2;

    return 0;
}