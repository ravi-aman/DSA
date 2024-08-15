#include <iostream>
#include <vector> // Correct header file for vector

using namespace std;

class Node {
public:
    int data;
    Node *next;

    // Default constructor
    Node() {
        data = 0;
        next = nullptr;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to construct a linked list from a vector
Node* constructLL(std::vector<int> &arr) {
    // Check for an empty array
    if (arr.empty()) {
        return nullptr;
    }

    // Create the head node
    Node *head = new Node(arr[0]);
    Node *current = head;

    // Iterate through the array and create nodes
    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head; // Return the address of the head node
}

int main() {
    // Example usage of constructLL
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = constructLL(arr);

    // Printing the linked list
    Node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    
    return 0;
}
