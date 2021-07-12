#include <iostream>

using namespace std;
void maxminarr(int & maximo,int & minimo,int arr[],int inic,int fin);

int main()
{
    int arr[] = {3,7,6,4,2,5};
    int tama = 6;
    int maximo, minimo;

    //call the function
    maxminarr(maximo, minimo, arr, 0, tama-1);

    cout << maximo << endl;
    cout << minimo << endl;

    return 0;
}

void maxminarr(int & maximo,int & minimo,int arr[],int inic,int fin)
//this function calculate the max and min of an array with the technique DyC
{
    if (inic < fin)
    {
        //divide
        int mitad = (inic + fin)/2;
        int maximoizq, maximoder, minimoizq, minimoder;
        maxminarr(maximoizq, minimoizq, arr, inic, mitad);
        maxminarr(maximoder, minimoder, arr, mitad + 1, fin);

        //combina
        if(maximoizq > maximoder)
            maximo = maximoizq;
        else
            maximo = maximoder;

        if(minimoizq < minimoder)
            minimo = minimoizq;
        else
            minimo = minimoder;


    }
    else
    {
        //conquista
        maximo = arr[inic];
        minimo = arr[inic];
    }
}
