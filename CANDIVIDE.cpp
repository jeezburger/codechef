#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,T;
	cin >> T;
	while (T--)
	{
	    cin >> N;
	    if(N%3 == 0)
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
