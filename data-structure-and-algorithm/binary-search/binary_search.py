# Binary Search (이진 탐색) - O(log n)
# binary_search 함수는 정렬된 배열 하나와 어떤 아이템 하나를 받는다.
# 만약 그 아이템이 배열 안에 있으면 배열에서의 아이템 위치를 반환한다.
# 탐색을 하면서 현재 배열 중 어느 부분을 탐색해야 하는 지를 기억해 놓아야 한다.
# 처음에는 배열 전체를 탐색해야 한다.

class BinarySearch():

  def search_iterative(self, list, item):
    # low와 high는 전체 리스트 중에서 어떤 부분을 탐색해야 하는 지 알려준다.
    low = 0
    high = len(list) - 1

    # 탐색 범위를 하나로 줄이지 못했으면 계속 실행
    while low <= high:
      # 리스트에서 가장 가운데 있는 원소 확인
      mid = (low + high) // 2
      guess = list[mid]

      # Found the item
      if guess == item:
        return mid
      # The guess was too high
      if guess > item:
        high = mid - 1
      # The guess was too low
      else:
        low = mid + 1

    # Item doesn't exist
    return None

  def search_recursive(self, list, low, high, item):
    # Check base case 
    if high >= low: 
  
        mid = (high + low) // 2
        guess = list[mid]
  
        # If element is present at the middle itself 
        if guess == item:
            return mid 
  
        # If element is smaller than mid, then it can only 
        # be present in left subarray 
        elif guess > item: 
            return self.search_recursive(list, low, mid - 1, item) 
  
        # Else the element can only be present in right subarray 
        else: 
            return self.search_recursive(list, mid + 1, high, item) 
  
    else: 
        # Element is not present in the array 
        return None

if __name__ == "__main__":
  # We must initialize the class to use the methods of this class
  bs = BinarySearch()
  my_list = [1, 3, 5, 7, 9]
  
  print(bs.search_iterative(my_list, 3)) # => 1

  # 'None' means nil in Python. We use to indicate that the item wasn't found.
  print(bs.search_iterative(my_list, -1)) # => None