

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

    print(Arr)

main()