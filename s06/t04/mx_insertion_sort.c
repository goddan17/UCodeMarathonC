

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int c = 0;
    for (int i = 1; i < size; i++) {
        int j = i - 1;
        char *temp = arr[i];
        while ((j >= 0) && (mx_strlen(temp) < mx_strlen(arr[j]))) {
                arr[j + 1] = arr[j];
                j--;
                c++;
        }
        arr[j + 1] = temp;
    }
    return c;
}



