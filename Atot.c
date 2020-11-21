#include<stdio.h>

int main()
{
	int arraytotal(int[]); 
	int a[5],tot,i;
	
	printf("\n\nEnter 5 numbers in array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	tot=arraytotal(a);    //call by reference
	printf("\nTotal of Array Numbers=%d",tot);
getch();
}
int arraytotal(int ar[5])
{
	int tot=0,i;
	for(i=0;i<5;i++)
	{
		tot=tot+ar[i];

	}
	return tot;
}


