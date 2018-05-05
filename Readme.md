# StackAndQueueClass
The following class helps in implementing Stack/Queue ADT.

## How to implement the Class ->
1) Add StacksAndQueues.hpp StacksAndQueues.cpp and StacksQueues.hpp into your project and keep them in the same directory.
2) use include "StacksQueues.hpp" in your C++ file to use the StackAndQueueClass.

## How to make objects of Class ->
#### 1) Queue Object can be made as ->
        Queue<dataType> newQueue;
        dataType = {int, float, long, string, char};
#### 2) Stack Object can be made as ->
        Stack<dataType> newStack;
        dataType = {int, float, long, string, char};
        
## Functions of StackAndQueueClass ->
#### #QUEUE CLASS
        > newQueue.enqueue(dataType data);
        //Adds a data to Queue object newQueue.
          
        > newQueue.dequeque();
        //Removes an element from Queue object newQueue;
          
        > dataType var = newQueue.enquequeAndReturnData(dataType data);
        //Adds to data to Queue object newQueue and returns the data added.
          
        > dataType var = newQueue.dequeueAndReturnData(dataType data);
        //Removes data from Queue object newQueue and returns the data deleted.
        
        > dataType var = newQueue.returnFirst();
        //Returns the data of first element of Queue object newQueue.
        
        > dataType var = newQueue.returnLast();
        //Returns the data of last element of Queue object newQueue.

        > bool checkUnderFlow = newQueue.isUnderFlow();
        //Returns true if size of Queue object newQueue is 0.
        
        > long long size = newQueue.returnSize();
        //Returns the size of Queue object newQueue.
        
        > newQueue.print();
        //Prints the Queue object newQueue.
        
        > newQueue.printReverse();
        //Prints the Queue object newQueue in reverse direction.

#### #STACK CLASS
        > newStack.push(dataType data);
        //Adds a data to Stack object newStack.

        > newStack.pop();
        //Removes an element from Stack object newStack;

        > dataType var = newStack.pushAndReturnData(dataType data);
        //Adds to data to Stack object newStack and returns the data added.

        > dataType var = newStack.popAndReturnData(dataType data);
        //Removes data from Stack object newStack and returns the data deleted.

        > dataType var = newStack.returnTop();
        //Returns the data of top-most element of Stack object newStack.

        > bool checkUnderFlow = newStack.isUnderFlow();
        //Returns true if size of Stack object newStack is 0.

        > long long size = newStack.returnSize();
        //Returns the size of Stack object newStack.

        > newStack.print();
        //Prints the Stack object newStacke.


<h4><strong> NOTE :- None of these classes support traversing options other than Print functions because traversing through a linked list implemented Stack And Queue class is highly inefficient and an array should be considered instead.</strong></h4><br>

#### ~Neverwannafly
