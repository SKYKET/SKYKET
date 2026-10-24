#include<stdio.h>
void greet(int n)
{
	if(n%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}
int main()
{
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	greet(a);
	return 0;
}
