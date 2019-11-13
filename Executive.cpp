#include <iostream>
#include <string>
#include <fstream>

#include "Executive.h"

#define MAXINPUT 4

Executive::Executive(std::string path) {
  binomialHeap = new BinomialHeap();
  filePath = path;
}

int Executive::menuInput() {
  int choice;

  std::cout << "Please choose one of the following commands: \n";
  std::cout << "1. Insert \n";
  std::cout << "2. DeleteMin \n";
  std::cout << "3. Levelorder \n";
  std::cout << "4. Exit \n";

  std::cout << ">> ";
  std::cin >> choice;
  std::cout << std::endl;

  return(choice);
}

void Executive::run() {
  bool quit = false;
  while(!quit) {
    switch (menuInput()) {
      //Insert - TODO
      case 1: {
        int input;
        std::cout << "Please enter the value which you want to enter into the BinomialHeap Heap: ";
        std::cin >> input;
        binomialHeap->Insert(input);
        std::cout << "Output: ";

        break;
      }
      //DeleteMin - TODO
      case 2: {
        std::cout << "Output: ";

        break;
      }
      //Levelorder - TODO
      case 3: {
        std::cout << "Output: ";

        break;
      }
      //Exit
      case 4: {
        std::cout <<"Output: Bye!!!\n";
        quit = true;
        break;
      }
      //Invalid Input
      default: {
          std::cout << "Please input a number between 1 and " <<MAXINPUT <<".\n\n";
          break;
      }
    }
  }
}

bool Executive::parseInputFile() {
  // pq = *binomialHeap;
  std::ifstream inputFile(filePath);
  std::string input;
  char c;
  if (inputFile.is_open()) {
    while(inputFile.get(c)) {
      if (c != ' ' && c != '\n') {
        input += c;
        // std::cout <<"current input: " <<input <<std::endl;
      }
      else {
        // std::cout << "In loop, inserting: " <<input <<" into pq of size: " <<binomialHeap->GetHeap_Size() <<std::endl;
        int strInt = std::stoi(input);
        binomialHeap->Insert(strInt);
        // binomialHeap->PrintHeap();
        input = "";
      }
    }
    inputFile.close();
    return(true);
  }
  else {
    std::cout << "File Path: " <<filePath <<" is an invalid path.\n";
    return(false);
  }
}
