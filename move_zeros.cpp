#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void move_zeros(vector<int>&);

int main()
{
    int n,i,a;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the data in array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    cout<<"the array of moved zeros is : \n";
    move_zeros(arr);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}

void move_zeros(vector<int>& arr)
{
    int i=0;
    int n = arr.size();
    int j;
    for(j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
}