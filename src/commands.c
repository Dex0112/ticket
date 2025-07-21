#include "commands.h"

#include <string.h>

CommandType parse_command(const char *input) {
    if (strcmp(input, CMD_ADD_LITERAL) == 0) return CMD_ADD;

    return CMD_UNRECOGNIZED;
}

// Returns false on failture to save
bool save_ticket(const Ticket *ticket) {
    return false;
}
