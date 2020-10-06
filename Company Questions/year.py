def findyears(str):
    n = len(str)
    def isinteger(a):
        if a>='0' and a<='9':
            return 1
        return 0

    years = set()
    for i in range(0,n-8):
        if isinteger(str[i])==1:
            if isinteger(str[i+1])==1:
                if str[i+2]=='-':
                    year = int(str[i+6:i+9])
                    years.add(year)

    return len(years)

str = input("Enter string with year format(DD-MM-YYYY) : ")
print(findyears(str))