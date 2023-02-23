/*
worst = O(n^2)
space complexity = O(1)
*/
#include<iostream>
using namespace std;

void insertion_sort(int array[], int n)
{
    int j;
    for(int i = 0; i<n; i++)
    {
        j = i;
        while (array[j]>array[j+1] && j>=0)
        {
            array[j] = array[j] + array[j+1];
            array[j+1] = array[j] - array[j+1];
            array[j] = array[j] - array[j+1];
            j--;
        }
        
    }
}

int main()
{
    int n, *arr;
    
    cout<<"no of elements"<<endl;
    cin>>n;
    arr = new int[n];
    cout<<"enter num:"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    cout<<"sorted array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
