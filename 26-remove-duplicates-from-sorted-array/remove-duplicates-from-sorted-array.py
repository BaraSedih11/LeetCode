class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        first_el = nums[0]
        
        if len(nums) > 1:
            second_el = nums[1]

            nums[:] = [nums[i] for i in range(len(nums)) if nums[i] != nums[i-1] and ( nums[-1] != nums[0])]

            if len(nums) == 0 and first_el == second_el:
                nums.append(first_el)
            return len(nums)
        else:
            return 1