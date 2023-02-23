/*
worst = O(n^2)
space complexity = O(1)
*/
#include<iostream>
using namespace std;

void selection_sort(int array[], int n)
{   
    int small, ind;
    for(int i = 0; i<n; i++)
    {
        small = array[i];
        ind = i;
        for(int j = i; j<n; j++)
        {
            if(small>array[j])
            {
                small = array[j];
                ind = j;
            }
        }
        array[ind] = array[i];
        array[i] = small;
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
    selection_sort(arr, n);
    cout<<"sorted array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
