#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b;
	cin >> t;
	while (t--)
	{
	    cin >> n >> a >> b;
	    int c1 = 2 * (180 + n);
	    int c2 = a + b;
	    cout  << c1-c2 << endl;
	    
	   
	}
	
	return 0;
}
