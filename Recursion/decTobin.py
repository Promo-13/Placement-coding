def decTobin(n):
    assert int(n) == n, "The number must be integer only!"
    if n == 0:
        return 0
    else:
        return n%2 + 10 *decTobin(int(n/2))
print(decTobin(10))
