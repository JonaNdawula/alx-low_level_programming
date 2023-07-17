#ifndef dog_h
#define dog_h
/**
 *struct dog - represents the dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 *
 */
struct dog
{

	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
char string_copy(char *dest, char *src);
int string_length(char *s);
void free_dog(dog_t *d);
#endif
