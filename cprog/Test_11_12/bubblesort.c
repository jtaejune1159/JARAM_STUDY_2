#include <stdio.h>
void swap(int *, int *);
void bubble(int[], int);

int main(void){
	int a[] = {7, 3, 66, 3, -5, 22, 77, 2};
	bubble(a, 8);
	for(int i= 0; i <8 ; i++){
		printf("[%d] ", a[i]);
	}
	return 0;
}

void swap(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

void bubble(int a[], int n){
	for(int i=0; i<n ;i++){
		for(int j = 0; j < n - 1 - i ; j++){
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
			}
		}
	}
}



			
