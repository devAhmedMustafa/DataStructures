class node:
    def __init__(self, val):
        self.data = val
        self.right = None
        self.left = None


class Tree:

    def __init__(self):
        
        self.root = None

    def move(self, val, node):

        if node.data == val:
            return "Found"
        
        elif node.data < val:
            return node.right
        
        elif node.data > val:
            return node.left


    def insert(self, val):

        newnode = node(val)
        newnode.right = None
        newnode.left = None   

        if self.root == None:
            self.root = newnode

        else:
            current = self.root

            while current != None:

                current = self.move(val, current)
                
            current = newnode
                

    def search(self, val):

        current = self.root

        while current != None:
                
            current = self.move(val, current)
            if current == "Found":
                return "Found"
                
        return "Not Found"



                


tree = Tree()
tree.insert(1)
tree.insert(3)
tree.insert(10)
print(tree.search(10))