#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if (argc == 2) {
        int file = open(argv[1], O_RDONLY);
        if (file < 0) {
            mx_printerr("error\n");
            return -1;
        }
        int size;
        char buff[1];
        size = read(file, buff, 1);
        while (size) {
            buff[size] = '\0';
            write(1, buff, 1);
            size = read(file, buff, 1);
        }
        if (close(file) < 0) {
            mx_printerr("error\n");
            return -1;
        }
        close(file);
        write(1, "\n", 1);
    }
    else {
        mx_printerr("usage: ./read_file [file_path]\n");
    }
    return 0;
}

