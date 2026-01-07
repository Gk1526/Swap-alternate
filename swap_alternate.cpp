#include<iostream>
using namespace std;

void swap(int arr[], int n)
{
    for(int i=0; i<n; i+=2)
    { 
        if(i+1 < n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    int brr[6] = {60,70,80,90,100,110};

    swap(arr,5);
    swap(brr,6);

    printarray(arr,5);
    printarray(brr,6);

    return 0;
}