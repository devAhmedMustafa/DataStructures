class Stack:

    def __init__(self, stack_ = []):
        self.stack_ = stack_
        self.top = len(stack_)-1

    def push(self, val):
        self.top += 1
        self.stack_.append(val)

    def display(self):

        for x in range(0 ,self.top):
            print(self.stack_[x - 0])

    def peek(self):

        return self.top


stack = Stack([2,4,5])
stack.push(2)
stack.display()

