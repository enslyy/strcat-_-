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