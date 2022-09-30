#include <stdio.h>
void simple_print_buffer(char *buffer,int size);
char *mem(char *buffer, char b, int size);

int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    mem(buffer, 0x01, 95);
    simple_print_buffer(buffer, 98);

    return 0;
}

void simple_print_buffer(char *buffer,int size)
{
        unsigned int i;

        for(i = 0; i < size; i++)
	{
		//if remainder of i != 0, print (, and a space).
		if (i % 10)
			printf(", ");
		//if remainder of i = 0 but i != 0 print newline.
		//e.g i = 10; 10 % 10 = 0 but i is not 0.
		if (!(i % 10) && i)
			printf("\n");

		printf("0x%02x", buffer[i]);
	}
}
char *mem(char *buffer, char b, int size)
{
        unsigned int i;

        for(i = 0; i < size; i++)
	{
		*(buffer + i) = b;
	}
	return buffer;
}
