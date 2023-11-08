#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,X, cost;
	cin >> T;
	while(T--)
	{
	    cin >> N >> X;
	    if(N%6==0)
	    {
	        cost=(N/6)*X;
	        cout << cost << endl;
	    }
	    else
	    {
	        cost=(N/6)*X + X;
	        cout << cost << endl;
	    }
	    
	}
	return 0;
}
