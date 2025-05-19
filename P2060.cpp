#include<bits/stdc++.h>

typedef struct DuLNode{
    int data;
    struct DuLNode *prev,*next;
}node;

void insert_prev(node* L,int b,int c){
    node *p = L;
    node *q = (node*)malloc(sizeof(node));
    q->data = c;
    for(int i = 0;i < b;i ++) p = p->next;
    q->next = p->next;
    q->prev = p;
    p->next = q;
    q->next->prev = q;
}

void insert_last(node* L,int b,int c){
    node *p = L;
    node *q = (node*)malloc(sizeof(node));
    q->data = c;
    for(int i = 0;i < b;i ++) p = p->prev;
    q->prev = p->prev;
    q->next = p;
    q->prev->next = q;
    p->prev = q;
}

void print_f(node* L){
    node *p = L->next;
    while(p->next!=NULL){
        printf("%d ",p->data);
        node *q = p;
        p=p->next;
        free(q);
    }
    printf("\n");
}

int n;

signed main(){
    while(scanf("%d",&n)!=EOF){
        node *head = (node*)malloc(sizeof(node));
        node *last = (node*)malloc(sizeof(node));
        head->next = last,head->prev = NULL;
        last->prev = head,last->next=NULL;
        while(n--){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(a==1){
                insert_prev(head,b,c);
            }else if(a==2){
                insert_last(last,b,c);
            }
        }
        print_f(head);
    }
    return 0;
}