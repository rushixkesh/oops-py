def get_average(marks_list):

total_sum = 0.0

num_entries = len(marks_list)

for mark in marks_list:

total_sum += mark

average = total_sum / num_entries

return average
def get_highest(mark_list):

max_element = mark_list[0]

for mark in mark_list:

if max_element < mark:

max_element = mark

return max_element

def get_lowest(mark_list):

min_element = mark_list[0]

for mark in mark_list:

if min_element > mark:

min_element = mark

return min_element

def validate_marks(mark_list):

is_valid = all(0 <= mark <= 100 for mark in mark_list)

if is_valid:

print("All entries in the list are valid.")

else:

print("You have entered a value either over 100 or under 0.")

return is_valid

def drop_lowest(mark_list):

lowest = get_lowest(mark_list)

mark_list.remove(lowest)

def get_k_largest_score(mark_list, k):

for i in range(k):

for j in range(len(mark_list) - i - 1):

if mark_list[j] > mark_list[j + 1]:
  mark_list[j], mark_list[j + 1] = mark_list[j + 1], mark_list[j]

return mark_list[-k]

if name == " main ":

list_marks = [int(input(f"Enter the marks for student {x + 1}: ")) for x in

range(10)]

if not validate_marks(list_marks):

exit()

print(f"Scores: {list_marks}")

print(f"Highest Marks: {get_highest(list_marks)}")

print(f"Lowest Marks: {get_lowest(list_marks)}")

print(f"Average Marks: {get_average(list_marks)}")

print(f"Second Largest: {get_k_largest_score(list_marks, 2)}")

print(f"Is Data Valid: {validate_marks(list_marks)}")

drop_lowest(list_marks)

drop_lowest(list_marks)

print(f"Average Marks after dropping two lowest: {get_average(list_marks)}")
