#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("\tEnter hour and minute");
	printf("\th");
	scanf("%d",&a);
	printf("\tm");
	scanf("%d",&b);
	printf("\tEnter another hour and minutes");
            printf("\th");
            scanf("%d",&c);
            printf("\tm");
            scanf("%d",&d);
e=a-c;
f=b-d;
printf("\tdifference of hour and minute ");
printf("\thour is%d",e);
printf("\tminute is%d",f);
return 0;
	
}
