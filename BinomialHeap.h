#ifndef BINOMIALHEAP_H
#define BINOMIALHEAP_H

#include <iostream>

#include "Linkedlist.h"

class BinomialHeap {
  public:
    //Constructor
    BinomialHeap();

    //Class Methods
    void Insert(int key);

    bool DeleteMin();

    Linkedlist* RecMerge(Linkedlist* h1, Linkedlist* h2);
    Linkedlist* Merge(Linkedlist* h1, Linkedlist* h2);

    void RecPrintLevelorder(Linkedlist* root, int level);
    void Levelorder();

    //Helper Functions
    void IncTree_Size() { treeSize++; }
    void DecTree_Size() { treeSize--; }
    int GetTree_Size() { return treeSize; }

    Linkedlist* GetTree_Root() { return rootLevel; }

    bool isEmpty() { if(rootLevel->isEmpty()){ return(true); } return(false); }

    bool Find(int value, Linkedlist* root);

  private:
    Linkedlist * rootLevel;
    int treeSize;
};

#endif
