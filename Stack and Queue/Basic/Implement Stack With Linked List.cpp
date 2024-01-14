/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    Node* head;

public:
    Stack()
    {
        head = NULL;
    }

    int getSize()
    {
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    bool isEmpty()
    {
        if(head == NULL) return true;
        return false;
    }

    void push(int data)
    {
        Node* newnode = new Node(data);
        if(head == NULL){
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void pop()
    {
        if(isEmpty()) return;

        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    int getTop()
    {
        if(isEmpty()) return -1;

        return head->data;
    }
};