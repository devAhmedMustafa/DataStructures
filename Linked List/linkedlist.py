class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self, head=None, tail=None):
        self.head = head
        self.tail = tail

    def push(self, data):

        if self.head == None:
            self.head = Node(data)
            self.tail = self.head

        else:
            
            new_node = Node(data)
            new_node.next = None
            self.tail.next = new_node #type: ignore
            self.tail = new_node

    def display(self):
            
        temp = self.head

        while temp != None:
            print(temp.data)
            temp = temp.next

    def pop(self):

        temp = self.head

        while temp.next != self.tail:
            temp = temp.next

        temp.next = None
        self.tail = temp


if __name__ == "__main__":
        
        llist = LinkedList()
        llist.push(1)
        llist.push(2)
        llist.push(3)
        llist.push(4)
        llist.pop()
        llist.push(5)
    
        llist.display()