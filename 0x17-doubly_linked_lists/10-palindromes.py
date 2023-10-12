def isPalindrom(num):
    return str(num) == str(num)[::-1]

palindroms = set()
for i in range(0, 999):
    for j in range(0, 999):
        if isPalindrom(i * j):
            palindroms.add(i * j)

print('largest palindrome made from the product \
of two 3-digit numbers is {}'.format(max(palindroms)))

f = open("102-result", "w")
f.write(str(max(palindroms)))
f.close
