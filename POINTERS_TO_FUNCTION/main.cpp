#include "ordenacion.h"
#include <iostream>

using namespace std;

int main()
{
	int a[10];
	for(int i = 10; i >= 0;i--){
		a[10-i] = i; 
	}
	printList(a,10);

	int criterio;
	bool orden;
	cout << "Escoge criterio y orden" << endl;
	cout << "1 = bubbleSort \n 2 = insertionSort \n 3 = selectionSort \n 4 = coctelSort \n";
	cin >> criterio;
	cout << "0 = ascendente \n 1 = descendente" << endl;
	cin >> orden;

	elegirSorts(criterio,a,10,orden);
	printList(a,10);

    return 0;
}
