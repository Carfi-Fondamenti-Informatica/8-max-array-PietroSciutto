#include<iostream>
using namespace std;

int main () {
     int i, N, max;

     do{
  	   cout<<"Inserisci la dimensione: ";
  	   cin>>N;
      }while(N<=0);

      int a[N];

       for (i=0; i<N; i++) {
  	   cout<<"Inserisci un numero: ";
	   cin>>a[i];
       }

	//troviamo il massimo

	max=a[0]; //poniamo il massimo uguale al primo elemento

  	for (i=0; i<N; i++) {
  		if(a[i]>max){
  			max=a[i];
		  }

	}
	cout<<max<<endl;

	return 0;
}
