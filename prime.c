#include<stdio.h>
int Check_Prime(int num)
{
	int i,flag;
	flag = 0;
	for(i=2;i<=num/2;i++)
	{
		if(num % i == 0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else 
		return 0;
	return 0;
}
void Print_Array(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}

int main()
{
	int arr[20],n,i,num,cnt=0;
	printf("How Many Element:");
	scanf("%d",&n);
	printf("Enter Array Element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Orignal Array:\n"); 
	Print_Array(arr,n);
	printf("\nAlternet Prime Number:\n");
	for(i=0;i<n;i++)
	{
		num=arr[i];
		if(Check_Prime(num) == 1)
		{
			if(cnt % 2 == 0)
				printf("%d\t",num);
			cnt++;
			
	
		}
	
	}
	return 0;
}
