/*
Una empresa internacional, comercializa en 3 países los 4 productos que produce a través de sus 2
sucursales. Los datos de ventas están registrado en una matriz multidimensional MxNxP. Donde P
representa países, M representa las sucursales y N representan los productos.
    
    a. Defina y realizar la carga de las ventas en la matriz, por medio de una función.
    
    b. Usando una función CON TIPO, calcule y muestre en main cual fue el país que más vendió.
    
    c. Usando una función CON o SIN TIPO según estime conveniente. Realizar un listado que muestre el
total de venta de cada una de las sucursales.
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int m,n,p,mayor;
	int v[50][50][50];
	printf("Ingrese la cantidad de Paises:");
	scanf("%d",&p);
	printf("Ingrese la cantidad de Sucursales:");
	scanf("%d",&n);
	printf("Ingrese la cantidad de Productos:");
	scanf("%d",&m);
	
	carga(v,m,n,p);
	mayor=venda(v,m,n,p);
	printf("\n----------------------------------");
	printf("\n\nLa venta mayor en el pais Num.:%d\n",mayor);
	printf("\n----------------------------------");
	molo(v,m,n,p);
}

void carga(int v[50][50][50],int m, int n, int p)
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				printf("\n|[pais:%d]|\n|[Sucursal:%d]|\n|[Producto:%d]|",i+1,j+1,k+1);
				printf("\nIngrese la venta realizada:");
				scanf("%d",&v[i][j][k]);
			}
		}
	}
	for(int i=0;i<p;i++)
	{
	printf("\n----------------------------------");
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				printf("\n\n|[pais:%d]|\n|[Sucursal:%d]|\n|[Producto:%d]-%d",i+1,j+1,k+1,v[i][j][k]);
			}
		}
	}
}

int venda(int v[50][50][50],int m, int n, int p)
{
	int po=0,mo=0,ma=0;
	for(int i=0;i<p;i++)
	{
	po=0;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				po=po+v[i][j][k];		
			
			}
		if(po>mo)
			{
				mo=po;
			}
		}
		if(po>=mo)
			{
				ma++;
			}			
	}
	return ma;
}

void molo(int v[50][50][50],int m,int n,int p)
{
    int po=0,mo=0;
    printf("\n\n");
	for(int i=0;i<p;i++)
	{
	
		for(int j=0;j<n;j++)
		{
            po=0;
			for(int k=0;k<m;k++)
			{
				po=po+v[i][j][k];		
			}
		printf("\n[pais:%d][sucursal:%d]-total de ventas:%d",i+1,j+1,po);
		}	
	}	
	printf("\n\n");
}