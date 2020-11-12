#include <ctype.h>
#include <stdio.h>
int word_cnt(const char *s){
	int cnt = 0;
	while(*s != '\0'){
		while(isspace(*s))
			++s;
		if(*s != '\0'){
			++cnt;
			while(!isspace(*s) && *s != '\0')
				++s;
		}
	}
	return cnt;
}




int main(int argc, char *argv[]) {
	printf("%d\n", word_cnt(argv[1]));
	return 0;
}
