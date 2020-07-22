def febonacci(n):
    lst = list()
    lst.append(0)
    lst.append(1)
    for i in range(2,n+1):
        num = lst[i-1] + lst[i-2]
        lst.append(num)
    return lst[n]

n = int(input())
print(febonacci(n))
