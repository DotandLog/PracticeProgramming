#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void MoveToTail();

int main(void) { 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        struct node* tmp = malloc(sizeof(struct node));
        scanf("%d", &tmp->val);
        tmp->next = NULL;
        if(i == 1)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    MoveToTail();
    for(struct node* cur = head; cur != NULL; cur = cur->next)
        printf("%d ", cur->val); 
    return 0;
}

void MoveToTail() {
    // "struct node* head" and "struct node* tail" are in global
    // you can use this two pointers to do this problem
    struct node *tem = head ;
    struct node *min = head ;
    while(tem != tail){
        if(min->val<tem->next->val){
            min = tem->next;
        }
        tem = tem->next;
    }
    tem=head;
    while(tem->next!=min){
        tem = tem->next;
    }
    tem->next = min->next;
    tail->next = min;
    min->next = NULL;
    tail=min;

}