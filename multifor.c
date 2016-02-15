/**
 * Generates a list that goes from 0,0,0,0 to 3,3,3,3. (256 lines total)
 * 
 * General format:
 * For variable v1,v2,...vn:
 * v1<(v1_max-1)?v1++:(v1=0)^(v2<(v2_max-1)?v2++:(v2=0)^(......^vn++)...))
 */

#include <stdio.h>
void main(void){
	int a,b,c,d;
	for(a=b=c=d=0;a<4;
		//c<3?(d<3?d++:c++^(d=0)):(d<3?d++:b++^(c=0)^(d=0)) -- old way
		d<3?d++:(d=0)^(c<3?c++:(c=0)^(b<3?b++:(b=0)^a++)))  //new, shorter way
		printf("%d,%d,%d,%d\n",a,b,c,d);
}
