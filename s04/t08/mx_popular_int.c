
int mx_popular_int(const int *arr, int size) {
    int max, count;
    for(int i = 0; i < size; i++) {
        count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
                if (count > max) {
                    max = arr[j];
                }
            }
        }
    }
    return max;
}

