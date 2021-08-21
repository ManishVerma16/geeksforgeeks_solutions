import math

class Solution:
	def quadraticRoots(self, a, b, c):
		arr = []
		d = (b*b) - (4*a*c);
		print(d)
		x = math.sqrt(abs(d));
		print(x)
		if d<0 or a == 0:
			arr.append(-1)

		elif d == 0 or a != 0:
			arr.append(int(math.floor((-b + x)/(2*a))))
			arr.append(int(math.floor((-b + x)/(2*a))))

		else:
			arr.append(int(math.floor((-b + x)/2*a)))
			arr.append(int(math.floor((-b - x)/2*a)))
		return arr

a, b, c = input().split()
obj = Solution()
res = obj.quadraticRoots(int(a), int(b), int(c))
for i in res:
	print(i, end=" ")

