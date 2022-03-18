#include <iostream>
#include "stack.h"
#include "queue.h"
using namespace std;

int main(){
/*
Jhon Andrew Goodman
1301204424
*/
    cout << "========== STACK ==========" << endl;
    stack undoS, redoS;

    createS(undoS);
    createS(redoS);

    push(undoS, "UNDO1");
    push(undoS, "UNDO2");
    push(undoS, "UNDO3");
    push(undoS, "UNDO4");
    showStack(undoS);

    push(redoS, "REDO1");
    push(redoS, "REDO2");
    push(redoS, "REDO3");
    push(redoS, "REDO4");
    showStack(redoS);
    cout << endl;

    undo(undoS, redoS);
    undo(undoS, redoS);
    undo(undoS, redoS);
    cout << "===== STACK SETELAH PROSES UNDO =====" << endl;
    showStack(undoS);
    cout << endl;
    cout << "===== STACK SETELAH PROSES REDO =====" << endl;
    showStack(redoS);
    cout << endl;

/*
Jhon Andrew Goodman
1301204424
*/
    cout << "========== QUEUE ==========" << endl;
    cout << endl;
    Queue Q;
    createQ(Q);

    infotypeQ new_matkul;
    adr P;
    int i, N;
    string kodeMK, namaDosen;

    cout << "JUMLAH DATA: ";
    cin >> N;
    for (i = 1; i <= N; i++){
        cout << "DATA KE " << i << endl;
        cout << "Kode MK: ";
        cin >> kodeMK;
        cout << "Nama Dosen: ";
        cin >> namaDosen;
        cout << endl;

        new_matkul = new_mata_kuliah(kodeMK, namaDosen);
        P = createElm(new_matkul);
        add(Q, P);
    }
    cout << "=== QUEUE DAFTAR MATA KULIAH ===" << endl;
    showDaftarMK(Q);
    return 0;
}
