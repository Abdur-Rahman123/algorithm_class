#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void Bubble_sort(int a[],int n)
{
    for(int pass=1;pass<n;pass++)
    {
      for(int j=0;j<n;j++)
      {
          if(a[j]>a[j+1])
          {
              swap(&a[j],&a[j+1]);
          }
      }
    }
}
int main()
{
    int arr[6];
    int n=6;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    Bubble_sort(arr,n);
    print(arr,n);
}
