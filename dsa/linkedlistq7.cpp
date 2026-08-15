#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node*head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next  = new Node{400, NULL};
    head->next->next->next  = new Node{600, NULL};

    int value = 20;
    Node* temp = head;
    bool found = false;

    while (temp != NULL) {
        if (temp->data == value) {
            found = true;
            break;

        }
        temp = temp->next;

    }
    if (found)
    cout << "Element found";
    else
    cout << "Element not found";

    return 0;
}
