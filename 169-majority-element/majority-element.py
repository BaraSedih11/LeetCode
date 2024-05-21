class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        new_dict = {}

        for i in range(len(nums)):
            if nums[i] not in new_dict:
                new_dict[nums[i]] = 1
            else:
                new_dict[nums[i]] += 1
        
        max_value = max(new_dict.values())

        for key, val in new_dict.items():
            if val == max_value:
                return key