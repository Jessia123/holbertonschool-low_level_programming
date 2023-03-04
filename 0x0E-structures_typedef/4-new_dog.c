#include "dog.h"

/**
 * new_dog - check the code
 * @name: dogs name
 * @owner: name of owner
 * @age: age of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nameLength, ownerLength, len;
	dog_t *new_dog;	
	if (name == NULL || owner == NULL)
		{
			return (NULL);
		}
	
		new_dog = malloc(sizeof(dog_t));

		for (i=0; name[i] !='\0'; i++)
		{
			nameLength = i;
		}

		for (i=0; owner[i] !='\0'; i++)
		{
			ownerLength = i;
		}
	

		new_dog->name = malloc(nameLength * sizeof(char));
		if (new_dog->name == NULL)
		{
		free (new_dog);
		return (NULL);
		}
		new_dog->owner = malloc(ownerLength *sizeof(char));
		if (new_dog->owner == NULL)
		{
		free (new_dog->name);
		free (new_dog);
		return (NULL);
		}
		
		len = nameLength;
		new_dog->age = age;
		
		for (i=0; i <= len; i++)
		{
		
			new_dog->name[i] = name[i];
		}
	
		
		
		for (i=0; i < len; i++)
		{
			 new_dog->owner[i] = owner[i];
		}
	

		return (new_dog);
}
