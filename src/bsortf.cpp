#include "bsorth.hpp"
//creates the array
void bsort (int *mas,int size) {
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){ 
			if(mas[j]>mas[j+1]) {
			    int	b=mas[j];
				mas[j]=mas[j+1];
				mas[j+1]=b;
			}
		}
	}
//print the array
cout<<"sort end"<<endl;
	for(int i=0;i<size;i++) {
	cout<<mas[i]<<",";
	}
}	

