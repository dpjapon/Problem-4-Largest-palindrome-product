def palindromic():
    n = 0
    for i in range(100, 999):
        for j in range (999, 100, -1):
            cal = i * j
            if cal > n: 
                a = str(cal)
                if a[:] == a[::-1]: #[::-1] el string lo pongo al reves ej. '1234' -> '4321'
                    n = i * j
    print ("\nThe largest palindromic is: ", end = '')
    return n
print(palindromic())
