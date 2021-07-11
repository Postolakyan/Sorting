#include "bsorth.hpp"
int main() {
	 	
	int masiv[10]={1,5,6,9,4,3,2,7,56,42};
	bsort(masiv,10);
	int masiv2[10]={5,87,14,23,65,98,4,13,84,7};
	qsort(masiv2,10);
	for(int i=0;i<10;i++) {
	cout<<masiv2[i];
	}	
			return 0;
		
}
