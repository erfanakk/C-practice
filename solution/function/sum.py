


num = 7



def fac(num):
    return 1 if num <= 1 else num * fac(num-1)
    



answer = fac(num)

print(f'this is {answer}')