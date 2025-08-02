#include <ticket.h>

#define CONFIG_PATH "../config/ticket.conf"

// Have an indexable array with the literals?
// Maybe an is stream variable so you know if every interaction needs to be written to database or just a bulk commit at the end
typedef enum {
    DATABASE_PATH,
} ConfigFields;

typedef struct {
    char *database_path;
} Config;

Config load_config();
