## Manas, COE19B003
## Question number: 19
## Language: PYTHON

''' Brief Description of your solution
Program to find all repeating numbers with their freqency count
'''
 
n = int(input("Enter the number of numbers:"))
nums = input(f"Enter {n} Space Separated Numbers between 0 and {n-1}:")
nums = list(map(int,nums.split()))
for i in range(len(nums)):
    nums[nums[i] % n] += n

for i in range(len(nums)):
    if int(nums[i] /  n) - 1 > 0:
        print(f"Number {i} is repeated {int(nums[i] / n) - 1} times")