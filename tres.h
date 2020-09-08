#include <iostream>
using namespace std;

void ingresar(int A[], int n){
  char r;
  ofstream archivo1;
  archivo1.open("heapsort.txt",ios::app);
  archivo1 << "Elementos no ordenados: ";
  for (int i=1; i<=n; i++){
    cout << "Valor : ";
    cin >> A[i];
    archivo1 << A[i] << " ";
  }
  archivo1 << endl;
  archivo1.close();
}
