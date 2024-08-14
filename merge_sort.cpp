#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

void merge_sort(vector<int> &,vector<int> & ,vector<int> &);

int main()
{
    int n,i,a,m;
    system("CLS");
    cout<<"Enter the size of first array : ";
    cin>>n;
    vector<int> arr1;
    cout<<"Enter the data in the first array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr1.push_back(a);

    }
    cout<<"Enter the size of second array : ";
    cin>>m;
    vector<int> arr2;
    cout<<"Enter the data in the second array : \n";
    for(i=0;i<m;i++)
    {
        cin>>a;
        arr2.push_back(a);
    }
    vector<int> arr3;
    merge_sort(arr1,arr2,arr3);
    int o = m+n;
    for(i=0;i<o;i++)
    {
        cout<<arr3[i]<<"\n";
    }
    return 0;
}

void merge_sort(vector<int> &arr1 , vector<int> &arr2 , vector<int> &arr3)
{
    int i=0,j=0,n,m;
    n = arr1.size();
    m = arr2.size();
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n)
    {
        arr3.push_back(arr1[i]);
        i++;
    }
    while(j<m)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
}