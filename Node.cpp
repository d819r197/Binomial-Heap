#include <iostream>

#include "Node.h"

//Constructor
Node::Node(int value) {
  key = value;
  order = 0;
  rightSibling = nullptr;
  firstChild = nullptr;
  leftSibling = nullptr;
}
