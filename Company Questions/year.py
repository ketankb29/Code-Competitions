import re
def findyears(str):
    n = len(str)
    def isinteger(a):
        if a>='0' and a<='9':
            return 1
        return 0

    years = set()
    for i in range(0,n-8):
        if re.match(r"[0-9][0-9]-[0-9][0-9]-[0-9][0-9][0-9][0-9]", str[i:i+10]):
            year = int(str[i+6:i+9])
            years.add(year)
            i+=9

    return len(years)

str = input("Enter string with year format(DD-MM-YYYY) : ")
print(findyears(str))