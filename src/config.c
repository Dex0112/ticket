#include <config.h>
#include <stdio.h>

Config load_config() {
    FILE *fptr = fopen(CONFIG_PATH, "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        // Failing state
    }

    fclose(fptr);
    Config config = {
        .database_path = "",
    };

    return config;
}
