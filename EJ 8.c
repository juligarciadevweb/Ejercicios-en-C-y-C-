
#include<stdio.h>
#include<stdlib.h>
#include<ctime>

main()
{ 
    srand(time(0));
	int m,n,p;
	int v[50][50][50];
	int b[50];
	carga(v,&m,&n,&p);
	suma(v,b,m,n,p);
	mostrar(v,b,m,n,p);
}
void carga(int v[50][50][50],int *m,int *n,int *p)
{
	printf("Ingrese el plano:");
	scanf("%d",&*m);
	printf("Ingrese la columna:");
	scanf("%d",&*n);
	printf("Ingrese la fila:");
	scanf("%d",&*p);
	for(int i=0;i<*m;i++)
	{
		for(int j=0;j<*n;j++)
		{
			for(int k=0;k<*p;k++)
			{
				printf("\nValor de la matriz[Plano:%d][Col:%d][Fila:%d]:",i+1,j+1,k+1);
				scanf("%d",&v[i][j][k]);
			}
		}
	}
	system("cls");
}
void suma(int v[50][50][50],int b[50],int m,int n,int p)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				b[i]=b[i]+v[i][j][k];
			}
		}	
	}
}

void mostrar(int v[50][50][50],int b[50],int m,int n,int p)
{
	for(int i=0;i<m;i++)
	{
		printf("\n------------------------------------------------\n");
		printf("Plano[%d]",i+1);
		for(int j=0;j<n;j++)
		{
			printf("\n\n");
			for(int k=0;k<p;k++)
			{
				printf("\t%d",v[i][j][k]);
			}
		}
		printf("\n");
	}
	printf("\n\n");
	printf("-------------------Vector------------------------\n\n");
	for(int i=0;i<m;i++)
	{
		printf("Vector[%d]-%d\t",i,b[i]);
	}
	printf("\n------------------------------------------------\n");
}