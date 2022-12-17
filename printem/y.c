#include <stdio.h>

int main(){
	int array[5];
	int prsn = 5;
	float x = 3.1234;
	float point = x - (int)x;
	printf("%f\n", point);
	int i = 0;
        while (i < prsn){
                point = point - (int)point;
                point = point / 0.1;
                array[i] = (int)point;
                i += 1;
        }
        while (i--)
                printf("%d\n", array[i]);
        printf("%.1f", 0.45561234);
	return 0;
}
