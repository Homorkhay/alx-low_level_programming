#ifndef main_h
#define main_h
int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
<<<<<<< HEAD
void set_string(char **s, char *to);
=======
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
>>>>>>> 5745cd56d3059eabdb444f463f2e713a4ac38dcc

#endif
