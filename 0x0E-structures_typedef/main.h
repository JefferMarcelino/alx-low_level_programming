#ifndef MAIN_H
#define MAIN_H

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /* MAIN_H */
