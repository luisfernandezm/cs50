# TODO
c = 1
while True:
    try:
        n = int(input("n: "))
        if 0 < n < 9:
            for i in range(1, n + 1):
                for j in range(1, n + 1):
                    if j > (n - i):
                        print("#", end="")
                    else:
                        print(" ", end="")
                    if j == n:
                        print(" ", "#" * i, end="")
                print()
            break
        else:
            print("n should be a positive integer")
    except ValueError:
        print("n should be a positive integer")