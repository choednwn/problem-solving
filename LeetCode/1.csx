using Internal;

public class Solution
{
    public int[] TwoSum(int[] nums, int target)
    {
        for (int i = 0; i < nums.Length; i++)
        {
            for (int j = i + 1; j < nums.Length; j++)
            {
                if (nums[i] + nums[j] == target)
                    return [i, j];
            }
        }

        return [];
    }
}

int[] nums = [3, 2, 3];
int target = 6;

Solution solution = new();
int[] result = solution.TwoSum(nums, target);
Console.WriteLine($"[{result[0]}, {result[1]}]");