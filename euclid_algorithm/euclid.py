def gcd(x, y):
    """Implementing Euclid's Algorithm in Python"""
    larger = max(x, y)
    smaller = min(x, y)

    remainder = larger % smaller

    if remainder == 0:
        return smaller

    if remainder != 0:
        return gcd(smaller, remainder)


show_gcd = gcd(100, 5)
print(show_gcd)
