
nums = [-5,4,2,3,1,-2]
def sum(nums):
    nums.sort()
    res = []
    # [-3,-3,0,3,3]

    for i , a in enumerate(nums):
        if i> 0 and a == nums[i -1]:
            continue

        l = i+1
        r = len(nums)-1
        while l< r:
            three = a + nums[l] +nums[r]
            if three > 0 :
                r -=1
            elif three < 0 :
                l += 1
            else:
                res.append([a,nums[l],nums[r]])
                r -=1
                l += 1
    return res


print(sum(nums))
