#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a[6], i,p,q;
	    int count1=0, count2=0;
	    for(i=0;i<6;i++)
	    {
	        cin >> a[i];
	        
	    }
	       
	    for (i = 0; i < 3; ++i) 
        {
            for (int j = i + 1; j < 3; ++j) 
            {
                if (a[i] < a[j]) 
                {
                    p = a[i];
                    a[i] = a[j];                //sorting in descending order
                    a[j] = p;
                }
            }
            count1= count1*10+a[i];             //converting elements of array into numbers
        }
        for (i = 3; i < 6; ++i) 
        {
            for (int j = i + 1; j < 6; ++j) 
            {
                if (a[i] < a[j]) 
                {
                    q = a[i];
                    a[i] = a[j];
                    a[j] = q;
                }
            }
            count2= count2*10+a[i];
        }
	    if(count1==count2) printf("tie\n");
	    else if(count1>count2) printf("alice\n");
	    else printf("bob\n"); 
	}
	return 0;
}
