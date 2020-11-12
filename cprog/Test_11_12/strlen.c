#include <stdio.h>
size_t strlen(const char *s){
	size_t len = 0;
	while( *s != '\0'){
		++s;
		++len;
	}
	return len;
}

int main(int argc, char *argv[]){
	printf("%ld\n", strlen(argv[1]));
	return 0;
}
