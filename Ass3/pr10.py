l=[]
n=int(input("Enter the length of the list:"))
print("Enter the list items:")
for i in range(0,n):
    val=input("Enter:")
    l.append(val)
print("original list:",l)
p=""
for i in range(0,(n-1)):
    for j in range(0,((n-1)-i)):
        if(l[j]>l[j+1]):
            p=l[j]
            l[j]=l[j+1]
            l[j+1]=p
print("Sorted list:",l)
ele=input("Enter the element to be searched:")
if ele in l:
    print("yes")
else:
    print("no")
