// Linked List 3 Part 1
// Pace Group 1
// Some function prototypes have be used from Linked List 2
// Some function prototypes have been modified from Sean's Program 4

struct NodeType
{
    string lastName;
    string firstName;
    string phoneNumber;
    NodeType *next;
};



// Prompt the user for the file and open it
// Pre: inData is initialized
// Post: The file is opened and ready to be used
void GetTheFile(/* in & out */ ifstream &inData, /* in & out*/ string &fileName);

// Prints out all elements in the list
// Pre: currPtr must point to a valid list, or nullptr
// Post: Print all elements in list, if any
void PrintList(/* in */ NodeType *currPtr);

// Read in the card information from the user
// Pre: The struct NodeType and data type has been declared
// Post: newNodePtr contains the next course in the file
//       newNodePtr is passed by reference back
void GetCardData (/* in & out */ NodeType *&newNodePtr);

// Creates a node
// Pre: None
// Post: Returns a pointer to NodeType with component set to -1 and next set to nullptr
NodeType *CreateNode();

// Adds a node
// Pre: listPtr set to head of a list or to nullptr
//      newNodePtr has been assigned to a valid node and contains a valid component
// Post: listPtr is updated so a node is added to the linked list in the correct position
void AddNode(/* in & out */ NodeType *&listPtr, NodeType *newNodePtr);

// Deletes a node
// Pre: NodeType is declared
//      listPtr holds the first location of the list
// Post: the node that the user wanted has been deleted
void DeleteNode(/* in & out */ NodeType *&listPtr, /* in */ int delValue);

// Return the modified file holding the updated business card information
// Pre: Head is the location of the first element in a linked list that holds the data found in the file plus any data added by the user
//      The fileName is correct and valid
//      The file has been closed
// Post: The file has been changed to reflect new linked list / info
//       The file has been closed again
void ReprintTheFile(/* in */ const NodeType *head, /* in */ string fileName);

// Prints the contents of the linked list to console
// Pre: head is the first node in the list and has content
// Post: None
void PrintList(/* in */ const NodeType *head);


int main()
{
    // Declare input and output streams

    // Declare NodeType pointers head and lastPtr and assign to nullptr
    // Declare NodeType pointer currPtr

    // Call GetTheFile function
    // Call PrintList function displaying contents to user

    // Loop forever
    {
        // Declare char answer
        // Prompt user whether they want to add, remove, save, display or quit and and assign first character to char answer

        // If answer is A (add)
            // call CreateNode allocating space for a new node and assign to currPtr
            // Add the node to the list by calling AddNode passing head and currPtr
            // Tell user they added the contact
            // call PrintList function displaying the contacts to user

        // If answer is R (remove)
            // Prompt user for the first name of the contact they want to remove
            // Call DeleteNode passing the head and the first name
            // Tell user the contact was removed
            // call PrintList

        // If answer is S (save)
            // Call ReprintTheFile rewriting the contents of the list to the file
            // Tell user file saved

        // If answer is D (display)
            // Call PrintList function displaying contacts to user

        // If answer is Q (quit)
            // Prompt user if they want to save
                // if yes
                        // Call ReprintTheFile rewriting the contents of the list to the file
                // else
                    // quit the program
    }
}
