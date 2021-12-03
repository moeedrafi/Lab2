#include<stdio.h>
#include<conio.h>
int main ()
{
	int num;
	printf("Enter a Number: ",num);
	scanf("%d",&num);
	printf("%d + 5 = %d",num,num+5);
	printf("\n%d - 3 = %d",num,num-3);
	printf("\n(%d + 3) - 2 = %d",num,(num+3)-2);
	printf("\n((%d+5)*2/(%d+3)) = %d",num,((num+5)*2/(num+3)));
}                  
