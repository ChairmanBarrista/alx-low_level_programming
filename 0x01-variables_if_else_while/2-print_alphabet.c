#include <stdio.h>

/**
 * main - Printing the alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[26] = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
