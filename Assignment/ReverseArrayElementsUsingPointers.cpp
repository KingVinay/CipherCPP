#include<iostream>
using namespace std;
int main()
{
  int A[] = {10,5,7,9,4};
  int n = sizeof(A)/sizeof(int);
  int* ptr;
  ptr = A;
  while(n>0)
  {
    cout<<*(ptr+n-1)<<endl;
    n--;
  }
}