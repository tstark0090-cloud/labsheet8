#include <iostream>
using namespace std;

int diagonalSum(int mat[10][10], int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum += mat[i][i];
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;

    int mat[10][10];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>mat[i][j];

    cout<<"Diagonal Sum = "<<diagonalSum(mat,n);

    return 0;
}