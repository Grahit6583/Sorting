//merge sort without using third array
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void merge_sort(vector<int>& arr1,vector<int>& arr2);

int main()
{
    int n,m,i,a;
    cout<<"Enter the size of second array : ";
    cin>>n;
    cout<<"Enter the size of first array : ";
    cin>>m;
    vector<int> arr1,arr2;
    cout<<"Enter the data in the second array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr2.push_back(a);
    }
    cout<<"Enter the data in the first array : \n";
    for(i=0;i<m;i++)
    {
        cin>>a;
        arr1.push_back(a);
    }
    merge_sort(arr1,arr2);
    for(i=0;i<n+m;i++)
    {
        cout<<arr1[i]<<"\t";
    }
    return 0;
}

void merge_sort(vector<int>& arr1 , vector<int>& arr2)
{
    int n,m;
    n = arr2.size();
    m = arr1.size();
    int i,j;
    i = m-1;//first
    j = n-1;//second
    while(i>=0 && j>=0)
    {
        if(arr1[i]>arr2[j])
        {
            arr1[i+j+1] = arr1[i];
            i--;
        }
        else
        {
            arr1[i+j+1] = arr2[j];
            j--;
        }
    }
    while(j>=0)
    {
        arr1[i+j+1] = arr2[j];
        j--;
    }
}