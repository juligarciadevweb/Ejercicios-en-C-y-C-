/*
	Enunciado:

Cargar un vector de N elementos que contengan las notas de un curso. Por medio de un menu
indicar:

a. Nota mas alta y mas baja.
b. Promedio de notas.
c. Cantidad de notas superiores al promedio.
d. Cantidad de alumnos aprobados y desaprobados. Se aprueba desde 6.

*/
void general(int x, int vec[100])
{
	int suma = 0;
	int ap = 0; //Contador de aprobados
	int des = 0; //Contador de desaprobados
	int men = 0; //Nota menor
	int may = 0; //Nota mayor
	int sup = 0; //Nota superior al promedio
	 
	for (int i = 0; i < x; i++)
	{
		printf("\n vec[%d]= ", i);
		scanf("%d", &vec[i]);
		
		if (vec[i] >= 6)
		{
			ap++;
		}else
		{
			des++;
		}

		if (vec[i] > may)
		{
			may = vec[i];
		}

		if (vec[i] < men)
		{
			men = vec[i];
		}

		suma += vec[i];
	}

	float prom = (float)suma/x;

	for (int i = 0; i < x; i++)
	{
		if (vec[i] > prom)
		{
			sup++;
		}
	}

	printf("\nLa cantidad de aprobados es %d y los desaprobados son %d", ap, des);
	printf("\nEl promedio de las notas es %0.2f", prom);
	printf("\nLa nota mas alta es %d", may);
	printf("\nLa nota mas baja es %d", men);
	printf("\nLa cantidad de notas superiores al promedio es %d", sup);
}

int main(int argc, char const *argv[])
{
	int x;
	int vec[100];
	printf("Ingrese la cantidad de notas: ");
	scanf("%d", &x);
	general(x, vec);
	return 0;
}