#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int X,T;
	cin >> T;
	while(T--)
	{
	    cin >> X;
	    if(X>=80)
	    {
	        cout << "yes\n";
	    }
	    else
	    {
	        cout << "no\n";
	    }
	}
	return 0;
}
