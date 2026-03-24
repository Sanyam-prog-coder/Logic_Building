def Summation(Brr):
    iSum = 0

    for no in Brr:
        iSum = iSum + no

    return iSum

def main():
    Size = 0
    Arr = []        
    
    print("Enter Number of Element : ")
    Size = int(input())

    print("Enter The Elements : ")

    Value = 0

    for i in range(Size):
        Value = int(input())

        Arr.append(Value)

    Ret = Summation(Arr)

    print("Summation is : ",Ret)

main()