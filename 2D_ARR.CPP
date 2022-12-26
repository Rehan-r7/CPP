#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3],arr4[3][3],sum;
	int i,j,k,num;
	clrscr();

	printf("enter the element for 1 array : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements for 2 array :-\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&arr2[i][j]);

			}
				printf("\n");
		}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       sum=0;
		       for(k=0;k<3;k++)
		       {
		       sum+=arr1[i][k]*arr2[k][j];
		       }
		       arr4[i][j]=sum;
		}
	}

	clrscr();
	printf("Showing Elements of the 1 array :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Showing Elements of the 2 array :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}

	printf("Showing addition of both arrays :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr3[i][j]);
		}
			printf("\n");
	}
	printf("Showing Transpose of 2 arrays :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr3[j][i]);
		}
			printf("\n");
	}
	printf("Showing Multiplication of 2 arrays :-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",arr4[i][j]);
		}
			printf("\n");
	}

	getch();
}