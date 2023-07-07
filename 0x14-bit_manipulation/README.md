# Bit Manipuation

# Tasks

## 0.0

Write a function that converts a binary number to an `unsigned int`.

* Prototype: `unsigned int binary_to_uint(const char *b);`
* where `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 if
    * there is one or more chars in the string `b` that is not `0` or `1`
    * `b` is `NULL`


 ```
julien@ubuntu:~/0x14@ubuntu:~/0x14. Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code 
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);
	return (0);
}
julien@ubuntu:~/0x14~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$
```

## 1.1

Write a function that prints the binary representation of a number.

* Prototype: `void print_binary(unsigned long int n);`
* Format: see example
* You are not allowed to use arrays
* You are not allowed to use `malloc`
* You are not allowed to use the `%` or `/` operators


```
julien@ubuntu:~/0x14~/0x14. Binary$ cat 1-main.c 
#include <stdio.h>
#include "mainn.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_binary.c _putchar.c -o b
$ amonkeyprogrammer@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$
```
## 2.10

Write a function that returns the value of a bit at a given index.

* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* where `index` is the index, starting from `0` of the bit you want to get
* Returns: the value of the bit at index `index` or `-1` if an error occured

```
julien@ubuntu:~/0x14. Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-get_bit.c -o c 
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0
julien@ubuntu:~/0x14. Binary$
```
