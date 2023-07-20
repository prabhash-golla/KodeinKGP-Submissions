p=int(input())
for i in range(p):
    a=int(input())
    t=0
    for i in range(2,a//2):
        t=1+i+i*i
        k=3
        while t<a:
            t+=i**k
            k+=1
        if t==a:
            t=1
            break
    if t!=1:
        print ('No')
    else:
        print('Yes')