#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

};

int main() {

    Node* head = new Node{10, NULL, NULL};
    head->next = new Node{20, head, NULL};
    head->next->next = new Node{30, head->next, NULL};

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;

    }

    temp->prev->next = NULL;
    delete temp;

    temp = head;

    while (temp !=NULL) {
        cout << temp->data << " ";
        temp = temp->next;

    }

    return 0;

}