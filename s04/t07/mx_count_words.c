
int mx_count_words(const char *str, char delimiter) {
    int flag = 0;
    int count = 0;
    int check = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] == delimiter && flag == 0) {
            flag = 1;
        }
        if(str[i] == delimiter) {
            check = 0;
        }
        else if (check == 0) {
            check = 1;
            count++;
        }
    }
    if (flag > 0) {
        return count;
    }
    else {
        return 0;
    }
}

