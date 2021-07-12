#include <iostream>

using namespace std;
void mergesort(int array_empresas[], int array_aux[],  int inic,  int fin);
void merge (int array_empresas[], int array_aux[], int inic,  int mid , int fin);


int main()
{
    //initializing the array
    const int tama = 10;
    int arr[tama] = { 12, 11, 13, 5, 6, 7, 2, 15, 1, 4};

    int arraux[tama]; //declare de auxiliary array
    
    //this function execute the mergesort
    mergesort(arr, arraux, 0, tama-1);

    //print the sorted array
    for (int j = 0; j<tama;j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}

void mergesort(int array_empresas[], int array_aux[],  int inic,  int fin)
{
    if (inic < fin)
        {
            //divide
            int mitad = (inic+fin)/2;
            mergesort (array_empresas, array_aux, inic, mitad);
            mergesort (array_empresas, array_aux, mitad + 1, fin);
        
            //conbines
            merge(array_empresas, array_aux, inic, mitad, fin );


        }
}

void merge (int array_empresas[], int array_aux[], int inic,  int mid , int fin)
    {
         int midfin = mid + 1;
         int k = inic;
         int i = inic;
        //merge the two parts of the array until we reach to the end of one them
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

        //fill the remaining to the sort array
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

        //copy the auxiliary array part to the array original
        for ( int j = inic; j <= fin; j++)
        {
            array_empresas[j] = array_aux[j];
        }
    }



