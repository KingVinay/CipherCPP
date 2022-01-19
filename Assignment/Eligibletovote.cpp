#include<iostream>
using namespace std;
void vote(int a)
{
  if(a>=18){cout<<"eligible to vote";}
  else{cout<<"not eligible to vote";}
}
int main()
{
  int age;
  cout<<"Enter your Age: ";
  cin>>age;
  vote(age);

}