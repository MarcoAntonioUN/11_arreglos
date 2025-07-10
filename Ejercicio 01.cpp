#include <iostream>
using namespace std; 
int main (){
	int n,max;
	system("cls");
	cout<<":::::::::: Detector de numero mayor ::::::::::"<<endl;
	cout<<"Ingrese la cantidad de elementos: ";	cin>>n;
	int A[n];
	for (int i=0; i<n;i=i+1){
		cout<<"Ingrese el numero "<<i+1<<": "; cin>>A[i];
	}
	max=A[0];
	for (int i=1;i<n;i=i+1){
		if( A[i]>max){
			max=A[i];
		}
	}
	cout<<"\nEl mayor numero es "<<max<<endl<<endl;
	system("pause");
	return 0;
}
