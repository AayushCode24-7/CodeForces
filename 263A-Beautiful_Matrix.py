a = b = 0
for i in range (5):
    row = list(map(int, input().split()))
    for j in range (5):
        if row[j]==1:
            a = i
            b = j
            break

print(abs(a-2)+ abs(b-2))