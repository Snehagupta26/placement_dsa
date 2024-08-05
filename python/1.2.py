class Stack:
    def __init__(self):
        self.items = []
    
    def is_empty(self):
        return len(self.items) == 0
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        raise IndexError("Pop from an empty stack")
    
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        raise IndexError("Peek from an empty stack")
    
    def size(self):
        return len(self.items)
    
    def __str__(self):
        return str(self.items)

stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
print("Stack")
print(stack.pop())  
print(stack.peek()) 
print(stack.size()) 
