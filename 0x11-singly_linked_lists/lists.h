#ifndef __LISTS__H
#define __LISTS__H
#include <stddef.h>
/**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
  *
  * Description: singly linked list node structur
  * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
