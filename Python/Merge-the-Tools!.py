from collections import OrderedDict

def merge_the_tools(string, k):
    # your code goes here
    for i in range(0, len(string)-k+1, k):
        print(''.join(OrderedDict.fromkeys(string[i:i + k])))
    

