// TESTMEM: Este programa comprueba cuÃ¡nta memoria hay
// disponible
#include <iostream>
void carga(int *array, size_t size);
int* sumatoria(int *array, size_t size);

using std::cin, std::cout;
int main()
{
	size_t s;
	cout << "Cuantos elementos van a ser en el array\n";
	cin >> s;
	int* arr = new int[s];
	carga(arr, s);
	int* suma = sumatoria(arr, s);
	cout << "La suma total es " << *suma << std::endl;

	delete suma;
	delete [] arr;

	return 0;
}

int* sumatoria(int *array, size_t size)
{
	int *suma = new int(0);
	for(int i = 0; i < size; i++){
		suma += *(array + i);
		cout << suma << std::endl << *suma << std::endl;
	}
	cout << *suma << std::endl;
	return suma;
}

void carga(int *array, size_t size)
{
	for(size_t i = 0; i < size; i++){
		cout << "Ingrese el numero " << i+1 << ": "; 
		cin >> array[i];
	}
}