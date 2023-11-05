#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	int N, K;
	cin >> T;
	while(T--){
	    //N is the number of changes and K is the initial state
	    cin >> N >> K;
	    if(K==0){
	        if(N%4==0)
	        cout<< "off" << endl;
	        else
	        cout << "on" <<endl;
	        
	    }
	    else if(K==1){
	        if(N%4==0)
	        cout<< "on" <<endl;
	        else
	        cout<< "ambiguous" << endl;
	
	    }
	}
	return 0;
}
