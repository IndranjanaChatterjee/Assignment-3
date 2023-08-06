n=int(input("Enter the size of the matrix:"))
arr=[]
for i in range(0,n):
    l=[]
    for j in range(0,n):
        num=int(input("Enter the elements:"))
        l.append(num)
    arr.append(l)
z=0
for i in range(0,n):
    for j in range(0,n):
        print(arr[i][j]," ",end="")
    print("\n")
for i in range(0,n):
    for j in range(0,n):
        if(arr[i][j]==0):
            z+=1
if(z>((n*n)//2)):
    print("Sparse")
else:
    print("not sparse")
