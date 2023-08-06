n=int(input("Enter the size of the matrix:"))
arr=[]
arr1=[]
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
    l=[]
    for j in range(0,n):
        l.append(arr[(n-1)-j][i])
    arr1.append(l)
print("Roatated Matrix:")
for i in range(0,n):
    for j in range(0,n):
        print(arr1[i][j]," ",end="")
    print("\n")
