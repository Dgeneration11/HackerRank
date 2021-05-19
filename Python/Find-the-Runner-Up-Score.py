if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    
    list = sorted(set(arr), reverse=True)
    
    print(list[1])
