void shift(char *message, int shift) {
    char *p;
    for(p = message; *p != '\0'; p++)
    {
        if(*p >= 'A' && *p <= 'Z')
            *p = (*p - 'A' + shift)%26 + 'A';
        
        if(*p >= 'a' && *p <= 'z')
            *p = (*p - 'a' + shift)%26 + 'a';
    }
}