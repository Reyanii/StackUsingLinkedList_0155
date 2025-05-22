#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
int data;
Node* next;

Node() {
    next = NULL;
}
};

//Stuck class
class Stuck {
private:
 Node* top; //Pointer to the top node of the stuck

public:
 Stuck() {
    top = NULL; //Initalize the stuck with a null top pointer
 }

 //Push opration
}