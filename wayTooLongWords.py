def main():
    n = int(input())
    for _ in range(n):
        word = input()
        if len(word) > 10:
            num = len(word) - 2
            print(word[0] + str(num) + word[-1])
        else:
            print(word)


if __name__ == "__main__":
    main()