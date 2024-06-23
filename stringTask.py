def main():
    ans = ''
    word = input().lower()
    for letter in word:
        if letter != 'a' and letter != 'e' and letter != 'i' and letter != 'o' and letter != 'u' and letter != 'y':
            ans = ans + '.' + letter

    print(ans)









if __name__ == "__main__":
    main()