class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Edge case: if the array is empty
        if (nums.empty()) return 0;
        
        // Initialize the write_index pointer to 1 (start from the second element)
        int write_index = 1;
        
        // Iterate over the array starting from the second element
        for (int read_index = 1; read_index < nums.size(); ++read_index) {
            // If the current element is different from the previous one
            if (nums[read_index] != nums[read_index - 1]) {
                // Write the unique element to the position pointed to by write_index
                nums[write_index] = nums[read_index];
                // Move the write_index forward
                ++write_index;
            }
        }
        
        // The number of unique elements
        return write_index;
    }
};
