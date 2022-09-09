#include <stdio.h>
#include <stdlib.h>
#define MAX_DEGREE 101

// def struct
typedef struct{
	int degree;
	float coef[MAX_DEGREE];
}polynomial;

// def Attach()
polynomial Attach(polynomial d, float coef){
	d.coef[d.degree] = coef;
	d.degree ++;
	return d;
}
// def Remove()
polynomial Remove(polynomial x){
	int i;
	for(i=0; i<x.degree; i++){
		x.coef[i] = x.coef[i+1];
	}
	x.degree --;
	return x;
}

int main(void){
	
	polynomial a = {6, {3, 2, 0, 0, 0, 0, 4}};
	polynomial b = {4, {1, 10, 3, 0, 1}};
	polynomial d;
	int i;
	d.degree = 0;
	
	while(a.degree>=-1 && b.degree>=-1){
		if (a.degree > b.degree){
			d = Attach(d, a.coef[0]);
			a = Remove(a);
		}
		else if(a.degree == b.degree){
			float sum = a.coef[0] + b.coef[0];
			d = Attach(d, sum);
			a = Remove(a);
			b = Remove(b);
		}
		else{
			d = Attach(d, b.coef[0]);
			b = Remove(b);
		}
	}
	for (i=0; i<d.degree-2;i++){
		printf("%.2fx^%d +", d.coef[i], d.degree - i-2);
	}
	printf("%2.f", d.coef[d.degree-2]);
	return 0;
}

