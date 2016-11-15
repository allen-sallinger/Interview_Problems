# mergesort.py
# takes in an array and sorts it's contents using mergesort
# Allen Sallinger
# 11/14/2016

def main():
  print("main")

  arr0 = [5,4,2,6,7,1,3]
  print("Starting array: ", arr0)
  rarr0 = mergesort(arr0)
  print("Resulting array: ", rarr0)

  arr1 = []
  print("Starting array: ", arr1)
  rarr1 = mergesort(arr1)
  print("Resulting array: ", rarr1)

  arr2 = [1]
  print("Starting array: ", arr2)
  rarr2 = mergesort(arr2)
  print("Resulting array: ", rarr2)


def mergesort(arr):

  # break down to smallest forms
  if len(arr) < 2:
    return arr

  result = []
  mid = len(arr) // 2

  left = mergesort(arr[:mid])
  right = mergesort(arr[mid:])

  i = 0
  j = 0
  while i < len(left) and j < len(right):
    if left[i] < right[j]:
      result.append(left[i])
      i += 1

    else:
      result.append(right[j])
      j += 1

  result += left[i:]
  result += right[j:]
  return result


if __name__ == "__main__":
  main()