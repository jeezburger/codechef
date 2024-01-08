#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    k=k*(k+1)/2;  //following the logic that the nth box has n balls. 
	    if(n>=k)      //if the boxes can fit balls in boxes with this logic then no two boxes will contain the same number of balls.
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
