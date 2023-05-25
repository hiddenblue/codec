#ifndef INVENTORY_H
#define INVENTORY_H

#define NAME_LEN 25
#define MAX_PARTS 100

typedef struct {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} Part;

extern Part inventory[];

extern int num_parts; /* number of parts currently stored */

int find_part(int number);
int insert(void);
int search(void);
int update(void);
int delete(void);
void print(void);

#endif