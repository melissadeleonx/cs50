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
