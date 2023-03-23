/*

Una empresa tiene tres sucursales, recibe mensualmente la recaudación total de las 3 sucursales. 
Donde del Total Recaudado por las 3 sucursales les corresponde a Computación el 30%, Televisores el 20% , Electrodomésticos el 40% y el resto del total corresponden a otros productos.
La empresa desea saber qué cantidad de dinero le corresponde a cada producto.
Siempre pones los porcentajes entre 0 y 1

int originalValue = 100;
int percentage = 10;
int result = originalValue - (originalValue * percentage / 100);

*/
#define porcenComputacion 0.3
#define porcenTvs 0.2
#define porcenElec 0.4
#define porcenOtros 0.1

int main(){
    int recaudacion;
    printf("Ingrese la recaudacion: ");
    scanf("%d", &recaudacion);

    int computacion = recaudacion * porcenComputacion;
    int tvs = recaudacion * porcenTvs;
    int elec = recaudacion * porcenElec;
    int otros = recaudacion - (computacion + tvs + elec);

    printf("Al rubro de computacion le corresponderan: %d\n", computacion);
    printf("Al rubro de televisores le correspondera: %d\n", tvs);
    printf("Al rubro de electrodomesticos le corresponderan: %d\n", elec);
    printf("A otros productos les corresponderan: %d\n", otros);

    return 0;
}
