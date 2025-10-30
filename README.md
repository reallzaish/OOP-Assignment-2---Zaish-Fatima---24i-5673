Q1:
Part a:
This program uses recursion to reverse the characters between two given positions in a character array. The function ChangetheLocation will change the positions of the elements at the start and end indices and then call itself, each time with the indices updated to move toward the middle. The recursion stops when one index meets or crosses the other. Here, in main, the array COMPUTER is used, and the function is called on the section between positions 2 and 6, which results in COEPUTMR.
Part b:
This program implements a polymorphic system for storing geospatial features in a singly linked list.
A base class Feature has a name and declares a purely virtual method analyze(); two concrete subclasses LandFeature and WaterFeature override analyze() to print feature-specific messages. Each list node contains a unique integer FeatureID, a pointer to an object Feature (so that both feature types can coexist), and a pointer to the next node.
The SinglyLinkedList class keeps track of a head pointer and provides:
deleteByID: It searches for a node by ID, removes it from the chain, and deletes the node.

Q3 :
This program implements a doubly linked list to manage a simple library of books.
The DoublyLinkedList class maintains head and tail pointers and provides methods to modify and view the list:
addAtPosition: traverses to the requested position and inserts a new node there; if position ≤ 1 it inserts at the beginning, and if it runs past the end it appends.
displayForward / displayBackward: traverse from head to tail and from tail to head respectively, printing each book’s ID, title, and author.
The program demonstrates the list in main by adding books at various positions, printing the list forward and backward, deleting a book by ID, and printing the results again.
Note that the nodes use dynamic memory; a destructor is indicated that needs to be implemented to free the remaining nodes in order to prevent memory leaks. The iterator bonus: STL-compatible iterator and ranged-for traversal is not implemented here, but could be added to provide idiomatic forward/backward iteration without any modification of the list internals.

Q4:
The following program illustrates a simple FIFO queue implementation to model a movie ticket booking line.
Each node stores a customer’s ID, name, number of tickets requested, and a pointer to the next node. The Queue class maintains front and rear pointers and provides three main operations: enqueue adds a new customer to the back, dequeue removes and serves the customer at the front (printing their name), and display traverses the queue from front to rear to show all waiting customers. A destructor frees all remaining nodes to prevent memory leaks. The main function demonstrates the queue by enqueuing three customers, displaying the queue, serving the first customer, and then displaying the updated queue.

Q5:
This program shows how stacks can replace recursion using iterative methods. It includes two stack types: a linked list–based stack (dynamic size) and an array–based stack (fixed size). The ChangeLocation_Iterative function uses the linked list stack to reverse part of a character array, while PrintPattern_Iterative uses the array stack to print a numeric pattern. The program highlights how both stack implementations manage data efficiently while simulating recursive behavior without actual recursion.
The linked list–based stack is dynamic and can grow arbitrarily, with constant-time, O(1) push and pop operations, but using extra memory for pointers and slightly slower because of dynamic allocation.
The array-based stack also provides O(1) operations and is faster because it uses contiguous memory, improving cache performance.  While the linked list stack is flexible and able to grow and shrink, the array stack offers speed and efficiency if the size is known beforehand. 
