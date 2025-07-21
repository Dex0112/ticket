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

typedef struct {
    unsigned int ticket_id;
    char *title;
    char *description;
    TicketStatus status;
    TicketPriority priority;
} Ticket;
