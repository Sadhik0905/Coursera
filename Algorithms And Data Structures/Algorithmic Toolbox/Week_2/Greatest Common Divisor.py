def gcd(a,b):
    if b==0:
        return a
    else:
        rem= a%b
        return gcd(b,rem)


a,b = map(int,input().split())

print(gcd(a,b))
