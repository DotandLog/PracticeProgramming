int fire(struct Car* head) {
 
    int count = 0;
    if((head->passenger) < (head->flammable))
    {    
        count ++;
        struct Car *tem =  head;
        if((head->next) != NULL)
        {
            head = head->next;
            head->passenger = tem->passenger + head->passenger;
            if(fire(head))
                return count;
        }
        else 
            return count ;
       
    }
    if(head->passenger >= head->flammable)
    {
        return 0;
    }
}