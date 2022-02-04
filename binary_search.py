
#Binary Search Algorithm implemented in python. It is implemented as a function. To run it pass to_find and input_list arguments to the function.
#The function will return the index of where the value is found. Else will return "Not Found" if the value is not in the list.

def binarySearch(to_find,input_list,low=None,high=None):
	if not low:
		low = 0
	if not high:
		high = len(input_list) - 1

	mid_point = (low+high) // 2

	while True:

		if high < low:
			return "Not Found"
			break

		if input_list[mid_point] == to_find:
			# print('Found at Index ' + str(mid_point))
			return mid_point
			break
		elif to_find < input_list[mid_point]:
			high =  mid_point - 1
			mid_point = (low + high) // 2
		else:
			low = mid_point + 1
			mid_point = (low + high) // 2

	





