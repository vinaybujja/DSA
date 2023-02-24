#include<iostream>
using namespace std;

int search(int *array, int size, int value)
{
 for(int i = 0; i<size; i++)
 {
   if(array[i] == value)
   {
     return i;
   }
 }
  return -1;
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
   cout<<"index :"<<search(arr,n,5);
  return 0;
}
