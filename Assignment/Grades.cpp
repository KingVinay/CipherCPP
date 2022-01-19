#include<iostream>
using namespace std;
void Grades(int m)
{
  if(m>90 && m<101){cout<<"AA";}
  else if(m>80 && m<91){cout<<"AB";}
  else if(m>70 && m<81){cout<<"AB";}
  else if(m>60 && m<71){cout<<"BC";}
  else if(m>50 && m<61){cout<<"CD";}
  else if(m>40 && m<51){cout<<"DD";}
  else if(m<=40){cout<<"Fail";}
}
int main()
{
  int marks;
  cin>>marks;
  Grades(marks);
}