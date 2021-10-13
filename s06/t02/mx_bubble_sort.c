
int mx_strcmp(const char *s1, const char *s2);

int mx_bubbble_sort(char **arr, int size) {
    int n = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (mx_strcmp(arr[i], arr[j]) > 0) {
                char *s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
                n++;
            }
        }
    }
    return n;
}


