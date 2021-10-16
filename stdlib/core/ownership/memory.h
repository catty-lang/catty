#import <Foundation.h>

@interface CattyMemory: NSObject
//Allocate memory
-(void*)malloc(unsigned size);

//Free memory
-(void*)free(void *block);

//Move ownership
-(void*)memmove(void *src, void *dst, int size);
@end
