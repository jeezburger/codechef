// Update the code below to solve the problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
  int X;
  cin>>X;
  if(X%5==0){
      if(X%10!=0){
          cout<<(X/10)+1<<endl;
      }
      else if(X%10==0){
         cout<<X/10<<endl;
      }
  }
  else{
      cout<<-1<<endl;
  }
  
  }
return 0;
}
