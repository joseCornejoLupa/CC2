#include <iostream>

using namespace std;

/*	a ^= b;
	b ^= a;
	a ^= b;*/

void insertionSort(int arr[], int tam)
{
   int inicio, elementoComparar, listaOrdenada;
   for (inicio = 1; inicio < tam; inicio++)
   {
       elementoComparar = arr[inicio];
       listaOrdenada = inicio-1;

       while (j >= 0 && arr[listaOrdenada] > elementoComparar)
       {
           arr[listaOrdenada+1] = arr[listaOrdenada];
           listaOrdenada = listaOrdenada-1;
       }
       arr[listaOrdenada+1] = elementoComparar;
   }
}

void swap(int *xp, int *yp)
{
    *xp ^= *yp;
	*yp ^= *xp;
	*xp ^= *yp;	
}

void selectionSort(int arr[], int tam)
{
    int i, j, indiceMenor;

    for (i = 0; i < tam-1; i++)
    {
        indiceMenor = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[indiceMenor])
            indiceMenor = j;

        swap(&arr[indiceMenor], &arr[i]);
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
