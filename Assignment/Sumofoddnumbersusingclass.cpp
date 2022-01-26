#include<iostream>
using namespace std;
class Sum
{
  public:
  void OddSum()
  {
    int sum=0;
    for(int i=1;i<100;i++)
    {
      if(i%2!=0)
      {
        sum+=i;
      }
    }
    cout<<"Sum of odd numbers between 1 and 100 is "<<sum<<endl;

  }
};
int main()
{
  Sum *s = new Sum();
  s->OddSum();
}