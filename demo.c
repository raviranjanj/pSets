#include <stdio.h>

int main()
{

	int n, k;	
 	n=5;
	k=3;
	int sum=0;
	int G[n];
	int count=0;
	
	for(int m=0;m<n;m++)
	{
		scanf("%d",&G[m]);
		sum=sum+G[m];	
		if(++count==k)
			break;
	}
	
	printf("\n%d\n",sum);
	int sumOfb=0;
	int B[n];
	int flag=0;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&B[i]);;
		sumOfb=sumOfb+B[i];
		if(++flag==k)
			break;
	}
	
	printf("\n%d\n",sumOfb);
	if(sum>=sumOfb || sum<=sumOfb)
	{
		sum = (sum>=sumOfb) ? sum/sumOfb : sumOfb/sum;
		if(sum==k)
		{
			printf("%d\n",sum);
		}
		else
		{
			printf("-1\n");
		}
	} 
	return 0;
}









/*	 input:
	 n : size n
	 k : sum of characteristics
	 g : good characteristics
	 b : bad characteristics
	
	
	if((1<=n<=100) && (1<=k<=10))
	{
	    for(index = 0; index< n; index++)
	{
		scanf("%d", &g[index]);
	}
	for(index = 0; index< n; index++)
	{
		scanf("%d", &b[index]);
	}
	
	// write your code here
	// store your results in `max_sum`
	
	if(n==1)
	{
	    max_sum=g[0];
	}
	else if(n==2)
	{
	    max_sum=g[0]+g[1];
	}
	else
	{
	max_sum=g[0]+g[1];
	for(index=1;index<n;index++)
	{
	    for(i=2;i<n;i++)
	    {
*/
