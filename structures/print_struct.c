#include <stdio.h>

//function that prints a struct dog

struct dog{
	char *name;
	int age;
	char *owner;
};

void print_dog(struct dog *d);

int main(void)
{
	struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
//pointer to struct
void print_dog(struct dog *d){
	if (d == NULL)
		printf("(Nil)\n");
	if (d->name == NULL)
		printf("Name: (Nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
