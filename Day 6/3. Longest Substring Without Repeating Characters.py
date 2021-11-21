def lengthOfLongestSubstring(self, s):
    stack = []
    longest = 0
    for i in s:
        if i not in stack:
            stack.append(i)
            longest = max(longest, len(stack))
        else:
            k = stack.index(i)
            longest = max(longest, len(stack))
            stack = stack[k+1:]
            stack.append(i)

    return longest