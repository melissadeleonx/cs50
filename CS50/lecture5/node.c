How linked listing works in order using nodes(boxes)
// Null means the node is empty
node *list = NULL;

// a node called n is allocated in memory
node *n = malloc(sizeof(node));

// Two different syntax, same usage, the latter is easier to read
// The number of node is assigned the value 1
(n*).number = 1;
n->number = 1;

// To signify the end of the list, we can use this code
n->number = NULL;

list = n;

// A new node is then created. Both the number and next field are both filled with garbage values.
node *n = malloc(sizeof(node));

// The number value of n’s node (the new node) is updated to 2.
n->number = 2;

// Also, the next field is updated as well.
n->next = NULL;

// Most important, we do not want to lose our connection to any of these nodes lest they be lost forever. Accordingly, n’s next field is pointed to the same memory location as list.
n->next = list;

// Finally, list is updated to point at n. We now have a linked list of two items
list = n;


