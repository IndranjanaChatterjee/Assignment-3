n=int(input("Enter the size of the matrix:"))
arr=[]
for i in range(0,n):
    l=[]
    for j in range(0,n):
        num=int(input("Enter the elements:"))
        l.append(num)
    arr.append(l)
lsum=0
rsum=0
for i in range(0,n):
    for j in range(0,n):
        print(arr[i][j]," ",end="")
    print("\n")
for i in range(0,n):
    for j in range(0,n):
        if(i==j):
            lsum=lsum+arr[i][j]
        if((i+j)==(n-1)):
            rsum=rsum+arr[i][j]
print(lsum," ",rsum)