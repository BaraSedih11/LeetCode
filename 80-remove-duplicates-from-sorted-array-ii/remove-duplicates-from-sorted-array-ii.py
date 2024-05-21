class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        if len(nums) < 3:
            return len(nums)

        else:
            first = nums[0]
            second = nums[1]

            nums[:] = [nums[i] for i in range(2, len(nums)) if nums[i] != nums[i-1] or nums[i] != nums[i-2]]
            print(nums)
            print(first)
            print(second)
            nums.append(first)
            nums.append(second)

            nums[:] = sorted(nums)

            print(nums)
            return len(nums)