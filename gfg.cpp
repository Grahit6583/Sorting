#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 4 };
    int size = *(&arr + 1) - arr;
    cout << "Number of elements in arr[] is " << size;
    return 0;
}