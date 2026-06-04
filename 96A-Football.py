def solve():
    s = input()
    if "0000000" in s or "1111111" in s:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    solve()