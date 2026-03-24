def SumDigits(No):
    
    Digit = 0
    iSum = 0

    while(No != 0):
        Digit = No % 10
        
        iSum = Digit + iSum

        No = No // 10 
    
    return iSum


def main():
    Value = 0
    
    print("Enter Nmber")
    Value = int(input())

    Ret = SumDigits(Value)

    print("Sum of Digits : ",Ret)

main()