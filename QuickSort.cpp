#include <iostream>

using namespace std;
void quicksort(int arr[], int inic, int fin);
int sortbypivot(int arr[],int inic,int fin);
/*
int main()
{
    int arr[]={2,7,6,4,2,5};
    int inic = 0;
    int fin = 5;

    for (int j = 0; j < 6;j++)
    {
        cout << arr[j] << endl;
    }
    cout << endl << endl;

    quicksort(arr, inic, fin);

    for (int j = 0; j < 6;j++)
    {
        cout << arr[j] << endl;
    }


    return 0;
}
*/
void quicksort(int arr[], int inic, int fin)
{

    if (inic < fin)
    {
        int index = sortbypivot(arr, inic, fin);
        quicksort(arr, inic, index - 1);
        quicksort(arr, index + 1, fin);
    }
}

int sortbypivot(int arr[],int inic,int fin)
{
    int swapp;
    int i = inic ;
    for (int j = inic; j < fin; j++ )
    {
        if (arr[j] < arr[fin])
        {
            swapp = arr[j];
            arr[j] = arr[i];
            arr[i] = swapp;
            i++;
        }
    }

    swapp = arr[fin];
    arr[fin] = arr[i];
    arr[i] = swapp;

    return i;
}
