class stack :
    
    def __init__(self):
        self.stack_list = []

    def push(self, X):
        self.stack_list.append(X)

    def pop(self):
        length = len(self.stack_list)
        if length > 0:
            stack_list_last = self.stack_list[-1]
            del self.stack_list[-1]
            return stack_list_last
        else:
            return False

    def size(self):
        return len(self.stack_list)

    def empty(self):
        return True if not self.stack_list else False

stack_test = stack()
stack_test.push(3)
print(stack_test.empty())
stack_test.push(5)
stack_test.push(8)
print(stack_test.stack_list)
print(stack_test.size())
stack_test.pop()
print(stack_test.stack_list)
stack_test.pop()
print(stack_test.stack_list)
stack_test.pop()
print(stack_test.stack_list)
print(stack_test.empty())
