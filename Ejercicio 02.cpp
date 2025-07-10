#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int n, S=0, prom;
	system("cls");
	cout<<":::::::::: Detector de numeros mayores al promedio ::::::::::"<<endl;
	cout<<"Ingresa la cantidad de numeros a ingresar: "; cin>>n;
	int A[n];
	for (int i=0;i<n;i++){
		cout<<"Ingresa el numero "<<i+1<<": "; cin>>A[i];
		S=S+A[i];
	}
	prom=S/n;
	cout<<"\nNumeros mayores a "<<prom<<": "<<endl;
	for(int i=0;i<n;i++){
		if (A[i]>prom){
			cout<<left<<setw(10)<<A[i]<<endl;
		}
	}
	system("pause");
	return 0;
}
