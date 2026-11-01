#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
            return mid;

        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    return -1;
}

int main()
{
    int n,key;

    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>key;

    int pos=binarySearch(arr,n,key);

    if(pos!=-1)
        cout<<"Found at index "<<pos;
    else
        cout<<"Not Found";

    return 0;
}