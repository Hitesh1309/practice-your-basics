def bigstring():
		x=input("Enter string 1\n")
		y=input("Enter string 2\n")
		l1=len(x)
		l2=len(y)

		if l1==l2 :
			print("String 1: ",x,"\nString 2:",y,"\nBoth are of same length")
		if l1>l2 :
			print("Larger string is: ",x)
		if l1<l2 :
			print("Larger string is: ",y)

bigstring()
