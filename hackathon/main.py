for i in range(10):
    for j in range(15):
        if j % 7 == 0:
            print("+ ", end='')
        else:
            print("* ", end='')
    print()