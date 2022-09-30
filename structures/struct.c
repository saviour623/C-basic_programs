#include <stdio.h>
#include <stdlib.h>
//.1
struct list {
	int x;
	int y;
} name;

//defining a synonym for struct list
typedef struct list stc;

//.2
struct detail {
	char name[16];
	int age;
	char contact[12];
};

typedef struct detail info;

int main(void)
{
	//.1
	struct list name = {1,2};
	printf("%d\n %d\n", name.x, name.y);
	//pointer to struct
	struct list *ptr = &name;
	printf("%d\n %d\n", (*ptr).x, (*ptr).y);

	//typedefine struct list as stc
	stc num = {4,5};
	printf("%d\n %d\n", num.x, num.y);
	//.2
	info det = {"Michael Saviour", 20, "09021381079"};

	printf("%s\n%d\n%s\n", det.name, det.age, det.contact);

	int i;

	for (i = 0; det.name[i]; i++)
		printf("%c", det.name[i]);
	printf("\n");
	return 0;
}
