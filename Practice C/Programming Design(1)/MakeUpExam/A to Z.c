#include <stdio.h>
#include <stdlib.h>
#define TITLE_LENGTH 256

struct info {
    int length;
    int difficulty;
};

struct song_info {
    struct info t_d;
    char title[TITLE_LENGTH];
};

int cmp(const void *a, const void *b);
void sort_songs(struct song_info *m, int *total);

int main(void) {
    struct song_info m[100];
    int total;
    scanf("%d", &total);
    for(int i = 0; i < total; i++)
        scanf("%d %d %[^\n]", &m[i].t_d.length, &m[i].t_d.difficulty, m[i].title);
    sort_songs(m, &total);
    for(int i = 0; i < total; i++)
        printf("%d %d %s\n", m[i].t_d.length, m[i].t_d.difficulty, m[i].title);
    return 0;
}

int cmp(const void* a, const void* b) {
    struct song_info *aptr=(struct song_info *)a;
    struct song_info *bptr=(struct song_info *)b;

    if((aptr->t_d.length > bptr->t_d.length)||((aptr->t_d.length == bptr->t_d.length)&&(aptr->t_d.difficulty > bptr->t_d.difficulty))){
        return 1;
    }
    if((aptr->t_d.length < bptr->t_d.length)||((aptr->t_d.length == bptr->t_d.length)&&(aptr->t_d.difficulty < bptr->t_d.difficulty))){
        return -1;
    }
    return 0;
}

void sort_songs(struct song_info *m, int *total) {
    qsort(m,*total,sizeof(struct song_info),cmp);
}