""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""
def check_binary_search_tree_(root):
    return check_binary_search_tree_helper(root, -float('inf'), float('inf'))

def check_binary_search_tree_helper(root, min, max):
    if root is None:
        return True
    if root.data < min or root.data > max:
        return False
    return check_binary_search_tree_helper(root.left, min, root.data) and check_binary_search_tree_helper(root.right, root.data, max)
