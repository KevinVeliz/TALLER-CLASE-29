#include <iostream>
using namespace std;

void imprimir(int A[], int n){
  ofstream archivo;
  archivo.open("heapsort.txt", ios::app);
  archivo << "Elementos ordenados: ";
for(int i=1; i<=n; i++){
    cout <<"["<< A[i] << "]";
    archivo <<"["<< A[i] << "]";
  }
  archivo.close();
}