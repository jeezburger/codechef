#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    int A[N], B[N];
	    for(int i=0; i<N;i++)
	    {
	        cin >> A[i];
	    }
	    for(int i=0; i<N; i++)
	    {
	        cin >> B[i];
	    }
	    // till here, we've taken all the inputs
	    //now we need to find the max digit in each inputs
	    //then we need to sum both the array's digits and subtract
	    //the max input.
	    
	    int sum1 = 0;
	    for(int i=0; i<N; i++)
	    {
	    sum1 = sum1 + A[i];
	    }
	    
	    //sum1 is sum of all elements of A 
	    
	    int sum2 = 0;
	    for(int i=0; i<N; i++)
	    {
	        sum2 = sum2 + B[i];
	    }
	    
	    // sum2 is sum of all elements of B
	    //now just find the max element in each array
	    int max1 = A[0];
	    for(int i=0; i<N; i++)
	    {
	       if(A[i]>max1)
	       max1 = A[i];
	    }
	    //max1 is the largest element in A
	    
	    int max2 = B[0];
	    for(int i=0; i<N; i++)
	    {
	        if(B[i]>max2)
	        max2 = B[i];
	    }
	    //max2 is the largest element in B
	    int finalsum1 = sum1 - max1;
	    int finalsum2 = sum2 - max2;
	    if(finalsum1 < finalsum2)
	    cout << "Alice" << endl;
	    else if(finalsum1 > finalsum2)
	    cout << "Bob" << endl;
	    else 
	    cout << "Draw" << endl;


	}

	return 0;
}
