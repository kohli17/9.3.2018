#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int j,k,a[15],i;
scanf("%d%d",&j,&k);
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<j;i++)
{
	if(a[i]==k)
	{
		printf("%d",a[i]);
	}
}
getch();
}
