#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, A[4];
	cin >> T;
	while(T--)
	{
	    for(int i=0;i<4;i++)
	    cin >> A[i];
	    if(A[0]<A[1])
	    A[0] = A[2]+A[0];
	    else
	    A[1] = A[2]+A[1];
	    if(A[0]<A[1])
	    A[0] = A[3]+A[0];
	    else
	    A[1] = A[3]+A[1];
	    if(A[0]<A[1])
	    cout << "S" << endl;
	    else
	    cout << "N" << endl;
	}
	return 0;
}
