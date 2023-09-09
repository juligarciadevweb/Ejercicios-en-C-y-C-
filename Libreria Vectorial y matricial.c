//Libreria para realizar operaciones con vectores

//Funcion para trasponer a una 
void traspuesta(int matA[100][100], int matB[100][100], int n, int m)
{
	for(int j = 0;j < m;j++)
	{
		printf("\n\n");
		for(int i = 0 ;i < n; i++)
		{
			matB[i][j]=matA[i][j];
			printf("\tB-[%d] [%d] - %d",i,j,matB[i][j]);
		}
	}

	printf("\n\nMatriz A:\n\n");
	for(int i = 0 ; i < n ; i++)
	{
		printf("\n\n");
		for(int j = 0;j < m;j++)
		{
			printf("\tA-[%d][%d]-%d",i,j,matA[i][j]);
		}
    }

}

//Mostrar matriz, funcion optimizada
void mostrarMatr(int n, int m, int mat[100][100]) 
{
    printf("\nLa matriz cargada es:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("[%d]  [%d] = %d\t", i, j, mat[i][j]);
        }
        printf("\n\n");
    }
}

//Cambiar elemento
void change(int mat[100][100], int m, int n) 
{
    //Definicion de variables esenciales para el cambio, incluyendo el nuevo valor 
    int fil, col, newValue;

    //Pedido de coordenadas del elemento a cambiar
    printf("Ingrese la fila del elemento a cambiar: ");
    scanf("%d", &fil);
    printf("Ingrese la columna del elemento a cambiar: ");
    scanf("%d", &col);

    //Uso de triple compuerta logica AND para corroborar las coordenadas exactas
    if (fil >= 0 && fil < m && col >= 0 && col < n) //Uso de una triple compuerta logica 
    {
        printf("Ingrese el nuevo valor para la posición (%d, %d): ", fil, col); //Concatenacion de las coordenadas para un mejor visualizacion
        scanf("%d", &newValue); //Lectura del nuevo valor
        mat[fil][col] = newValue; //Hago una reasignacion del valor para reemplazarlo en la matriz
    } else 
    {
        printf("Error: La posición ingresada está fuera de los límites de la matriz.\n");
    } 
}

//Mostrar fila
void mostrarFila(int matriz[100][100], int m, int n, int fila) 
{
    //m: El número total de filas en la matriz.
    //n: El número total de columnas en la matriz
    //fila: El número de fila que se desea mostrar
    if (fila >= 0 && fila < m)  
    {
        // La fila ingresada por el usuario es válida va a iterar a través de las columnas (j) en la fila especificada
        printf("Elementos de la fila %d:\n", fila);
        for (int j = 0; j < n; j++) 
        {
            printf("%d\t", matriz[fila][j]); 
            // Imprime el elemento en la posición (fila, j)
        }
        printf("\n");
    } else {
        // La fila ingresada por el usuario está fuera de los límites de la matriz
        printf("Error: El número de fila ingresado está fuera de los límites de la matriz.\n");
    }
}


//Mostrar columna
void mostrarColumna(int matriz[100][100], int m, int n, int columna) 
{
    if (columna >= 0 && columna < n) 
    {
        printf("Elementos de la columna %d:\n", columna);
        for (int i = 0; i < m; i++) 
        {
            printf("%d\n", matriz[i][columna]);
        }
    } else {
        printf("Error: El número de columna ingresado está fuera de los límites de la matriz.\n");
    }
}

//Matriz random
#include <stdio.h>
void rnd(int mat[100][100],int n, int m)
{
	for(int i = 0 ; i<n ;i++)
	{
		for(int j = 0; j < m; j++)
        {
			mat[i][j]=1+rand()%100;
		}
	}
}

//Encontrar elemento mayor y menor
void mayorYmenMtr(int n, int m, int mat[100][100]) 
{
    int menMTR = mat[0][0];
    int mayMTR = mat[0][0];

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (mat[i][j] > mayMTR) 
            {
                mayMTR = mat[i][j];
            }

            if (mat[i][j] < menMTR) 
            {
                menMTR = mat[i][j];
            }
        }
    }

    printf("\nEl elemento menor de la matriz es: %d", menMTR);
    printf("\nEl elemento mayor de la matriz es: %d", mayMTR);
}

