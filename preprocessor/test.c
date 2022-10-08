#include <stdio.h>

int main(){
	printf("%d", __STDC__);

#define  message_for(a, b)				\
	printf(#a " and " #b ": We love you!\n")

	message_for(Carole, Debra);
	return 0;
}
