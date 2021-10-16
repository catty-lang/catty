#import <Foundation.h>

//Allocate memory
void *malloc(unsigned size);

//Free memory
void free(void *block);

//Move ownership
void *memmove(void *src, void *dst, int size);
