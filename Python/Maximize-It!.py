import itertools

k, m = map(int,input().split())

a = []
for i in range(k):
    arr = list(map(int,input().split()))
    a.append(arr[1:])
    
all_combination = itertools.product(*a)
result = 0
for single_combination in all_combination:   
    result = max(sum([x*x for x in single_combination])%m,result)
print(result)
