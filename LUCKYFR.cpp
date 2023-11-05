#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,A,flag=0;
	cin >> T;
	while (T--) //looping test case
	{
	    cin>>X;
	    while (X>0)  //looping the same number
	    {
	    A=X%10;  //checks the last digit 
	    if (A==4){
	        flag++; //increments flag if the last digit = 4
	        } 
	        X=X/10;   	 //eliminates the last digit   
	        
	    
	    }
	    cout << flag <<endl;
	    flag = 0;
	    
	   
	}
	return 0;
}
  
