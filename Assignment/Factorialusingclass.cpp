#include<iostream>
using namespace std;
class Factorial
{
  public:
  int factorial(int n)
  {
    if(n==1){return 1;}
    int f = n * factorial(n-1);
    return f;
}

};

int main()
{
  int n;
  cin>>n;
  Factorial *f = new Factorial();
  cout<<"Factorial of "<<n<<" is "<<f->factorial(n)<<endl;


}