arr1 = [[0 for i in range(5)]for i in range(5)]
arr2 = [[0 for i in range(5)]for i in range(5)]
arr3 = [[0 for i in range(5)]for i in range(5)]
print("Max row and col = 5")
r1 = int(input("Enter row of first matrix "))
c1 = int(input("Enter col of first matrix "))
print("Enter elements of mat 1")
for i in range(r1):
    for j in range(c1):
        arr1[i][j] = int(input(""))
        # print(arr1[i][j],i,j)

r2 = int(input("Enter row of Second matrix "))
c2 = int(input("Enter col of Second matrix "))
print("Enter elements of mat 2")
if c1==r2:
    for i in range(r2):
        for j in range(c2):
            arr2[i][j] = int(input(""))
    # print(arr1,arr2)
    for i in range(r1):
        for j in range(c2):
            for k in range(c2):
                arr3[i][j]+=(arr1[i][k]*arr2[k][j])
    for i in range(0,r1):
        for j in range(0,c2):
            print(arr3[i][j],end = " ")
        print("")
else:
    print("Cannot multiply mat")
