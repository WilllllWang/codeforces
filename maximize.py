def main():
    n = int(input())
    for _ in range(n):
        x = int(input())
        greatest = 0
        y = 1
        ans = 1
        while y < x:
            total = gcd(x, y) + y
            if total > greatest:
                greatest = total
                ans = y
            y += 1
        print(ans)
 






def gcd(x, y):
    while True:
        if x == 0 or y == 0:
            break
        x, y = swap(x, y)

    if x == 0:
        return y
    return x


def swap(x, y):
    temp = x
    x = y
    y = temp % y
    return x, y


if __name__ == "__main__":
    main()



