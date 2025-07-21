#include <stdio.h>

#include "commands.h"

int main(int argc, char *argv[]) {
    const char *save_file = "../data.db";

    FILE *fptr = fopen(save_file, "a");

    if (fptr == NULL) {

        printf("Error opening file!\n");
        return 1;
    }

    fclose(fptr);

    return 0;
}
