#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y,i,n,floorx,floory;
	cin >> T;
	
	while(T--)
	{
	  cin >> X >> Y;
	  for(int i=1;i<=10;i++)
	  {
	      if(X>=(10*(i-1)+1) && X<=(10*i))
	      {
	           floorx=i;
	      }
	      if(Y>=(10*(i-1)+1) && Y<=(10*i))
	      {
	           floory=i;
	      }
	      
	  }
	  if(floorx > floory)
	  cout << floorx - floory << endl;
	  else
	  cout << floory - floorx << endl;
	}
	return 0;
}
