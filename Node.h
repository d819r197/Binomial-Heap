#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
  public:
    //Constructor
    Node(int value);

    //Helper Functions
    void setOrder(int ord) { order = ord; }
    int getOrder() { return order; }

    void setKey(int value) { key = value; }
    int getKey() { return key; }

    Node* getLeftSibling() { return leftSibling; }
    void setLeftSibling(Node* node) { leftSibling = node; }

    Node* getFirstChild() { return firstChild; }
    void setFirstChild(Node* node) { firstChild = node; }

    Node* getRightSibling() { return rightSibling; }
    void setRightSibling(Node* node) { rightSibling = node; }

  private:
    int order;
    int key;
    Node* rightSibling;
    Node* firstChild;
    Node* leftSibling;
};

#endif
