#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> &);

int main()
{
    int i,n,a;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    bool ans = true;
    if(ans == check(arr))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}

bool check(vector<int> &arr)
{
    int i,n;
    n = arr.size();
    int count = 0;
    for(i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    return count<=1;
}