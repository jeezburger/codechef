#include<stdio.h>
#include<math.h>
void main()
{
    int n,t,ans;
    int sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%2!=0)
        {
            for(int i=1;i<=n;i=i+2)
            {
            ans=pow((n-(n-i)),2);
            sum =sum+ans;
            }
        }
        else
        {
            for(int i=2;i<=n;i=i+2)
            {
            ans=pow((n-(n-i)),2);
            sum =sum+ans;
            }
        }
        printf("%d \n",sum);
        sum=0;
    }
}