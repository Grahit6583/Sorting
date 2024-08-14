#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> & ,int);
int main ()
{
    int n,i,a;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the data in the array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    selectionSort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}

void selectionSort(vector<int> &arr ,int n)
{
    int minindex;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        minindex =i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex] , arr[i]);
    }
}