n = 0
i = 1
while n <= 250:
    if set(str(i**2)) == {'0','4','9'}:
        n+=1
        with open('Bulgarian OI/2009/p5/troll.txt','a') as f: f.write(str(i)+'\n')
    i += 1
