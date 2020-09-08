#include <iostream>
#include <fstream>
#include "uno.h"
#include "dos.h"
#include "tres.h"
using namespace  std;
using namespace heap;


int main() {
  int A[100],n;
  char r;
  cout << "Ingrese catidad de elementos: ";
  cin >> n;
  ofstream archivoUno;
  string nombreArchivo;
  cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
  cin.ignore();
  getline(cin,nombreArchivo);
  archivoUno.open(nombreArchivo.c_str(),ios::app);
  do
    {
  ingresar(A,n);
  HeapSort(A, n);
cout<<"DESEA AGREGAR OTRO CONTACTO s/n: ";
cin>>r;
cin.ignore();
    }while(r=='s');
    imprimir(A, n);
    archivoUno << "\nEl algoritmo utilizado es: HEAPSORT " << endl;
    archivoUno.close();

}
