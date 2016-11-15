# reverse_string.py
# given a string return the string with the words reversed

def main():
  print("main")
  a = 1

  s0 = "The cat ate the mouse"
  print("Input::: " + s0)
  ts0 = "ehT tac eta eht esuom"
  assert( ts0 == reverse_string(s0))


def reverse_string(s):
  alpha = "abcdefghijklmnopqrstuvwxyz";

  reversed_s = s[::-1]
  split_reversed_s = " ".join(reversed_s.split(" ")[::-1])
  print("Reversed::: " + split_reversed_s)
  return split_reversed_s


if __name__ == "__main__":
  main()