#include<iostream>
using namespace std;
int power(int a, int b)
{
  // Method - 1
  // if(b==0){return 1;}
  // return (a*power(a,b-1));

  // Method - 2
  if(b==0){
        return(1);
    }
    
    int product = power(a , b/2);
    if(b%2==0)
        return (product*product);
    else
        return(a*product*product);

}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<power(a,b);
}