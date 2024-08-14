#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> sum_arr(vector<int> & , vector<int> &);
vector<int> reverse_arr(vector<int>);

int main()
{
    int n,m,i,a;
    cout<<"Enter the size of the first arr : ";
    cin>>n;
    vector<int> arr1;
    cout<<"enter the data in the first arr : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr1.push_back(a);
    }
    cout<<"Enter the size of the second array : ";
    cin>>m;
    vector<int> arr2;
    cout<<"Enter the data in the second array : \n";
    for(i=0;i<m;i++)
    {
        cin>>a;
        arr2.push_back(a);
    }
    vector<int> ans;
    ans = sum_arr(arr1,arr2);
    cout<<"The sum of both array is : \n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\t";
    }
    return 0;
}

vector<int> sum_arr(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i,j;
    i = n-1;
    j = m-1;
    int sum = 0;
    int carry = 0;
    vector<int> ans;
    while(i>=0 && j>=0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];
        sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0)
    {
        sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0)
    {
        sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry != 0 )
    {
        sum =  carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    return reverse_arr(ans);
    cout<<"end\n";
}

vector<int> reverse_arr(vector<int> ans)
{
    int s =0 ;
    int e = ans.size()-1;
    while(s<e)
    {
        swap(ans[s++],ans[e--]);
    }
    return ans;
}