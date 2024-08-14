#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

void reverse_arr(vector<int> &);

int main()
{
    int i,n,a;
    system("CLS");
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Ente rthe data in the arr : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    reverse_arr(arr);
    cout<<"The reverse array is : \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}

void reverse_arr(vector<int> &arr)
{
    int s=0;
    int n = arr.size();
    int e = s;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}