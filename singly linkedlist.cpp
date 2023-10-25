#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value){
    	
	data = value; 
	next = NULL; 
}

};

class LinkedList {
public:
    Node* head;

    LinkedList(){
	 head=NULL;
}

    void SSL(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    bool Palindrome() {
    vector<int> reversedData;
    Node* current = head;

    while (current) {
        reversedData.insert(reversedData.begin(), current->data);
        current = current->next;
    }

    current = head;
    for (int i = 0; i < reversedData.size(); ++i) {
        if (current->data != reversedData[i]) {
            return false;
        }
        current = current->next;
    }
    return true;
}

};

int main() {
    LinkedList myList;


    myList.SSL(1);
    myList.SSL(2);
    myList.SSL(3);
    myList.SSL(2);
    myList.SSL(1);

    if (myList.Palindrome()) {
        cout << "The linked list is a palindrome." << std::endl;
    } else {
        cout << "The linked list is not a palindrome." << std::endl;
    }

    return 0;
}

