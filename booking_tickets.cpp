#include<stdio.h>
int main()
{
	int op,bill1=0,bill2=0,bill3=0,bill4=0,bill5=0,bill=0,t=0;
	menu :
	printf("PVR Cinemas\nMovies\n1.Batman\n2.R.R.R\n3.K.G.F\n4.Spider-man\n5.Black Adam\n");
	printf("Select the movie : ");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Batman");
		printf("\nNumber of tickets : ");
		scanf("%d",&t);
		bill1=bill1+(200*t);
		goto menu;
	}
	else if(op==2)
	{
		printf("R.R.R");
		printf("\nNumber of tickets : ");
		scanf("%d",&t);
		bill2=bill2+(200*t);
		goto menu;
	}
	else if(op==3)
	{
		printf("K.G.F");
		printf("\nNumber of tickets : ");
		scanf("%d",&t);
		bill3=bill3+(200*t);
		goto menu;
	}
	else if(op==4)
	{
		printf("Spider-man");
		printf("\nNumber of tickets : ");
		scanf("%d",&t);
		bill4=bill4+(200*t);
		goto menu;
	}
	else if(op==5)
	{
		printf("Black Adam");
		printf("\nNumber of tickets : ");
		scanf("%d",&t);
		bill5=bill5+(200*t);
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