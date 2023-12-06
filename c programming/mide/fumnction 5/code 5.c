
#include "stdio.h"

void main()
{
	int num ,i , key , index=0;
	printf("Enter a numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for(i=0;num!=0;i++)
	{
		key=num%2;
		num/=2;
		if(key==1)
			index ++;
	}
	printf("Number of ones : %d",index);
}