//Producto matricial
void productoMatricial(int n, int m, int mat[100][100], int mat2[100][100], int mat3[100][100])
{
    for(int i = 0;i < m;i++)
    {
        for(int j=0;j < n;j++)
        {
            printf("Ingrese el elemento b[%d][%d] = ",i,j);
            scanf("%d",&mat2[i][j]);
            mat3[i][j]=mat[i][j]*mat2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d][%d] = %d %d",i,j,mat3[i][j]);
        }
        printf("\n\n");
    }

}
//Resta matricial
void restaMatricial(int m, int n, int mat[100][100], int mat2[100][100], int mat3[100][100])
{
    for(int i = 0;i < m;i++)
    {
        for(int j=0;j < n;j++)
        {
            printf("Ingrese el elemento b[%d][%d] = ",i,j);
            scanf("%d",&mat2[i][j]);
            mat3[i][j]=mat[i][j]-mat2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d][%d] = %d %d",i,j,mat3[i][j]);
        }
        printf("\n\n");
    }
}

//Carga de la matriz
void cargarMatriz(int n,int m,int mat[100][100])
{
    // Ciclo i por filas
    for (int i = 0; i < m; i++) //Iteracion en el numero de filas
    {
        for (int j = 0; j < n; j++) 
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

//Obtener el resultado de una suma guardando los datos en una tercera
void sumaMatricial(int m, int n, int mat[100][100], int mat2[100][100], int mat3[100][100])
{
    for(int i = 0;i < m;i++)
    {
        for(int j=0;j < n;j++)
        {
            printf("Ingrese el elemento b[%d][%d] = ",i,j);
            scanf("%d",&mat2[i][j]);
            mat3[i][j]=mat[i][j]+mat2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d]  [%d] = %d",i,j,mat3[i][j]);
        }
        printf("\n\n");
    }
}

//Carga de vector simple
void carga(int x, int vec[100])
{
    for (int i = 0; i < x; i++)
    {
        printf("\nVec[%d]= ", i);
        scanf("%d", &vec[i]);
    }
}

//Encontrar el elemento menor y mayor
void mayMen(int x, int vec[100])
{
    int may = 0, men = 0;
    int x1;
    printf("Presione 1 para buscar el elemento mayor y 2 para el menor: ");
    scanf("%d", &x1);
    if (x1 == 1)
    {
        for (int i = 0; i < x; i++)
        {
            if (vec[i] > may)
            {
                may = vec[i];
            }
        }
    }else
    {   
        for (int i = 0; i < x; i++)
        {
            if (vec[i] < men)
            {
                int men = vec[i];
            } 
        }
        printf("El valor menor es %d", men);   
    }
}

//Carga de vectores paralelos
void cargaParalelos(int x, int vec[100], int vec2[100])
{
    for (int i = 0; i < x; i++)
    {
        printf("\nIngrese vec[%d] = ",i);
        scanf("%d", &vec[i]);
        printf("\nIngrese vec2[%d] = ",i);
        scanf("%d", &vec2[i]);
    }
}

float promedio(int n, int vec[100])
{
    float pr = 0;
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += vec[i];
    }
    pr = (float)suma / n;
    return pr;
}

int main(int argc, char const *argv[])
{
    int vec[100], vec2[100], x;
    int n; //Numero de columnas 
    int m; //Numero de filas
    int s; //Sumador de elementos internos 
    int mat[100][100], mat2[100][100], mat3[100][100];
    

    //Carga de matrices
    printf("Ingrese la cantidad de filas de la matriz: ");
    scanf("%d", &m);
    printf("Ingrese la cantidad de columnas de la matriz: ");
    scanf("%d", &n);
    cargarMatriz(n, m, mat);
    sumaMatricial(m, n, mat, mat2, mat2);
    restaMatricial(m, n, mat, mat2, mat3);
    change(mat, m, n); //cambia x elemento
    sumaInterna(m, n, mat, &s);
    mostrarMatr(n, m, mat);
    
    //Carga vectorial
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &x);
    carga(x, vec);
    mayMen(x, vec);
    cargaParalelos(x, vec, vec2);
    printf("El promedio es %0.2f",promedio(n, vec));

    return 0;
}
