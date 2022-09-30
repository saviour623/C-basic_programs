#include <stdio.h>

//function with parameter char and function pointer;
void print_name(char *name, void (*f)(char *));

void print_name(char *name, void (*f)(char *)){
	f(name);
}

//function that does printing
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

int main(void)
{
    print_name("Michael Saviour", print_name_as_is);
    printf("\n");
    return (0);
}
