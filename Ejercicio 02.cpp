#include <iostream>
using namespace std;
int main (){
	int n, S=0, A[25], prom;
	cout<<"Ingresa la cantidad de numeros: ";
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Ingresa el numero: "<<endl;
		cin>>A[i];
		S=S+A[i];
	}
	prom=S/n;
	cout<<"Numeros mayores al promedio: "<<endl;
	for(int i=0;i<n;i++){
		if (A[i]>prom){
			cout<<A[i]<<endl;
		}
	}
	return 0;
}
