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
r1=int(input("enter the first row to be exchanged:"))
r2=int(input("enter the second row to be exchanged:"))
for j in range(0,n):
    val=arr[r1-1][j]
    arr[r1-1][j]=arr[r2-1][j]
    arr[r2-1][j]=val
    
print("changed Matrix:")
for i in range(0,n):
    for j in range(0,n):
        print(arr[i][j]," ",end="")
    print("\n")
