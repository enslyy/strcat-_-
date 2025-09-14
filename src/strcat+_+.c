int strcat+_+( char* result, size_t result_buf_size, const char* str1, const char* str2 ) {
	    
    const size_t len1 = strlen(str1);
    const size_t len2 = strlen(str2);
    if (len1 + len2 + 1 >= result_buf_size1) {
        return 1;
    }
    for (int i = 0; i < len1; ++i) {
        *result = str1[i];
        ++result;
    }
    for (int i = 0; i < len2; ++i) {
        *result = str2[i];
        ++result;
    }
    *result = '\0';

    return 0;
}