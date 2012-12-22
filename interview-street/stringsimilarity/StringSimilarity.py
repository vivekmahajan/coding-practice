
def SimilarStrings(string):
    reverseString  = string[::-1]
    tempStr = ''
    total = 0
    for s in reverseString:
        tempStr = s + tempStr
        count = 0
        for i in tempStr:
            if string[count] == tempStr[count]:
                count = count + 1
            else:
                break
        total = total + count 
    return total

N = int(raw_input())
for i in xrange(N):
    string = str(raw_input())
    print SimilarStrings(string)

