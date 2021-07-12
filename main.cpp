#include <iostream>

using namespace std;
int buscar(int arr[],int inic,int fin, int nro);
int main()
{

    int arr[]={2,3,4,5,6,7};
    int inic = 0;
    int fin = 5;
    int nro = 6;
    for (int j = 0; j<6;j++)
    {
        cout << arr[j] << endl;
    }
    cout << endl << endl;

    int index;
    index = buscar(arr, inic, fin, nro); //se busca nro en el arreglo pasado, te devuelve el indice en el arr del mismo, -1 si no lo encuentra

    cout << index ;

    return 0;
}

int buscar(int arr[],int inic,int fin, int nro)
{
    if (inic < fin)
    {
        int mitad = (inic + fin)/2;
        if (arr[mitad] == nro)
        {
            return mitad;
        }
        else
        {
            if (arr[mitad] < nro)
                buscar(arr, mitad + 1, fin, nro);
            else
            {
                buscar(arr, inic, mitad - 1, nro);
            }
        }
    }
    else
    {
        if (arr[inic] == nro)
            return inic;
        else
            return -1;
    }
}
