#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

};

int main() {
    Node* head = new Node{10,NULL};
    head->next = new Node{20,NULL};
    head->next->next = new Node{40,NULL};

    Node* temp = head;
    head = head->next;
    delete temp;

    temp = head;

    while (temp !=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
     return 0;

}