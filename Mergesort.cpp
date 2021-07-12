#include <iostream>

using namespace std;

void unir (int array_empresas[], int array_aux[], int inic,  int mid , int fin)
    {
         int midfin = mid + 1;
         int k = inic;
         int i = inic;
        //unimos las dos partes del arreglo hasta que temrinemos con una de ellas
        while (i <= mid && midfin <= fin)
        {
            if (array_empresas[i] <= array_empresas[midfin])
            {
                array_aux[k] = array_empresas[i];
                i++;
            }
            else
            {
                array_aux[k] = array_empresas[midfin];
                midfin++;
            }

            k++;
        }

        //agregamos lo restante al arreglo ordenado
        if (i > mid)
        {
            while (midfin <= fin)
            {
                array_aux[k] = array_empresas[midfin];
                midfin++;
                k++;
            }
        }
        else
        {
            while ((i) <= mid)
            {
                array_aux[k] = array_empresas[i];
                i++;
                k++;
            }
        }

        //copiar el auxiliar al original
        for ( int j = inic; j <= fin; j++)
        {
            array_empresas[j] = array_aux[j];
        }
    }
void mergesort(int array_empresas[], int array_aux[],  int inic,  int fin)
{
    if (inic < fin)
        {
            int mitad = (inic+fin)/2;
            mergesort (array_empresas, array_aux, inic, mitad);
            mergesort (array_empresas, array_aux, mitad + 1, fin);

            unir(array_empresas, array_aux, inic, mitad, fin );


        }
}
/*
int main()
{
    const int tama = 10;
    int arri[tama] = { 12, 11, 13, 5, 6, 7, 2, 15, 1, 4};

    for (int j = 0; j<tama;j++)
    {
        cout << arri[j] << endl;
    }
    cout << endl << endl;

    int arraux[tama];
    mergesort(arri, arraux, 0, tama-1);

    for (int j = 0; j<tama;j++)
    {
        cout << arri[j] << endl;
    }

    return 0;
}
*/
