t_str = input()
if t_str:
    t = int(t_str)
    
    for _ in range(t):
        n, a, b = map(int, input().split())

        x = (n == a == b)
        y = (a + b <= n - 2)
        
        if x or y:
            print("Yes")
        else:
            print("No")