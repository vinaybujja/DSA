#include<iostream>
using namespace std;

void bubble_sort(int array[], int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(array[j]>array[j+1])
            {
                array[j] += array[j+1];
                array[j+1] = array[j] - array[j+1];
                array[j] = array[j] - array[j+1];
            }
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
    bubble_sort(arr, n);
    cout<<"sorted array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
