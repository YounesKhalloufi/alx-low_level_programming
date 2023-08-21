<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

=======
#ifndef DYNAMIC_LIB
#define DYNAMIC_LIB
#include <stdlib.h>
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
<<<<<<< HEAD
void _puts(char *s);
=======
void _puts(char *str);
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
<<<<<<< HEAD

#endif
=======
#endif /* DYNAMIC_LIB */
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
