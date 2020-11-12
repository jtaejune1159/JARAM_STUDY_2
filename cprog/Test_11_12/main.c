#include "mergesort.h"

int main(void){
	int sz, key[] = {4, 3, 1, 67, 55, 8, 0, 4 ,-5, 37, 7, 4, 2, 9, 1, -1};
	sz = sizeof(key) / sizeof(int);
	mergesort(key, sz);
	for(int i=0; i<sz ;i++)
		printf("[%d] ", key[i]);
	return 0;
}
