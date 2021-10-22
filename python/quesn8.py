#sample input/output
#Enter the numbers seperated by commma:
#1111, 0001, 0101, 1010
#The numbers divisible by 5 are: 15, 5, 10

print("Enter the numbers seperated by commma: ")
nums = [num for num in input().split(",")]

result = []
for num in nums:
    num_in_dec = 0
    for i in range(3, -1, -1):
        temp = int(num[i])
        num_in_dec += temp*(2**(3-i))

    if num_in_dec % 5 == 0:
        result.append(str(num_in_dec))

result = ",".join(result)
print("The numbers divisible by 5 are: ",end="")
print(result)
