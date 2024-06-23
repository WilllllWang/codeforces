def main():
    solve()



def solve():
    n = int(input())
    data = {} # key, [value,value+1...]
    for _ in range(n):
        name = input()
        if name not in data:
            print("OK")
            data[name] = [0]
        else:
            length = len(data[name])
            newName = name + str(length)
            data[name].append(length)
            data[newName] = [0]
            print(newName)




if __name__ == "__main__":
    main()