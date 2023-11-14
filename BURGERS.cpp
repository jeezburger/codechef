#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X[2];
	cin >> T;
	while(T--)
	{
	    for(int i=0; i<2; i++)
	    cin >> X[i];
	    if(X[0]>=X[1])
	    cout << X[1] << endl;
	    else
	    cout << X[0] << endl;
	}
	return 0;
}
