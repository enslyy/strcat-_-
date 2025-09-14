## Custom_strcat 

## Safety checks include:

-  Dest string  must not be NULL.

-  Source string  must not be NULL.

-  NumberOfElements must be greater than 0.

-  The combined length of strDest + strSource must fit within numberOfElements.
## Test
```c
- 1. test.c
#include <stdio.h>
#include <string.h>
    extern int strcat+_+(char* result, size_t result_buf_size, const char* str1, const char* str2 );
int main() {
    char result[12];
    const char* str1 = "hello ";
    const char* str2 = "world";
    int err_code = strcat+_+(&result, sizeof(result), str1, str2);
    if ( err_code != 1) {
        fprintf(stdout, "Result-> %s\n", result);
    }
    return 0;
}
```
'gcc -o  test/test src/test.c src/strcat+_+.c'.
    

