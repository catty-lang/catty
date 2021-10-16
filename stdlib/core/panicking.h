#include <stdio.h>
#include <stdlib.h>

#define CATTY_LANG_PANIC(msg) CALL_CATTY_LANG_PANIC_HOOK(CATTY_LINE, CATTY_COL, CATTY_FNAME, CATTY_CTX, msg)

typedef size_t CATTY_LINE_NUMBER;
typedef size_t CATTY_COL_NUMBER;
typedef char* CATTY_STRING_REF_US;
typedef CATTY_STRING_REF_US CATTY_FNAME;
typedef struct __catty_panic_context {
           CATTY_FNAME fname, mpath, tname; //file name, method path, thread name
           struct __catty__coord {
                CATTY_LINE_NUMBER line: //line number
                CATTY_COL_NUMBER col; // column number
           } pcoord; // panicking coordinates.
           CATTY_STRING_REF_US pmsg; // panic message
} CATTY_PANIC_CONTEXT;

typedef size_t (*CATTY_PANIC_HOOK) (CATTY_PANIC_CONTEXT*);


           
