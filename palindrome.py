# palindrome.py
# see if a word is a palindrome
# Allen Sallinger
# 11/14/2016

def main():
  s0 = "ababa"
  # print(is_palindrome(s0))
  assert(is_palindrome(s0) == True)

  s1 = "abba"
  # print(is_palindrome(s1))
  assert(is_palindrome(s1) == True)

  s2 = "abcd"
  # print(is_palindrome(s2))
  assert(is_palindrome(s2) == False)

  s3 = ""
  # print(is_palindrome(s3))
  assert(is_palindrome(s3) == True)

  s4 = "z"
  # print(is_palindrome(s4))
  assert(is_palindrome(s4) == True)

  print("All tests finished successfully")


def is_palindrome(s):
  if len(s) < 2:
    return True

  else:
    for i in range(len(s) // 2):
      if s[i] != s[len(s) - i - 1]:
        return False

    return True


if __name__ == "__main__":
  main()