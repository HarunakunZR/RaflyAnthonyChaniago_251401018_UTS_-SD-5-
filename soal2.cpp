
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Menambahkan data (Enqueue)
void enqueue(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (front == NULL) {
        front = rear = baru;
    } else {
        rear->next = baru;
        rear = baru;
    }

    cout << "Data " << nilai << " berhasil ditambahkan!\n";
}

// Menghapus data (Dequeue)
void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong!\n";
        return;
    }

    Node* hapus = front;
    cout << "Data " << front->data << " berhasil dihapus!\n";

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete hapus;
}

// Melihat data paling depan
void peek() {
    if (front == NULL) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Data paling depan: " << front->data << endl;
    }
}

// Menampilkan seluruh data
void display() {
    if (front == NULL) {
        cout << "Queue kosong!\n";
        return;
    }

    Node* bantu = front;

    cout << "Isi Queue: ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }

    cout << endl;
}

int main() {
    int pilihan, nilai;

    do {
        cout << "\n Pilih Menu (1-4) \n";
        cout << "   Insert tail\n";
        cout << "   Delete head\n";
        cout << "   Delete tail\n";
        cout << "   Tampilkan player emo\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> nilai;
                enqueue(nilai);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 5);

    return 0;
}
