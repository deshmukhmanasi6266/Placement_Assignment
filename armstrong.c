#include<stdio.h>
#include<math.h>
int power(int rem,int n)
{
	int i,result=1;
	for(i=0;i<n;i++)
	{
		result=result*rem;
	}
	return result;
}
int main()
{
	int number,n=0,rem,orignal_no,result=0;
	printf("%d",power(4,5));
	printf("enter number:");
	scanf("%d",&number);
	orignal_no=number;
	while(orignal_no!=0)
	{
		orignal_no=orignal_no/10;
		n++;
	}
	orignal_no=number;
	while(orignal_no!=0)
	{
		rem=orignal_no%10;
		result=result+power(rem,n);
		orignal_no=orignal_no/10;
	}
	if(result==number)
		printf("%d  is an armstrong number",number);
	else
		printf("%d is not an armstrong number",number);
	return(0);
}
	
