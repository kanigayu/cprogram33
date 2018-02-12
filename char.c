#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int count=0,i,n;
printf("\nenter the character");
scanf("%s",a);
n=strlen(a);
for(i=0;i<=n;++i)
{
	if(a[i]!=' '&& a[i]!='\0')
	 count++;
	 }
	printf("\n%d",count);
	return 0;
}
