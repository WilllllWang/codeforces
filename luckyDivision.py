def main():
    num = input()
    if firstCheck(num) or secondCheck(int(num)) or thirdCheck(num):
        print("YES")

    elif not firstCheck(num) or not secondCheck(int(num)) or not thirdCheck(num):
        print("NO")

    

def firstCheck(num):
    for n in num:
        if n != '4' and n != '7':
            return False
        
    return True
    

def secondCheck(num):
    if num % 4 == 0 or num % 7 == 0:
        return True
    return False


def thirdCheck(num):
    product = 1
    for n in num:
        product *= int(n)

    return secondCheck(int(product))





if __name__ == "__main__":
    main()


#unfinished