#include <stdio.h>
#include <string.h>
#define MAX_LEN 101
void stringremove(char a[], int i, int j){
	char b[MAX_LEN], c[MAX_LEN];
	int k,l;
	int len_str = strlen(a);
	for (k=0; k<i; k++){
		b[k] = a[k];
	}
	for (k=0, l = i+j; l<=len_str; l++, k++){
		c[k] = a[l];
	}
	a = strcat(b, c);
	printf("%s", a);
	
}

int main(void){
	char a[MAX_LEN] = "HellowwwwWorld";
	stringremove(a, 5,4);
	return 0;
}
