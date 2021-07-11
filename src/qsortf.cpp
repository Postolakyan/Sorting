/*#include <iostream>
using namespace std;*/
	#include "bsorth.hpp"

		int qsort(int *mas, int size) {
	
			int i = 0;
			int j = size-1;
			int mid=mas[size/2];
			do {
				for(i=0;mas[i]<mid;i++) {
				} 
				for(j=size-1;mas[j]>mid;j--) {
				}
				if(i<=j) {
					int tmp=mas[i];
					mas[i]=mas[j];
					mas[j]=tmp;
					i++;
					j--;
				}	
		}	while(i<=j);
			if(j>0) {
			qsort(mas,j+1);
			}
			if (i<size) {
			qsort (&mas[i],size-i);
			}
return *mas;


	}
	/*	int main () {
		int masiv [10] = {2,5,6,8,7,4,1,3,45,12};
		qsort(masiv,10);
		for(int i=0;i<10;i++) {
		cout<<masiv[i];
		}
return 0;
}
	*/	
