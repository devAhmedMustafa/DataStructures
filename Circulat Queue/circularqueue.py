class Queue:

    def __init(self, queue, size:int = 0):

        self.queue = queue
        self.front = -1
        self.rear = -1
        if size == 0:
            self.size = len(queue)
        elif size < 0:
            print("------------Size must be positive------------\n")
        else:
            self.size = size

    def is_empty(self):

        if self.front == -1 and self.rear == -1 :
            return True
        
        return False
    
    def is_full(self):

        if self.front == 0 and self.rear == self.size-1 :
            return True
        
        if self.front == self.rear+1 and self.rear != -1:
            return True
        
        return False
    
    def enqueue(self, val):

        if self.is_empty() :
            front = rear = -1
            front+=1
        
        if self.is_full():
            print("Queue is full")

        else:

            if self.rear == self.size -1:
                self.rear = -1

            self.rear += 1
            self.queue[self.rear] = val

    def dequeue(self):

        if self.is_empty():
            print("Queue is empty")

        else:
            if ( self.front == self.rear ):
                self.front = -1
                self.rear = -1
            else:
                self.front += 1
        


        
