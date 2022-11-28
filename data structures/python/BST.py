## bianary search tree 

"""

                        node 

                    /
                   /                 \\
                  /                   \\
                 /                      \\
        
        (smaller than node)               (bigger than node)



"""


class Node():
    def __init__(self, value):
        self.value = value
        self.right = None
        self.left = None


class Tree():
    def __init__(self):
        self.root = None
    
    def insert(self, value):
        new_node = Node(value)
        if self.root is None :
            self.root = new_node
            return True
        else:
            temp = self.root
            while True:
                
                if temp.value == new_node.value :
                    return None
                if new_node.value > temp.value:
                    if temp.right is None:
                        temp.right = new_node
                        return True
                    
                    temp = temp.right
                else:
                    if temp.left is None:
                        temp.left = new_node
                        return True
                    
                    temp = temp.left   
    
    def contain(self, value):
        if self.root == None:
            return False
        temp = self.root
        while temp is not None:
            if value > temp.value :
                temp = temp.right
            elif value < temp.value:
                temp = temp.left
            else:
                return True
        return False

mytree = Tree()
mytree.insert(2)
mytree.insert(1)
mytree.insert(3)

print(mytree.root.value)
print(mytree.root.right.value)
print(mytree.root.left.value)