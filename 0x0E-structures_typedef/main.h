#ifndef MAIN_H
#define MAIN_H

typedef struct dog dog_t;
void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);

#endif /* MAIN_H */
