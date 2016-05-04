
def convert_to_base(n, base):
    s = ""
    while(n >= base):
        remain = n % base
        if(remain == 0):
            s += "0"
        else:
            s += str(remain)
        n = int(n / base)

    s += str(n)
    return s[::-1]

def palin_check(s):
    rs = s[::-1]
    for i in range(len(s)):
        if s[i] != rs[i]:
            return False

    return True;

def answer(n):
    # 0 and 1 only have 2 as smallest base
    if n < 2:
        return 2
    
    for i in range(2,n):
        s = convert_to_base(n,i)
        if palin_check(s) == True:
            return i
    

if __name__ == "__main__":
    print("First test case: ", answer(0))
    print("Second test case: ", answer(42))
    
