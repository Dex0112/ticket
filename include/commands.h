#include "ticket.h"
#include <stdbool.h>

#define CMD_ADD_LITERAL "add"

typedef enum {
    CMD_ADD,
    CMD_EDIT,
    CMD_GET,
    CMD_UNRECOGNIZED,
} CommandType;

// Enum for changes which uses an int mask to check the bits for each field a ticket has

typedef struct {
} CommandTree;

CommandType parse_command(const char *input);

bool save_ticket(const Ticket *ticket);
Ticket *get_ticket(unsigned int ticket_id);
