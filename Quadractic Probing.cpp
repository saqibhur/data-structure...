#include <iostream>
using namespace std;
class HashTable {
private:
    static const int tableSize = 10;  // Size of the hash table
    int table[tableSize];

public:
    HashTable() {
        // Initialize all elements to -1 (indicating empty slots)
        for (int i = 0; i < tableSize; ++i) {
            table[i] = -1;
        }
    }

    // Hash function to map a key to an index
    int hash(int key) {
        return key % tableSize;
    }

    // Insert a key into the hash table using linear probing
    void insert(int key) {
        int index = hash(key);
        int i=1;
        // Linear probing to find the next available slot
        while (table[index] != -1) {
            
            index = (index + i*i) % tableSize;
            i++;
            
        }

        // Insert the key into the found slot
        table[index] = key;
    }

    // Display the contents of the hash table
    void display() {
        cout << "Hash Table:\n";
        for (int i = 0; i < tableSize; ++i) {
            cout << "[" << i << "]:" ;
            if(table[i]!=-1)
            {
                cout<<table[i];
            }
            cout<< "\n";
        }
    }
};

int main() {
    HashTable Table;

    // Insert keys
    Table.insert(5);
    Table.insert(15);
    Table.insert(25);
    Table.insert(35);
    

    // Display hash table
    Table.display();

    return 0;
}

