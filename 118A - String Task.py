s = input()
lows = s.lower()
vowels = ['a', 'e', 'i', 'o', 'u', 'y']
for i in lows:
    for j in vowels:
        lows = lows.replace(j, "")
for a in range(len(lows)):
    print("."+lows[a], end="")
