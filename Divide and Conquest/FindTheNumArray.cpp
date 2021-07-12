#include <iostream>

using namespace std;
int searchnum(int arr[],int inic,int fin, int nro);


int main()
{

    int arr[]={2,3,4,5,6,7};
    int inic = 0;
    int size = 6;
    int nro = 6; //it´s the number you are searching for

    int index;
    index = searchnum(arr, 0, size-1, nro); //search the number, retunr the index of the first apearrence. returns -1 if doesn´t exist the number in the array.

    cout << index ;

    return 0;
}

int searchnum(int arr[],int inic,int fin, int nro)
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
                searchnum(arr, mitad + 1, fin, nro);
            else
            {
                searchnum(arr, inic, mitad - 1, nro);
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
