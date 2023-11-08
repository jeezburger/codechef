#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A,B,C,T;
	cin >> T;
	while(T--)
	{
	    cin >> A >> B >> C;
	    if(A+B==C)
	        cout << "yes\n";
	    else
	        cout << "no\n";
	}
	
	return 0;
}
