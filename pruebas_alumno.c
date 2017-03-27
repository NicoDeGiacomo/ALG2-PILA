#include "pila.h"
#include "testing.h"
#include <stddef.h>


/* ******************************************************************
 *                   PRUEBAS UNITARIAS ALUMNO
 * *****************************************************************/

void pruebas_pila_alumno() {
    pila_t* ejemplo = NULL;

    print_test("Puntero inicializado a NULL", ejemplo == NULL);

    /* Variables a utilizar*/
    pila_t* pila = pila_crear();
    int valor1 = 5;
    int valor2 = 9;

    /* Pruebas con pila vacia */
    //TODO: Cambiar 1 a true, 0 a false
    print_test("pila_esta_vacia es true", pila_esta_vacia(pila) == 1);
    print_test("pila_ver_tope es NULL", pila_ver_tope(pila) == NULL);
    print_test("pila_desapilar es NULL", pila_desapilar(pila) == NULL);
    print_test("pila_apilar es true", pila_apilar(pila, &valor1) == 1);
    print_test("pila_apilar es true", pila_apilar(pila, &valor2) == 1);
    print_test("pila_esta_vacia es false", pila_esta_vacia(pila) == 0);
    print_test("pila_desapilar devuelve el tope", pila_desapilar(pila) == &valor2);
    print_test("pila_desapilar devuelve el tope", pila_desapilar(pila) == &valor1);
    pila_destruir(pila);

    /* Prueba redimension */
    pila = pila_crear();
    for (int i = 0; i <= 6; ++i){
        print_test("pila_apilar es true", pila_apilar(pila, &valor1) == 1);
    }
    for (int i = 0; i <= 6; ++i){
        print_test("pila_desapilar devuelve el tope", pila_desapilar(pila) == &valor1);
    }
    print_test("pila_ver_tope es NULL", pila_ver_tope(pila) == NULL);
    print_test("pila_desapilar es NULL", pila_desapilar(pila) == NULL);

    pila_destruir(pila);

}
