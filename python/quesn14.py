def convert():
    x=input("Enter an integer\n")

    n = int(x)

    print("Input is of type: ")
    print(type(n))

    convert_n = str(n)
    
    print("Input is converted to type: ")
    print(type(convert_n))

    print("String form of the integer:",(convert_n))

convert()
