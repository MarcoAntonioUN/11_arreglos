#include <iostream>
using namespace std;
int main() {
    int n, aux;
    system("cls");
	cout<<":::::::::: Intercambiador de elementos equidistantes ::::::::::"<<endl;
    cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    int A[n];
    for (int i=0;i<n;i++) {
        cout<<"Ingresa el elemento "<<i+1<<": "; cin>>A[i];
    }
    for (int i=0;i<n/2;i++) {
        aux=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=aux;
    }
    cout<<"\nOrden invertido: ";
    for (int i=0;i<n; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl<<endl;
    system("pause");
    return 0;
}
