#include<iostream>
using namespace std;
int main()
{
  char a;
  char* ptr = &a;
  for(int i=0;i<26;i++){
    *ptr = i+'A';
    cout<<*ptr<<endl;
  }

}