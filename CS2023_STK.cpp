#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N;
	cin >> T;
	while(T--)
	{
	  int streak1 = 0, streak2 = 0;
	  cin >> N;
	  int A[N], B[N];
	   int maxc1 = 0;
       int maxc2 = 0;
	  for(int i=0;i<N;i++)
	  {
	      cin >> A[i];
	      if(A[i]>0){
	      streak1++;
	      maxc1 = max(maxc1,streak1);  //max functions compares the two ints inside it.
	      }
	      else
	      streak1=0;
	  }
	  for(int j=0;j<N;j++)
	  {
	      cin >> B[j];
	      if(B[j]>0){
	      streak2++;
	      maxc2 = max(maxc2,streak2);  //maxc2 stores the highest streak and as the loop iterates, it compares the streak to the previous 1.
	      }
	      else
	      streak2=0;
	  }

	  if(maxc1>maxc2)
	  cout << "Om" << endl;
	  else if(maxc1<maxc2)
	  cout << "Addy" << endl;
	  else
	  cout << "draw" << endl;
	}
	return 0;
}
