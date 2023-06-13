class Queue:

    def __init__(self,  size:int = 0, queue = []):
        self.queue = queue
        self.front = -1
        self.rear = len(queue)
        if ( size == 0 ):
            self.size = len(queue)
        elif size < 0 or size < len(queue): 
            print("size is invalid")
        else:
            self.size = size

    def is_empty(self):
        if (self.front == self.rear + 1) or (self.rear == -1):
            return True

        return False

    def is_full(self):
        if (self.rear == self.size-1):
            return True
        return False
    
    def enqueue(self, val):
        if (self.is_empty()):
            self.front+=1
            
        if (self.is_full()):
            print("Queue is full")
        else:
            self.rear+=1
            self.queue[self.rear] = val

    def dequeue(self):

        if (self.is_empty()):
            print("Queue is empty")
        else:
            self.front += 1
            print(self.queue[self.front])

    def dequeue_all(self):

        if (self.is_empty()):
            print("Queue is empty")
        else:
            while( not self.is_empty() ):
                print(self.queue[self.front])
                self.front+=1
        
