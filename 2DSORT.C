#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,k=0,temp;
	//int a[][]={{1,2,3},{4,5,6},{7,8,9}};
	clrscr();

	printf("Enter 9 element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>a[i][j+1])
			{
				temp=a[i][j];
				a[i][j]=a[i][j+1];
				a[i][j+1]=temp;
			}

		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
       //	for(k=0;k<9;k++)
       //	printf("%2d",arr[k]);
	getch();
}
