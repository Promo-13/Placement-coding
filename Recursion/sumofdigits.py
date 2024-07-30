def sumofdigits(n):
    assert n >= 0 and int(n) == n, "The number must be positive"
    if n == 0:
        return 0
    else:
        return n%10 + sumofdigits(n//10)

print(sumofdigits(123))
