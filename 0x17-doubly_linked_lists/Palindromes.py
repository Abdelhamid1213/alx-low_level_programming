def isPalindrom(num):
    return str(num) == str(num)[::-1]

palindroms = set()
for i in range(0, 999):
    for j in range(0, 999):
        if isPalindrom(i * j):
            palindroms.add(i * j)

print(max(palindroms))
