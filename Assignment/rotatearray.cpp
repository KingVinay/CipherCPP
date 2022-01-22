#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int c;
  cin>>c;
  int i=0,j=1,temp = a[0];

  while(c>0)
  {
    
    a[i++]=a[j++];

    if(j==n)
    {
      a[j-1]=temp;
      c--;
      i=0;
      j=1;
      temp = a[0];
    }


  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

}