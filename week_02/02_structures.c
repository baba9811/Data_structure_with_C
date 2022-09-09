#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];
	int sumAngle, numSide, eachAngle;		
}rectangle;

typedef struct {
	char name[10];
	int sumAngle, numSide;
}triangle;

typedef struct {
	char name[10];
	float pi;
	char centerToline[10], diameter[10], circumference[10];
}circle;

int main(void){
	rectangle r;
	triangle t;
	circle c;
	
	strcpy(r.name, "rectangle");
	r.sumAngle = 360;
	r.numSide = 4;
	r.eachAngle = 90;
	
	strcpy(t.name, "triangle");
	t.sumAngle = 180;
	t.numSide = 3;
	
	strcpy(c.name, "circle");
	strcpy(c.centerToline, "radius");
	c.pi = 3.141592;
	strcpy(c.diameter, "2r");
	strcpy(c.circumference, "2pi^2");
	
	printf("name: %s\nsum of angles: %d\nnumber of sides: %d\ndegree of each angle: %d\n\n", r.name, r.sumAngle, r.numSide, r.eachAngle);
	printf("name: %s\nsum of angles: %d\ndegree of each angles: %d\n\n", t.name, t.sumAngle, t.numSide);
	printf("name: %s\nCenter of circle to linesegment: %s\npi: %.2f\ndiameter: %s\ncircumference: %s", c.name, c.centerToline, c.pi, c.diameter, c.circumference);
	
}
