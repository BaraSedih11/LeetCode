class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        size = len(nums1)        
        for i in range(len(nums1)-1, -1, -1):
            print(f'nums1 {i} : ', nums1)
            if(nums1[i] == 0 and i == len(nums1)-1):
                t = nums1.pop()
        
        
        for i in range(len(nums2)-1, -1, -1):
            print(f'nums2 {i} : ', nums2)
            if(nums2[i] == 0 and i == len(nums2)-1):
                t = nums2.pop()
        
        
        nums3 = sorted(nums1 + nums2)

        for i in range(len(nums3)-1, -1, -1):
            print(f'nums3 {i} : ', nums3)
            if(nums3[i] == 0 and i == len(nums3)-1):
                t = nums3.pop()

        nums1.clear()
    
        for num in nums3:
            nums1.append(num)

    
        while len(nums1) < size:
            nums1.append(0)
        
        
        
            
