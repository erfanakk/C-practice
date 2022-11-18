

class Node():
    def __init__(self, value):
        self.value = value
        self.next = None

class Linkedlist():
    def __init__(self, value):
        new_node = Node(value)
        self.tail = new_node
        self.head = new_node
        self.length = 1

    def print_list(self):
        temp = self.head
        while temp is not None:
            print(temp.value)
            temp = temp.next
    
    
    def append(self,value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        self.length += 1
        return True

    def pop(self):
        if self.length == 0:
            return None 
    
        temp = self.head
        pre = self.head
        while temp.next is not None:
            pre = temp
            temp = temp.next
        
        self.tail = pre
        self.tail.next = None
        self.length -= 1
        if self.length == 0:
            self.head = None
            self.tail = None
        return temp
    
    def prepend(self , value):
        new_node = Node(value)
        if self.head is None:
            
            self.head = new_node
            self.tail = new_node
        else:
            
            temp = self.head
            self.head = new_node
            self.head.next = temp
        self.length +=1  
        return True
    def pop_first(self):
        if self.head is None:
            return None
        temp = self.head
        self.head = self.head.next
        temp.next = None
        self.length -=1
        if self.length == 0:
            self.tail = None
        return temp
        
    def get(self,index):
        if (index < 0) or (index >= self.length) :
            return None
        temp = self.head
        for _ in range(index):
            temp = temp.next
        return temp
    
    def set_value(self, index, value):
        temp = self.get(index)
        if temp:
            temp.value = value
            return True
        return False

    def insert(self,index,value):
        if (index < 0) or (index > self.length) :
            return False
        if index == self.length:
            return self.append(value)
        if index == 0:
            return self.prepend(value)
        new_node = Node(value)
        temp = self.get(index-1)
        new_node.next = temp.next
        temp.next = new_node
        self.length +=1 

        return True 
    
    def remove(self,index):
        if (index < 0) or (index >= self.length) :
            return None
        if index == (self.length - 1):
            return self.pop()
        if index == 0:
            return self.pop_first()
        prev = self.get(index - 1)
        temp = prev.next
        prev.next = temp.next
        temp.next = None
        self.length -= 1
        return temp

    def revers(self):
        temp = self.head
        self.head , self.tail = self.tail , self.head
        after = temp.next
        before = None
        for _ in range(self.length):
            after = temp.next
            temp.next = before
            before = temp
            temp = after



        






mylist = Linkedlist(5)


mylist.append(23)
mylist.append(2)
mylist.append(10)
mylist.append(19)
print(mylist.get(3))

mylist.set_value(3, 4)
mylist.insert(1, 98)


mylist.remove(index=1)
mylist.print_list()
print("000000000000000000000000000000000")
mylist.revers()
mylist.print_list()

 