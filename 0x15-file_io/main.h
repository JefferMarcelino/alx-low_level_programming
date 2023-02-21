#ifndef MAIN

#define MAIN
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
int __exit(int error_code, char *str, int fd);

#endif
