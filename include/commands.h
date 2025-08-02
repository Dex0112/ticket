#include "ticket.h"
#include <stdbool.h>

#define CMD_ADD_LITERAL "add"
#define CMD_EDIT_LITERAL "edit"
#define CMD_GET_LITERAL "get"
#define CMD_UNRECOGNIZED_LITERAL "unrecognized"

typedef enum {
    CMD_ADD,
    CMD_EDIT,
    CMD_GET,
    CMD_UNRECOGNIZED,
} CommandType;

CommandType parse_command(const char *input);

bool save_ticket(const Ticket *ticket);
Ticket *get_ticket(unsigned int ticket_id);
