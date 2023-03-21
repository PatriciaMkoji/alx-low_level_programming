#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structuredefiing the attributes of the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_a;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_a *new_dog(char *name, float age, char *owner);
void free_dog(dog_a *d);

#endif
