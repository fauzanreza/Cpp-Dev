#ifndef HEADER-LIST_H_INCLUDED
#define HEADER-LIST_H_INCLUDED

#include <iostream>
#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define first(L) L.first

using namespace std;

typedef string infotype;

typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct list {
    address first;
};

void createlist(list &L);

address allocate(infotype x);

void insertFirst(list &L, address P);

void insertAfter(list &L, address prec, address P);

void insertLast(list &L, address P);

void delFirst(list &L, address P);

void delAfter(list &L, address prec, address P);

void delLast(list &L, address P);

address searchlist(list L, string x);

void print(list L);



#endif // HEADER-LIST_H_INCLUDED
