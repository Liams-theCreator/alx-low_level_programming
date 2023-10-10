#ifndef DOG_H
#define DOG_H

/**
 * struct dog - poppy structure
 * @name: poppy's name
 * @age: poppy's age
 * @owner: poppy's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif