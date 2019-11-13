# Binomial-Heap
Implementation of a Binomial Heap data structure for the University of Kansas

## Purpose:
The purpose of this lab is to implement a binomial queue in C++

## General Requirements:
In this assignment, you will work on designing a class for a binomial queue. You are to read in the
numbers from a data file of integers and insert each number in a binomial queue. The file of
numbers you read from will be named data.txt. First, build a binominal queue from the numbers
in the file, and then a user will insert and delete from the structure using the command line. You
may hard code the file name in your program if you wish.

After your data structure has been built, your program should have a simple menu like this:
```
Please choose one of the following commands:
1- Insert
2- DeleteMin
3- LevelOrder
4- Exit
```

## Implementation:
For implementing the binomial queue, you will use a circular doubly linked list. Each node will
contain five fields, which are as follows:
1. Order: stores the order of the binomial queue.
2. Key: stores the value read from the data.txt file.
3. Left sibling: stores the pointer to the left sibling.
4. First child: stores the pointer to the child with the lowest order.
5. Right sibling: stores the pointer to the right sibling.

## Operations:
Binomial queue methods should be implemented as follows:
- Insert(x): should insert x in the binomial queue.
- Deletemin(): should delete the smallest value from the binomial queue.
- Merge(): should merge binomial queues together (Insert and Deletemin will call merge).
EECS 560 Lab 10 – Implementation of Binomial Queue
Prof.: Dr.Shontz, GTAs: Chiranjeevi Pippalla, Anubhav Ghosh
- Levelorder(): should print out all the elements of the binomial queue using local level
order traversal (print the elements of B_0 first, followed by B_1, B_2, and so on). Also,
the elements of B_0, B_1 and B_2 should be separated by a line.

## Data file:
data.txt: 
```
4 9 7 5 3 8 10 17 2 6 11
```
