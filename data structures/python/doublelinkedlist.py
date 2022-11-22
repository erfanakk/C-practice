


class Node():
    def __init__(self,value):
        self.value = value
        self.next = None
        self.prev = None

class DoubleList():
    def __init__(self,value):
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def print_list(self):
        temp = self.head
        while temp is not None:
            print(temp.value)
            temp = temp.next
    def pop(self):
        if self.length == 0:
            return None
        if self.length == 1:
            temp = self.head
            self.tail = None
            self.head = None
        else:
            temp = self.tail
            self.tail = temp.prev
            self.tail.next = None
        self.length -= 1
        
        return temp

    def append(self,value):
        new_node = Node(value)
        
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        
        else:    
            self.tail.next = new_node
            new_node.prev = self.tail
            self.tail = new_node

        self.length += 1
        return True        
    def prepend(self,value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.length +=1
        return True
    def pop_first(self):
        if self.length == 0:
            return None
        
        temp = self.head
        
        if self.length == 1:
            
            self.head = None
            self.tail = None
        else:
             
            self.head = self.head.next
            self.head.prev = None
            temp.next = None

        self.length -=1

        return temp
    
    def get(self,index):
        if index > self.length or index < 0:
            return None
        if index < (self.length /2):
            temp = self.head
            for _ in range(index):
                temp = temp.next
        else:
            temp = self.tail 
            for _ in range(self.length -1 , index , -1):
                temp = temp.prev
        return temp

    def set_value(self,index,value):
        temp = self.get(index)
        if temp :
            temp.value = value
            return True
        return False

    def insert(self,index,value):
        if index > self.length or index < 0:
            return None
        
        if index == 0:
            return self.prepend(value)
        if index == self.length:
            return self.append(value)
        
        new_node = Node(value)
        before = self.get(index-1)
        after = before.next
        new_node.next = after
        new_node.prev = before
        after.prev = new_node
        before.next = new_node
        self.length +=1
        return True
    
    def remove(self,index):
        if index > self.length or index < 0:
            return None
        
        if index == 0:
            return self.pop_first()
        if index == self.length:
            return self.pop()
        
        temp = self.get(index)
        temp.next.prev = temp.prev
        temp.prev.next = temp.next
        temp.next = None 
        temp.prev = None

        self.length -=1
        return True
        

mylist = DoubleList(55)
mylist.append(845)
mylist.append(64)
mylist.append(45)
mylist.insert(3,11111)
mylist.append(12)
mylist.remove(3)
  
mylist.print_list()