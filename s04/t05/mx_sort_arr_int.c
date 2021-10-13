
void mx_sort_arr_int(int *arr, int size) {
    int j = 0;
    int tmp = 0;
    for(int i=0; i < size; i++){
        j = i;
        for(int k = i; k < size; k++){
            if(arr[j] > arr[k]){
                j = k;
            }
        }
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    }
}


