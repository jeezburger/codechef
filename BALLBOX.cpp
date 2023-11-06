#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, t, n, k;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>k;
	    k=k*(k+1)/2;
	    if(n>=k)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
