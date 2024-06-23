import math

def main():
    n, m, a = input().split()
    height = math.ceil(int(n) / int(a))
    width = math.ceil(int(m) / int(a))
    minArea = height * width
    print(minArea)





if __name__ == "__main__":
    main()