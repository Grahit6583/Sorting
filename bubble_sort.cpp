#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void bubble_sort(vector<int> & , int);
int main()
{
    int n,i,a;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the data in tha array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    bubble_sort(arr,n);
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}

void bubble_sort(vector<int> &arr ,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int swapped = false;
        for(j=0;j<n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
            if(swapped == false)
            {
                break;
            }
        }
    }
}