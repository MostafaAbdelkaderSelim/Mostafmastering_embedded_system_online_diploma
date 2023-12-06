
#include"stdio.h"
#include"math.h"
float root(int num)
{

	return sqrt(num);
}
int main()
{
	int n;
	printf("enter an integer number : \n");
	fflush(stdout); fflush(stdin);
	scanf("%d" , &n);

	printf("%.3f" , root(n));

}