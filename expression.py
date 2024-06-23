def main():
    print(solve())



def solve():
    a = int(input())
    b = int(input())
    c = int(input())

    if a == 1 and c == 1:
        return a + b + c
    elif a == 1 or b == 1 or c == 1:
        out1 = (a + b) * c
        ans = out1
        out2 = a * (b + c)
        ans = max(ans, out2)
        out3 = a * b * c
        ans = max(ans, out3)
        return ans
    else:
        return a * b * c



if __name__ == "__main__":
    main()