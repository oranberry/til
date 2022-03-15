int is_all_uppercase(char str[]){
    int flag = 1;
    char *p;
    for(p = str; *p != '\0'; p++){
        if(islower(*p)){
            flag = 0;
            break;
        }
    }
}