def revers(n,b=0):
    if(n==0):
        return b
    a=n%10
    b=b*10+a
    return revers(n//10,b)
n=1234
print("revers number=",revers(n))        