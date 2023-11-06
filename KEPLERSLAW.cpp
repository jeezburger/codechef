#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T, X[4];
	cin >> T;
	while (T--)
	{
	    for(int i=0; i<4; i++)
	    {
	        cin >> X[i];
	    }
	        float ratio1, ratio2;
	        ratio1 = ((pow(X[0], 2))/(pow(X[2], 3)));
	        ratio2 = ((pow(X[1], 2))/(pow(X[3], 3)));
	        if(ratio1 == ratio2)
	        {
	            cout << "yes" << endl;
	        }
	        else{
	            cout << "no" << endl;
	        }
	    
	}
	return 0;
}
