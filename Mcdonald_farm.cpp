#include <iostream>
using namespace std;
int RectangleArea(int a, int b)
{
return (a*b);
}  
int main() {
  int length, side_a, side_b,square,square_2,square_3,nb1,nb2,suma;
  bool run= false;
  bool answer=false;
  string text;
  if(!answer)
  {
  cout<<"Type 'run' if you want to start ";
  cin>>text;
  if(text=="RUN" || text=="run" || text=="Run")
  answer=true;
  else 
  cout<<"Please start again";
  }
  if(answer==true)
  run=true;
  if(run==true)
  {
  cout<<"What is a fence lenght? ";
  cin>>length;
  side_a=length/3;
  side_b = length-(2*side_a);
  cout<<"Side A length = ?";
  cout<<"\nSide B length =?";
  int array[length];
  double max;
  int max_index;
  for (int i = 0; i < length; i++)
  {  
    array[i]=RectangleArea(side_a-(i),side_b+(2*i));
    if(array[i]>max)
    { 
    max=array[i];
    max_index=i;
    }
  }
  cout<<"\nOptimize value for A is: ";
  cout<<side_a-max_index;
  cout<<"\nOptimize value for B is: ";
  cout<<side_b+(2*max_index);
  }
  return 0;
}


