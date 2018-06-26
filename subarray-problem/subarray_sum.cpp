#include<iostream>
using namespace std;
int main()
{
 int n,i,j;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
  int sum=0;
  for(j=i;j<n;j++)
  {
   sum=sum+a[j];
   cout<<sum<<" ";
  }
 }
 return 0;
}

