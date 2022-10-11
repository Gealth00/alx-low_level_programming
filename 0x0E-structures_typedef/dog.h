#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

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
void free_dog(dog_t *d);

#endif
