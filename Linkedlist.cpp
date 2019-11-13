#include <iostream>

#include "Linkedlist.h"
#include "Node.h"

Linkedlist::Linkedlist() {
  head = nullptr;
  listSize = 0;
}

Linkedlist::~Linkedlist() {
  while(!isEmpty()) {
    deleteNode(head->getKey());
  }
}

bool Linkedlist::isEmpty() {
  if(listSize == 0 || head == nullptr) {
    return(true);
  }
  else {
    return(false);
  }
}

void Linkedlist::insertNode(int value) {
  if(isEmpty()) {
    std::cout << "im empty\n";
    Node* tempNode = new Node(value);
    tempNode->setRightSibling(nullptr);
    head = tempNode;
  }
  else {
    Node* tempNode = head;
    Node* tempNode2 = new Node(value);
    while(tempNode->getRightSibling() != nullptr)
    {
      tempNode = tempNode->getRightSibling();
    }
    tempNode->setRightSibling(tempNode2);
    tempNode2->setRightSibling(nullptr);
    tempNode2->setLeftSibling(tempNode);
  }
  listSize++;
}

bool Linkedlist::deleteNode(int value) {
  Node* tempNode = head;
  while(tempNode->getRightSibling() != nullptr)
  {
    if(value == tempNode->getKey()) {
      Node* prev = tempNode->getLeftSibling();
      Node* next = tempNode->getRightSibling();
      if(tempNode == head) {
        head=next;
        delete tempNode;
        listSize--;
        return (true);
      }
      else {
        prev->setRightSibling(next);
        delete tempNode;
        listSize--;
        return (true);
      }
    }
    tempNode = tempNode->getRightSibling();
  }
  if(value == tempNode->getKey()) {
    Node* prev = tempNode->getLeftSibling();
    Node* next = tempNode->getRightSibling();
    if(tempNode->getKey() == head->getKey()) {
      head=next;
      delete tempNode;
      listSize--;
      return (true);
    }
    else {
      prev->setRightSibling(next);
      delete tempNode;
      listSize--;
      return (true);
    }
  }
  return (false);
}

int Linkedlist::smallest() {
  Node* tempNode = head;
  int smallest = tempNode->getKey();
  while(tempNode->getRightSibling() != nullptr) {
    if(tempNode->getKey() < smallest) {
      smallest = tempNode->getKey();
    }
    tempNode = tempNode->getRightSibling();
  }
  if(tempNode->getKey() < smallest) {
    smallest = tempNode->getKey();
  }
  return(smallest);
}

int Linkedlist::largest() {
  Node* tempNode = head;
  int largest = tempNode->getKey();
  while(tempNode->getRightSibling() != nullptr) {
    if(tempNode->getKey() > largest) {
      largest = tempNode->getKey();
    }
    tempNode = tempNode->getRightSibling();
  }
  if(tempNode->getKey() > largest) {
    largest = tempNode->getKey();
  }
  return(largest);
}

int Linkedlist::average() {
  Node* tempNode = head;
  int sum = 0;
  while(tempNode->getRightSibling() != nullptr) {
    sum += tempNode->getKey();
    tempNode = tempNode->getRightSibling();
  }
  sum += tempNode->getKey();
  return(sum/listSize);
}

void Linkedlist::parseNewString(std::string input) {
  std::string strInt = "";
  for(int lcv = 0; lcv < input.size(); lcv++) {
    if(input[lcv] != ' ' && input[lcv] != '\n') {
      strInt += input[lcv];
    }
    else {
      insertNode(std::stoi(strInt));
      strInt = "";
    }
  }
  insertNode(std::stoi(strInt));
}

bool Linkedlist::sortList() {
  bool isSorted = false;
  while(!isSorted) {
    if(!isEmpty()) {
        isSorted = true;
        Node* node = head;
        Node* nextNode = head->getRightSibling();
        int tempValue = node->getKey();
        for(int n = 0; n < listSize; n++) {
          if(node->getRightSibling() != nullptr) {
            if(tempValue > nextNode->getKey()) {
              node->setKey(nextNode->getKey());
              if(nextNode != nullptr) {
                nextNode->setKey(tempValue);
              }
              isSorted = false;
            }
            tempValue = nextNode->getKey();
            node = node->getRightSibling();
            nextNode = nextNode->getRightSibling();
          }
        }
        if(isSorted) {
          return(true);
        }
    }
    else {
      return(false);
    }
  }
}

bool Linkedlist::merge2Lists(std::string listRaw) {
  parseNewString(listRaw);
  return(sortList());
}

void Linkedlist::printList() {
  if(isEmpty() == false) {
    std::cout << "List: ";
    Node* node = head;
    while(node->getRightSibling() != nullptr) {
      std::cout << node->getKey() <<", ";
      node = node->getRightSibling();
    }
    std::cout <<node->getKey() <<".\n";
  }
  else {
    std::cout << "Nothing to print. Empty List.\n";
  }
}

Linkedlist* Linkedlist::reverseList() {
  Node* node = head;
  Linkedlist* reverse = new Linkedlist;
  while(node->getRightSibling() != nullptr) {
    node = node->getRightSibling();
  }
  for(int lcv = 0; lcv < listSize; lcv++) {
    reverse->insertNode(node->getKey());
    node = node->getLeftSibling();
  }
  return (reverse);
}
