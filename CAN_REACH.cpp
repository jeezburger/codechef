#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x, y, k;
	cin >> T;
	while(T--)
	{
	    cin >> x >> y >> k;
	    if(x%k==0 && y%k==0)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
	return 0;
}
