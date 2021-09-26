def isValid(s):
	num_list = list(s.split('.'))
	flag = 0
	if len(num_list)<4:
		return 0
	else:
		for i in num_list:
			if '' in num_list:
				return 0
			elif int(i)>=0 and int(i)<=255:
				flag = 1
			else:
				flag = 0
	return flag


s = input()
print(isValid(s))