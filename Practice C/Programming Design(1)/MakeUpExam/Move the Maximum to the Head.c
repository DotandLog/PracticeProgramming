#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void MoveToHead();

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
    MoveToHead();
    for(struct node* cur = head; cur != NULL; cur = cur->next)
        printf("%d ", cur->val); 
    return 0;
}

void MoveToHead() {
    struct node *tem = head ;
    struct node *min = head ;
    while(tem !=tail){
        if(min->val > tem->next->val){
            min = tem->next;
        }
        tem = tem->next;
    }
    tem = head;
    while(tem->next != min){
        tem = tem->next;
    }
    tem->next = min->next;
    head->next = min;
    min->next = NULL;
    head = min ;
}