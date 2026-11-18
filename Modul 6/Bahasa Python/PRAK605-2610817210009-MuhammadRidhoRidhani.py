n = int(input())
A = []
for i in range(n):
    A.append(list(map(int, input().split())))
B = []
for i in range(n):
    B.append(list(map(int, input().split())))
for i in range(n):
    for j in range(n):
        total = 0
        for k in range(n):
            total = total + A[i][k] * B[k][j]
        print(total, end=" ")
    print()