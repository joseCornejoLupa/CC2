#include <iostream>

using namespace std;

void printList(int lista[], int numE){
    for(int i=0;i<numE;i++){
        cout<<lista[i]<<" ";
    }
    cout<<endl;
}

void swapValues(int*a,int*b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

bool ascBub(int a, int b){
	if(a>b)
		return true;
	else
		return false;
}

bool desBub(int a, int b){
	if(a<b)
		return true;
	else
		return false;
}

void coctelSort(int lista[], int numE,bool (*p)(int,int)){
    bool ordenado = false;
    int* inicio = lista;
    int* fin = lista+numE;

    while(!ordenado){
        ordenado = true;
        for(int*i=inicio;i<fin-1;i++){
			if(p(*i,*(i+1))){
		    	swapValues(i,i+1);
		    	ordenado=false;
		    }
        }

        for(int*i=fin-1;i>inicio;i--){
			if(p(*(i-1),*i)){
		    	swapValues(i,i-1);
		    	ordenado=false;
		    }
        }
        inicio++;
        fin--;
    }
}

void selectionSort(int arr[], int n,bool (*p)(int,int))
{
    int *i, *j, *min_idx;
 
    for (i = arr; i < arr+n; i++)
    {
        min_idx = i;
        for (j = i+1; j < arr+n; j++){
			if (!p(*j, *min_idx))
		    	min_idx = j;
		}
        swap(*min_idx, *i);
    }
}

void insertionSort(int arr[], int tam,bool (*p)(int,int))	{
   int* inicio, elementoComparar, *listaOrdenada;
   for (inicio = arr+1; inicio < arr+tam; inicio++)
   {
       elementoComparar = *inicio;
       listaOrdenada = inicio-1;
		while (elementoComparar >= 0 && p(*listaOrdenada,elementoComparar))
	   {
	       *(listaOrdenada+1) = *listaOrdenada;
	       listaOrdenada--;
	   }
		*(listaOrdenada+1) = elementoComparar;
   }
}

void bubbleSort(int arr[], int tam, bool (*p)(int,int)) {
    for(int *last = arr+tam-1; arr != last; last--) {
        for(int *ptr = arr; ptr != last; ptr++) {
	        if(p(*ptr,*(ptr+1))) {
	            *ptr = *ptr + *(ptr+1);
	            *(ptr+1) = *ptr - *(ptr+1);
	            *ptr = *ptr - *(ptr+1);
		    }
        }
    }
}

/*1 = bubbleSort
  2 = insertionSort
  3 = selectionSort
  4 = coctelSort	
*/
void elegirSorts(int index,int arr[], int numE, bool orden){
	void (* sorts)(int [],int,bool (*)(int,int));
	bool (*foo)(int,int);
	if(index == 1){
		cout << "BUBBLE ";
		sorts = bubbleSort;
		if (!orden){	
			foo = ascBub;
			cout << "ASCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
		if (orden){
			foo = desBub;
			cout << "DESCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
	}
	if(index == 2){
		cout << "INSERTION ";
		sorts = insertionSort;
		if (!orden){
			foo = ascBub;
			cout << "ASCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
		if (orden){
			foo = desBub;
			cout << "DESCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
	}
	if(index == 3){
		cout << "SELECTION ";
		sorts = selectionSort;
		if (!orden){
			foo = ascBub;
			cout << "ASCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
		if (orden){
			foo = desBub;
			cout << "DESCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
	}
	if(index == 4){
		cout << "COCTEL ";
		sorts = coctelSort;
		if (!orden){
			foo = ascBub;
			cout << "ASCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
		if (orden){
			foo = desBub;
			cout << "DESCENDENTE!" << endl;
			sorts(arr,numE,foo);
		}
	}
}
