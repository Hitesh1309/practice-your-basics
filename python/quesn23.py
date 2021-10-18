## Manas, COE19B003
## Question number: 19
## Language: PYTHON

''' Brief Description of your solution
Program to find all a subarray with maximum sum in O(n)
'''

nums = list(map(int, input("Enter the numbers in an array separated by a space: ").split()))
max_sum = nums[0]
temp_sum = 0
max_range = [0, 0]
temp_range = [0, 0]

for i in range(len(nums)):
    temp_sum += nums[i]
    if temp_sum > max_sum:
        max_sum = temp_sum
        temp_range[1] = i
        max_range[1] = i
        max_range[0] = temp_range[0]
    if temp_sum < 0:
        temp_sum = 0
        temp_range[0] = i + 1

print(f"Subarray with maximum sum was found in the range {max_range[0]} to {max_range[1]} inclusive with a sum of {max_sum}")
