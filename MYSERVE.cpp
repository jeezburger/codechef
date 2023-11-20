#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, P, Q;
	cin >> T;
	while(T--)
	{
	    cin >> P >> Q;
	    if(((P+Q)/2)%2==0)
	    cout << "Alice" << endl;
	    else
	    cout << "Bob" << endl;
	}
	return 0;
}
