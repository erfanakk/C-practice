

a= '09876'



def validate_pin(pin):

        

    try:
        pin1 = int(pin)
    except ValueError:
        
        return False
    else:
        if "+" in pin or "-" in pin:
            return False
        
        if (len(pin) == 4 or len(pin) == 6): 
            
            print(pin)
            return True
        else:
            
            return False
        
b = validate_pin(a)
print(b)