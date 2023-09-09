#include<stdio.h>
#include<stdlib.h>
#include<ctime>

void carga(int v[50][50],int n,int m);
void mostrar(int v[50][50],int n,int m);
int mayor(int v[50][50],int n,int m,int *mayo);
void mos(int v[50][50],int n,int m);
main(void)
{
	int m,n=3,may,mayo=0;
	int v[50][50];
	srand(time(0));
	printf("Ingrese la cantidad de Talleres:\n");
	scanf("%d",&m);
	system("pause");
	carga(v,n,m);
	mostrar(v,n,m);
	may=mayor(v,n,m,&mayo);
	printf("\nEl taller de mayor produccion fue el %d con %d prendas. ",mayo,may);
	mos(v,n,m);
	
	printf("\n\n");
	system("pause");

}
void carga(int v[50][50],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			v[i][j]=1+rand()%100;
		}
	}
	
}
void mostrar(int v[50][50],int n,int m)
{
	system("cls");
	printf("Talleres de la empresa:\n\n");
	int i,j,x=1;
	for(i=0;i<x;i++)
	{ printf("\n\nTaller N-%d",x);
		
			printf("\n\nPantalones:%d",v[i][j]);
			printf("\n\nRemeras:%d",v[i][j+1]);
			printf("\n\nCamisetas:%d\n",v[i][j+2]);
		
		if(x<=m-1)
		{
		x++;
		}
		
	}
	system("pause");
}
int mayor(int v[50][50],int n,int m,int *mayo)
{
	int suma=0;
	int may=0;
	system("cls");
	printf("\nPresentacion de Produccion:\n");
	for(int j=0;j<m;j++){
		suma=0;
		for(int i=0;i<n;i++){
			suma+=v[i][j];
			if(suma>may){
				may=suma;
				*mayo=j+1;
			}
		}
		printf("\nProduccion de Taller %d: %d",j+1,suma);
	}
	printf("\n\n");
	system("pause");
	return (may);
}
void mos(int v[50][50],int n,int m)
{
	system("cls");
	printf("\n\nPresentaciones de la matriz de la empresa:");
	for(int i=0;i<m;i++)
	{
		printf("\n\n");
		for(int j=0;j<n;j++)
		{
			printf("\t%d",v[i][j]);
		}
	}
	
}
