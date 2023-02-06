#include<stdio.h>
int main()
{
	char s[100];
	int i,c,v,sp,d;
	c=v=sp=d=0;
	printf("Enter a string: ");
	fgets(s,sizeof(s),stdin);
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=tolower(s[i]);
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			v++;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			c++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			d++;
		}
		else if(s[i]==' ')
		{
			sp++;
		}
	}
	printf("Vowels= %d\n",v);
	printf("Constanants= %d\n",c);
	printf("Digits= %d\n",d);
	printf("Space= %d",sp);
	return 0;
}
