def DisplayDigit(No):
    
    Digit = 0

    while(No != 0):
        Digit = No % 10
        
        print(Digit)

        No = No // 10   # Floar Division

def main():
    Value = 0
    
    print("Enter Nmber")
    Value = int(input())

    DisplayDigit(Value)

main()