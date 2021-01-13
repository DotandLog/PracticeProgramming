void push(struct head* stack_p, int data) {

    struct element *newnode = (struct element*)malloc(sizeof(struct element));
    newnode->data = data;
    newnode->next = NULL;

    if (stack_p->size == 0 )
    {
        stack_p->size = 1;
        stack_p->top = newnode;
        stack_p->next = newnode;
    }
    else
    {
    	struct head* tem = stack_p;
        stack_p->size = stack_p->size + 1;
        tem->top->next = newnode;
        stack_p->top = newnode; 
    }
}

struct element* pop(struct head* stack_p) {
    struct element* tem = stack_p->top;

    if(stack_p->size == 1)
    {
	    stack_p->size = stack_p->size - 1;
        return  stack_p->top;
	}
    else
    {
        struct element* ptr = stack_p->next;
    	while(ptr->next != stack_p->top)
    	{
            ptr = ptr->next;
        }
        stack_p->size = stack_p->size - 1;
        ptr->next = NULL;
        stack_p->top = ptr;
        stack_p->top->next = NULL;
        tem = ptr->next;
            
        return tem;
    }

}