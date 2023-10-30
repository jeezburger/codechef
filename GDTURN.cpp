#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, x, y;
	cin >> T;
	while (T--)
	{
	    cin >> x >> y;
	    if (x + y > 6)
	    {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
