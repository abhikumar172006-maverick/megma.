#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;


};

int main() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};

    // insert 77 at the end

Node* newNode = new Node{30, NULL};

Node* temp = head;

while (temp->next != NULL) {
    temp = temp->next;


}

temp->next = newNode;

temp = head;
while (temp !=  NULL) {
    cout << temp->data << " ";
    temp = temp->next;

}

return 0;

}

