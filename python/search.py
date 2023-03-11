""" searching element in sorted array"""


# linear search
# Time complexity:O(n)
# Space complexity:O(1)

def linear_search(list_data: list[int], value: int) -> int:
    for num in list_data:
        if value == num:
            return list_data.index(num)
    raise ValueError('value not found in list')


# Binary search
# Time complexity:O(log(N))
# Space complexity:O(1)

def binary_search(list_data: list[int], value: int) -> int:
    # for repeated elements
    def is_first_num(lis: list[int], position: int) -> bool:
        if len(lis) == 1:
            return True
        elif lis[position] > lis[position - 1]:
            return True
        else:
            return False

    # binary search function starts from here
    start, end = 0, len(list_data) - 1
    while start <= end:
        mid = (start + end) // 2
        if value == list_data[mid]:
            if is_first_num(list_data, mid):
                return mid
            end = mid-1
        elif value < list_data[mid]:
            end = mid - 1
        elif value > list_data[mid]:
            start = mid + 1
    raise ValueError('value not found in list')


if __name__ == '__main__':
    # test case# test case
    list1 = []
    list2 = [1]
    list3 = [1,3,4,5,8,10]
    list4 = [1,1,5,5,5,5,8,9,9,11,15]
    print(linear_search(list1,4), binary_search(list1, 4))
    print(linear_search(list2, 1), binary_search(list2, 1))
    print(linear_search(list3, 8), binary_search(list3, 8))
    print(linear_search(list4, 5), binary_search(list4, 5))
