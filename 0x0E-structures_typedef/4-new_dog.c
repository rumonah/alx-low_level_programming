/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Retun: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int my1, my2;

	my1 = strlen(name);
	my2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (my1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (my2 + 1));
	if (dog - >owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
}
