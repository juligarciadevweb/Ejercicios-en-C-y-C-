/*

Una empresa desea desarrollar un software para manejar la documentación referida al manejo diario de la misma. 
Para reducir los costos de un sistema enlatado, desea contratar a 5 desarrolladores FreeLancer para una tarea que 
demandara 7 días de trabajo de 6 horas cada uno. 7 * 6 = 42hs * 5devs = 210hs de trabajo
La empresa desea calcular cual es el costo que deberá pagar por este desarrollo.

*/

#define dias 7
#define horasDiarias 6
#define devs 5
#define precioHora 500
int main(){
    int horasTotales = horasDiarias * dias;
    int pago = devs * horasTotales;
    int final = pago * precioHora; 

    printf("El pago final seria %d", final);
    
    return 0;
}






