#ifndef DOG_HEADER
#define DOG_HEADER
/**
 * struct dog - a group of variables for dogs
 * @name: the name
 * @age: the age
 * @owner: the dog's ownwer
 *
 * Description: variables for a dog's identity
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/*Function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_HEADER*/
