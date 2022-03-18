#include "queue.h"

void add(Queue &Q, adr P){
/*
Jhon Andrew Goodman
1301204424
*/
    if(head(Q) == nil){
        head(Q) = P;
        tail(Q) = P;
    }else{
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void showDaftarMK(Queue Q){
/*
Jhon Andrew Goodman
1301204424
*/
    adr P = head(Q);
    while (P != nil){
        cout << "Kode Mata Kuliah: " << info(P).kodeMK << endl;
        cout << "Nama Dosen: " << info(P).namaDosen<< endl;
        P = next(P);
        cout << endl;
    }
    cout << endl;
}

adr createElm(infotypeQ new_matkul){
/*
Jhon Andrew Goodman
1301204424
*/
    adr P = new elmQ;
    info(P) = new_matkul;
    next(P) = nil;
    return P;
}

void createQ(Queue &Q){
/*
Jhon Andrew Goodman
1301204424
*/
    head(Q) = nil;
    tail(Q) = nil;
}

infotypeQ new_mata_kuliah(string kodeMK, string namaDosen){
/*
Jhon Andrew Goodman
1301204424
*/
    infotypeQ MatKul;
    MatKul.kodeMK = kodeMK;
    MatKul.namaDosen = namaDosen;
    return MatKul;
}

