#include "BinomialHeap.h"

//Constructor
BinomialHeap::BinomialHeap() {
  rootLevel = nullptr;
  treeSize = 0;
}

void BinomialHeap::Insert(int key) {
  // int oldHeight = treeHeight;
  //
  // treeSize++;
  // treeRoot = Merge(new Linkedlist(key), treeRoot);
  // CalculateTree_Height();
  // if(!(oldHeight == treeHeight) && oldHeight < treeHeight) {
  //   std::cout <<"Tree height was incremented to: " <<treeHeight <<std::endl;
  // }
}

Linkedlist* BinomialHeap::RecMerge(Linkedlist* h1, Linkedlist* h2) {
  // if (h1->getLeftChild() == nullptr) {
  //   h1->setLeftChild(h2);
  // }
  // else {
  //   h1->setRightChild(Merge(h1->getRightChild(), h2));
  //   // if ((h1->getLeftChild())->getRank() < (h1->getRightChild())->getRank()) {
  //     Linkedlist * temp = h1->getLeftChild();
  //     h1->setLeftChild(h1->getRightChild());
  //     h1->setRightChild(temp);
  //   // }
  //   // h1->ComputeRank();
  //   }
  // return(h1);
}

Linkedlist* BinomialHeap::Merge(Linkedlist* h1, Linkedlist* h2) {
  // if (h1 == nullptr) {
  //   return(h2);
  // }
  // if (h2 == nullptr) {
  //   return(h1);
  // }
  // // std::cout <<"H1 and H2 are not null\n";
  // if (h1->getKey() < h2->getKey())
  //   return(RecMerge(h1, h2));
  // else
  //   return(RecMerge(h2, h1));
}

bool BinomialHeap::DeleteMin() {

}

bool BinomialHeap::Find(int value, Linkedlist* root) {

}

void BinomialHeap::RecPrintLevelorder(Linkedlist* root, int level) {

}

void BinomialHeap::Levelorder() {

}
