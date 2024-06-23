def main():
    print(solve())



def solve():
    word = input()
    for i in range(1, len(word)):
        if word[i].islower():
            return word
            
    if word[0].islower():
        return word.lower().title()
    return word.lower()

    


if __name__ == "__main__":
    main()