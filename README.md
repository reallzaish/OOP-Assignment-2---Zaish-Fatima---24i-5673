# OOP-Assignment-2---Zaish-Fatima---24i-5673
Q1: 
Part a:
This program reverses the characters between two given positions in a character array using recursion. The ChangetheLocation function swaps the elements at the start and end indices, then calls itself with updated indices moving toward the center. The recursion stops when both indices meet or cross. In main, the array COMPUTER is used, and the function is called to reverse the section between positions 2 and 6, producing the updated sequence COEPUTMR.
Part b:
This program prints a number pattern using recursion. The function works by printing a specific sequence of numbers for each level of recursion, starting from the given number and decreasing by one each time. Each recursive call prints a new line according to the pattern until it reaches the base case, where the recursion stops. When the input number is 4, the output pattern is printed line by line as the function calls itself repeatedly.

Q2:
his program implements a polymorphic system for storing geospatial features in a singly linked list.
A base class Feature holds a name and declares a pure virtual analyze() method; two concrete subclasses (LandFeature and WaterFeature) override analyze() to print feature-specific messages. Each list node stores a unique integer FeatureID, a pointer to a Feature object (so different feature types can coexist), and a pointer to the next node.
The SinglyLinkedList class maintains a head pointer and provides:
insertAtEnd : creates a new node and appends it to the list tail.
deleteByID : searches for a node by ID, removes it from the chain, and deletes the node.
displayAll : traverses the list and calls each feature’s analyze() (polymorphism used to get type-specific output).
reverseList : reverses the list iteratively by re-linking nodes.
In main, the program demonstrates the system by adding a mix of land and water features, displaying all features, deleting a feature by ID, and then reversing and displaying the list again.


Q3 :
This program implements a doubly linked list to manage a simple library of books.
Each node stores a book’s ID, title, author, and two pointers (next and prev) to link forward and backward.
The DoublyLinkedList class keeps head and tail pointers and provides methods to modify and view the list:
AddAtBeginning: creates a new node and inserts it at the front; updates head (and tail if list was empty).
AddAtEnd: creates a new node and appends it at the tail; updates tail (and head if list was empty).
addAtPosition: traverses to the requested position and inserts a new node there; if position ≤ 1 it inserts at the beginning, and if it runs past the end it appends.
deleteByID: searches for the node with the given BookID and removes it safely by relinking neighbors; updates head/tail when removing first or last nodes.
displayForward / displayBackward: traverse from head to tail and from tail to head respectively, printing each book’s ID, title, and author.
In main, the program demonstrates the list by adding books at different positions, printing the list forward and backward, deleting a book by ID, and printing the results again.
Notes: dynamic memory is used for nodes, so a destructor should be added to free remaining nodes to avoid memory leaks. The iterator bonus (STL-compatible iterator and ranged-for traversal) is not implQemented here but could be added to enable idiomatic forward/backward iteration without changing the list internals.

Q4:
This program implements a simple FIFO queue to simulate a movie ticket booking line.
Each node stores a customer’s ID, name, number of tickets requested, and a pointer to the next node. The Queue class maintains front and rear pointers and provides three main operations: enqueue adds a new customer to the back, dequeue removes and serves the customer at the front (printing their name), and display traverses the queue from front to rear to show all waiting customers. A destructor frees all remaining nodes to prevent memory leaks. The main function demonstrates the queue by enqueuing three customers, displaying the queue, serving the first customer, and then displaying the updated queue.
Bonus note: a priority-queue variant would change the insertion logic so that customers with higher ticket

Q5:
This program shows how stacks can replace recursion using iterative methods. It includes two stack types: a linked list–based stack (dynamic size) and an array–based stack (fixed size). The ChangeLocation_Iterative function uses the linked list stack to reverse part of a character array, while PrintPattern_Iterative uses the array stack to print a numeric pattern. The program highlights how both stack implementations manage data efficiently while simulating recursive behavior without actual recursion.
The linked list–based stack is dynamic and allows unlimited growth, with O(1) push and pop operations, but it uses extra memory for pointers and is slightly slower due to dynamic allocation.
The array-based stack also provides O(1) operations and is faster because it uses contiguous memory, improving cache performance.
However, it has a fixed size, which can cause overflow if more elements are added than its capacity.
In summary, the linked list stack offers flexibility and scalability, while the array stack provides speed and efficiency when the size is known.
Both implementations performed effectively and highlighted the trade-off between memory flexibility and execution speed.

