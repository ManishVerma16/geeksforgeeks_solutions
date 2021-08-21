import math
def score(arr, target):
	ans = 0

	if target == 0:
		return 1
	else:
		for i in range(len(arr)):
			if (target-arr[i]>=0):
				ans += score(arr, target-arr[i])
	return ans

t = int(input())
while t>0:
	t -= 1
	n = int(input())
	arr = [3, 5, 10]
	res = score(arr, n)
	op = int(math.sqrt(res))
	if op == 1:
		print(op)
	elif op%2 !=0:
		print(op+1)
	else:
		print(op)

