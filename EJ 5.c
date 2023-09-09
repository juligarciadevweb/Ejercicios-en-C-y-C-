/*
Se tiene un de orden MxNxP de valores enteros.
a. Usando una función SIN TIPO, realizar la carga del Arreglo Multidimensional.
b. Usando una función, llenar un vector donde cada elemento del vector corresponde a la suma de
todos los elementos del plano del arreglo Multidimensional. (Nota: La suma de los elementos del plano
cero se almacena en la posición cero del vector, La suma de los elementos del plano uno se almacena en
la posición uno del vector, La suma de los elementos del plano dos se almacena en la posición dos del
vector,…., así hasta sumar todos los planos).
c. Usando una función SIN TIPO, listar el vector.
d. Usando una función CON TIPO, calcular el promedio del vector y mostrar en main

*/



void carga(int v[50][50][50],int m,int n,int p)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				printf("Ingrese el valor del vector: \n");
				scanf("%d",&v[i][j][k]);
			}
		}
	}
}
void suma(int v[50][50][50],int b[50],int m,int n,int p)
{
	system("cls");
	int k=0;
	for(int i=0;i<m;i++)
	{
        b[k]=0;
		for(int j=0;j<n;j++)
		{
			for( k=0;k<p;k++)
			{
		        b[k]=b[k]+v[i][j][k];
			    printf("\n-suma plano %d:%d\n",k+1,b[k]);
			}
		}
	}
	printf("\n\n");
	system("pause");
}

void mostrar(int v[50][50][50],int m,int n,int p)
{
	system("cls");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				printf("\n[%d][%d][%d]-%d",i,j,k,v[i][j][k]);
			}
		}
	}
	printf("\n\n");
}

int pro(int b[50],int p)
{
	system("cls");
	int a=0,po=0;
	for(int k=0;k<p;k++)
	{
		a=a+b[k];
	}
	po=a/p;
	return po;
}


main(int argc, char const *argv[])
{ 
	int m,n,p,sum=0,prom=0;
	int v[50][50][50];
	int b[50];
	printf("Ingrese la cantidad de filas:\n");
	scanf("%d",&m);
	printf("Ingrese la cantidad de columnas:\n");
	scanf("%d",&n);
	printf("Ingrese la cantidad de planos:\n");
	scanf("%d",&p);
	
	carga(v,m,n,p);
	suma(v,b,m,n,p);
	mostrar(v,m,n,p);
	prom=pro(b,p);
	printf("\nEl promedio es:%d\n",prom);
}
