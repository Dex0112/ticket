typedef enum {
    Open,
    Solved,
    Active, 
} TicketStatus;

typedef enum {
    Low,
    Medium,
    High,
    Critical,
} TicketPriority;

typedef enum {
    TITLE = 1 << 1,
    DESCRIPTION = 1 << 2,
    POSTMORTEM = 1 << 3,
    STATUS = 1 << 4,
    PRIORITY = 1 << 5
} TicketEditType;

typedef struct {
    int edit_mask;
} TicketEdit;

typedef struct {
    unsigned int ticket_id;
    char *title;
    char *description;
    char *postmortem;
    TicketStatus status;
    TicketPriority priority;
} Ticket;
