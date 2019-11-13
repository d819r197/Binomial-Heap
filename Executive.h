#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include <string>

#include "BinomialHeap.h"

class Executive {
  public:
    //Constructor
    Executive(std::string path);

    //Class Methods
    int menuInput();
    void run();
    bool parseInputFile();

  private:
    std::string filePath;
    BinomialHeap * binomialHeap;

};

#endif
