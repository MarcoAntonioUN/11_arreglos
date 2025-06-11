#include <iostream>
using namespace std; 
int main (){
	int n,max,A[20];
	cout<<"Ingrese la cantidad de elementos: "<<endl;
	cin>>n;
	for (int i=0; i<n;i=i+1){
		cout<<"Ingrese el numero: "<<endl;
		cin>>A[i];
	}
	max=A[0];
	for (int i=1;i<n;i=i+1){
		if( A[i]>max){
			max=A[i];
		}
	}
	cout<<"El numero mayor es: "<<max;
	return 0;
}
