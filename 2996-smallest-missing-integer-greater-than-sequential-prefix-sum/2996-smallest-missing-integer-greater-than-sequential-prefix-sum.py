class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        hashset  =  set(nums)
        subsum = nums[0]
        for j  in range(1,len(nums)):
            if nums[j] == nums[j-1] + 1:
                subsum+= nums[j]
            else:
                break
        
        while subsum in hashset:
            subsum += 1 
        
        return subsum
        
        