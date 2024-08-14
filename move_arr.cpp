#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void rotate(vector<int> & , int);

int main()
{
    int n,i,a,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Enter the position to rotate array : ";
    cin>>k;
    rotate(arr,k);
    cout<<"The rotated array is : \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
void rotate(vector<int> & arr, int k)
{
    int i;
    vector<int> temp(arr.size());
    for(i=0;i<arr.size();i++)
    {
        temp[(i+k) % arr.size()] = arr[i];
    }
    arr  = temp;
}
