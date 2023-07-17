#ifndef dog_h
#define dog_h

/**
 * struct dog - user define data type.
 * @name: name char.
 * @age: float.
 * @owner: char name of owner.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

