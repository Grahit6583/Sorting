#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

void insertion_sort(vector<int> &,int);

int main()
{
    int i,n,a;
    system("CLS");
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"enter the data in the arr : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    insertion_sort(arr,n);
    cout<<"The sorted array is : \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return  0;
}

void insertion_sort(vector<int> &arr , int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp = arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}