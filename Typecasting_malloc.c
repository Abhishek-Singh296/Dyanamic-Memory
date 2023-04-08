#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n,i;
	char x='A';
	printf("Enter the no of items to be entered:");
	scanf("%d",&n);
	char *ptr=(char*)malloc(n*1);
	for(i=0;i<n;i++)
	{
	*ptr=x ;
	x++;
	printf("Item-%c,Memory address-%d\n",*ptr,ptr);//ptr is prnting the memory address of x
	ptr++;//increments the memmry adress of x
	}	
	
}
