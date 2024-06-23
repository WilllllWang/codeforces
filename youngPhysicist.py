def main():
    n = int(input())
    ansX, ansY, ansZ = 0, 0, 0
    for _ in range(n):
        x, y, z = input().split()
        ansX += int(x)
        ansY += int(y)
        ansZ += int(z)

    if ansX != 0 or ansY != 0 or ansZ != 0:
        print("NO")

    else:
        print("YES")






if __name__ == "__main__":
    main()