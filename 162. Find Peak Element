class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int peaks = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.size() > 1)
            {

                if (i == 0 && nums[i] > nums[i + 1])
                {
                    peaks = i;
                    break;
                }
             
                if (i == (nums.size() - 1) && nums[nums.size() - 1] > nums[nums.size() - 2])
                {
                    peaks = nums.size() - 1;
                    break;
                }

                else if (nums.size() > 2)
                {
                    if (nums[i] > nums[i + 1])
                    {
                        peaks = i;
                        break;
                    }
                }

               
            }
            else
            {
                break;
            }
        }
        return peaks;
    }
};
