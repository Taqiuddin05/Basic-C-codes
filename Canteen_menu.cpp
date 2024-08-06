#include<stdio.h>
int main()
{
	int op,q=0,bill1=0,bill2=0,bill3=0,bill4=0,bill5=0,bill=0;
	menu :
	printf("*CANTEEN*\nMenu\n1.Tea........$10\n2.Coffee.....$20\n3.Milkshake..$30\n4.Juice......$25\n5.Puff.......$15\n");
	printf("enter your order : ");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Tea");
		printf("\nselect the quantity : ");
		scanf("%d",&q);
		bill1=bill1+(10*q);
		goto menu;
	}
	else if(op==2)
	{
		printf("Coffee");
		printf("\nselect the quantity : ");
		scanf("%d",&q);
		bill2=bill2+(20*q);
		goto menu;
	}
	else if(op==3)
	{
		printf("Milkshake");
		printf("\nselect the quantity : ");
		scanf("%d",&q);
		bill3=bill3+(30*q);
		goto menu;
	}
	else if(op==4)
	{
		printf("Juice");
		printf("\nselect the quantity : ");
		scanf("%d",&q);
		bill4=bill4+(25*q);
		goto menu;
	}
	else if(op==5)
	{
		printf("Puff");
		printf("\nselect the quantity : ");
		scanf("%d",&q);
		bill5=bill5+(15*q);
		goto menu;
	}
	else
	{
	    printf("please select valid option\n");
	}
	bill=bill1+bill2+bill3+bill4+bill5;
	printf("your Total bill=%d",bill);
	printf("\nThank you for visiting :)");
	return 0;
}