#include <iostream>
using namespace std;
int main() {
    int n, A[15], aux;
    cout<<"Ingrese la cantidad de elementos: "<<endl;
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"Ingresa el elemento: "<<endl;
        cin>>A[i];
    }
    for (int i=0;i<n/2;i++) {
        aux=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=aux;
    }
    cout<<"Elementos equidistantes: ";
    for (int i=0;i<n; i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}
