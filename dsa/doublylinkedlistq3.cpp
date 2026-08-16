#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    
};

int main() {
    Node* head = new Node{10, NULL, NULL};
    head->next = new Node{20, NULL, NULL};
    head->next->next = new Node{30, NULL};

    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;

    temp = head;

    while (temp!= NULL) {
        cout << temp->data << " ";
        temp = temp->next;

    }
    return 0;

}