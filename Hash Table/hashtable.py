class HashTable:
    
    def __init__(self, size):
        
        self.table = []
        for x in range (0, size):
            self.table.append([])

        if size < 0:
            print("Size cannot be negative")

        else:
            self.size = size

    def h(self, val):

        index = val % self.size
        return index
    
    def insertMany(self, arr):

        for x in arr:
            self.insert(x)

    def insert(self, val):

        i = self.h(val)
        self.table[i].append(val)

    def search(self, val):

        i = self.h(val)
        counter = 0

        for x in self.table[i]:
            if( x == val ):
                return f"Found in {i}x{counter}"
            
            counter+=1
        
        return "Not Found"
    

hash = HashTable(10)
hash.insertMany([1,3,4,1,5,7, 77, 6,43,12,6,85,12,5,62,2,10,0])
print(hash.table)
