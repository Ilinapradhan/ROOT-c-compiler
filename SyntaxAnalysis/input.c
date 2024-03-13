#include<stdio.h>
void sum1(int ,int);
void main()
{
 	int a=18,c,d=50;
 	char b;
 	printf("\nEnter Number:");
 	scanf("%d",&b)
 	sum1(5,b);
}
void sum1(int inp1,int inp2){
	int s=0;
	s=inp1+inp2;
	printf("\nSum : %d",s);
	return ;
}