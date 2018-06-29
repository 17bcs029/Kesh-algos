#include<iostream>
using namespace std;
int main()
{
 int n,i,j;   # initialise the size of the array
 cin>>n;
 int a[n];    #initialise the array
 for(i=0;i<n;i++)
 {
  cin>>a[i];        #take a input array
 }
 for(i=0;i<n;i++)
 {
  int sum=0;
  for(j=i;j<n;j++)
  {
   sum=sum+a[j];     
   cout<<sum<<" ";  # print the value of the sum; 
  }
 }
 return 0;
}

