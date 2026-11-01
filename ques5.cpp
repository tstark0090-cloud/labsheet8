#include <iostream>
#include <cstring>
using namespace std;

int countWords(char str[])
{
    int count = 1;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
            count++;
    }

    return count;
}

int main()
{
    char str[100];

    cin.getline(str,100);

    cout<<"Words = "<<countWords(str);

    return 0;
}