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

       while (elementoComparar >= 0 && arr[listaOrdenada] > elementoComparar)
       {
           arr[listaOrdenada+1] = arr[listaOrdenada];
           listaOrdenada = listaOrdenada-1;
       }
       arr[listaOrdenada+1] = elementoComparar;
   }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int tam)
{
    int i, j, indiceMenor;

    for (i = 0; i < tam-1; i++)
    {
        indiceMenor = i;
        for (j = i+1; j < tam; j++)
          if (arr[j] < arr[indiceMenor])
            indiceMenor = j;

        swap(&arr[indiceMenor],&arr[i]);
    }
}

int main()
{
    int tam = 5;
    int arr[] = {5,6,21,3,7};
    cout << "array desordenado" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr,tam);
    cout << "array Ordenado(insertionSort)" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    int arr2[] = {4,8,9,6,21};
    cout << "array desordenado" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    selectionSort(arr2,tam);
    cout << "array Ordenado(selectionSort)" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr2[i] << " ";
    }
    return 0;
}
