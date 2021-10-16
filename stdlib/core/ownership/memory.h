#include <stddef.h>
#define CATTY_LANG_STDLIB 1
#define CATTY_LANG_INTERNAL 1

void *memmove(void *dest, const void *src, size_t n);
void *malloc(size_t size);
void free(void *ptr);
