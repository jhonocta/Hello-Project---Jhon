#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define nil NULL
using namespace std;
/*
Jhon Andrew Goodman
1301204424
*/
struct mata_kuliah{
    string kodeMK;
    string namaDosen;
};

typedef mata_kuliah infotypeQ;
typedef struct elmQ *adr;

struct elmQ{
    infotypeQ info;
    adr next;
};

struct Queue{
    adr head;
    adr tail;
};

void add(Queue &Q, adr P);
void showDaftarMK(Queue Q);
adr createElm(infotypeQ new_matkul);
void createQ(Queue &Q);
infotypeQ new_mata_kuliah(string kodeMK, string namaDosen);
#endif // QUEUE_H_INCLUDED

