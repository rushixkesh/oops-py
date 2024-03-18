def count_elements(numbers):for x in

numbers:

count += 1

return count

def get_frequency(numbers, num):

count = 0

for x in numbers:

if x == num:

count += 1

return count

def get_last_element(numbers):

return numbers[-1] if numbers else None

def reverse_array(numbers):

start, end = 0, len(numbers) - 1

while start < end:

numbers[start], numbers[end] = numbers[end], numbers[start]

start += 1

end -= 1

return numbers

def contains(numbers, num): return f"Yes, it contains {num}" if num in numbers else

f"No, it does not contain {num}"
def remove_first(numbers):

if numbers:

numbers.pop(0)

def remove_last(numbers):

if numbers:

numbers.pop()

def sort_array(numbers):

is_sorted = True

for i in range(len(numbers)-1):

for j in range(len(numbers)-1-i):

if numbers[j] > numbers[j+1]:

numbers[j], numbers[j+1] = numbers[j+1], numbers[j]

is_sorted = False

return numbers, is_sorted

if _name_ == "_main_":

size_of_array = int(input("Enter the size of the array: "))

nums = []

print("Enter the elements of the array:")

while size_of_array > 0:

try: element = int(input())
  nums.append(element)

size_of_array -= 1

except ValueError:

print("Invalid input. Please enter a valid integer.")

count = count_elements(nums)

print(f"Total number of elements in array: {count}")

last_element = get_last_element(nums)

print(f"Last element in the list: {last_element}")

reversed_copied_list = reverse_array(nums.copy())

print(f"Reversed copied list: {reversed_copied_list}")

num_to_find = int(input("[+] Enter the number to find the frequency in array nums:

"))

frequency_of_number = get_frequency(nums, num_to_find)

print(f"{num_to_find} is repeated {frequency_of_number} times")

remove_first(nums)

remove_last(nums)

print(f"List after removing first and last elements: {nums}")

sorted_nums, is_sorted = sort_array(nums.copy())

if is_sorted:

print("The list is already sorted.")
else:

print(f"Sorted list using bubble sort: {sorted_nums}")
