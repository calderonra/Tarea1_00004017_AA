#include <iostream>

using namespace std;

//Lo que hago es ir comparanado 2 elementos del arreglo e irlos moviendo a la posicion [0] y una vez llegue ahi
//imprimo ese valor porque es el menor que va a ver, es recursion por posicion
int menorValor(int a[], int n)
{
    if(n == 1)
        return a[0];

    n--;
    if(a[0] > a[n])
        a[0] = a[n];

    return menorValor(a, n);
}

int main(){


    
    int arregloUnidimensional[5]={3,4,5,2,1};
    cout<<menorValor(arregloUnidimensional,5);

    return 0;
}

