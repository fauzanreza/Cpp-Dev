#include "header-list.h"

void createlist(list &L){
    first(L) = Nil;
}

address allocate(infotype x){
    address P = new elmlist;
    info(P) = x;
    next(P) = Nil;
}

void insertFirst(list &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void insertAfter(list &L, address prec, address P){
    if(prec != Nil){
        if(next(prec) == Nil){
            next(prec) = P;
        } else {
            next(P) = next(prec);
            next(prec) = P;
        }
    }
}

void insertLast(list &L, address P){
    address Q = first(L);
    while(next(Q) != Nil){
        Q = next(Q);
    }
    next(P) = next(Q);
    next(Q) = P;
}

void delFirst(list &L, address P){
    P = first(L);
    first(L) = next(P);
    next(P) = Nil;
}

void delAfter(list &L, address prec, address P){
    P = next(prec);
    next(prec) = next(P);
    next(P) = Nil;
}

void delLast(list &L, address P){
    if(first(L)!= Nil){
        P = first(L);
        if(next(P) == Nil){
            if(first(L)!= Nil){
            P = first(L);
            first(L) = next(P);
            next(P) = Nil;
            }
        } else {
            address Q = P;
            P = next(Q);
            while(next(P) != Nil){
                Q = P;
                P = next(Q);
            }
            next(Q) = Nil;
        }
    } else {
        cout <<"list kosong"<<endl;
    }
}

address searchlist(list L, string x){
    if(first(L) != Nil){
        address Q = first(L);
        while(next(Q) != Nil && info(Q) != x){
            Q = next(Q);
        }
        if(Q!=Nil){
            return Q;
        } else {
            return Nil;
        }
    } else {
        return Nil;
    }
}

void print(list L){
    address Q = first(L);
    while(Q != Nil){
        cout << info(Q) << ", ";
        Q = next(Q);
    }
    cout <<endl;
}
