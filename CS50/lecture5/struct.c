// Syntax to remember,struct, ., *,  ->
// Linked list - linking non-array data inside the memory

// node is a function included in C but if we want to declare it, we can add it beside typedf struct and modify the parameter of the structure inside
typdef struct node
{
    int number;
    struct node *next;

}
node;