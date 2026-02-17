username = input()

distinct_char = set(username)
if len(distinct_char) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")