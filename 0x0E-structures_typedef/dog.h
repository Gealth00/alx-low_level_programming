#ifndef _MY_DOG_
#define _MY_DOG_

/**
 * my_dog - Typedef for struct dog
*/
typedef struct dog my_dog;

/**
 * struct dog - Struct that stores information about a dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 *
 * Description: Struct called "dog" stores its name, its age
 * and the name of the owner
*/
struct dog
{

	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog`:wq! *d);

#endif
