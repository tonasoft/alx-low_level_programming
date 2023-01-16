#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: first
 * @age: second
 * @owner: owner
 *
 * Description: no description for this structure dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
