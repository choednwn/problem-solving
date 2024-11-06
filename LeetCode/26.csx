using Internal;

public class Solution
{
    public int RemoveDuplicates(int[] nums)
    {
        HashSet<int> unique = new();

        foreach (int num in nums)
        {
            unique.Add(num);
        }

        for (int i = 0; i < unique.Count(); i++)
        {
            nums[i] = unique.ToArray()[i];
        }

        return unique.Count();
    }
}

int[] nums = [1, 1, 2, 3, 5, 5, 6, 7, 7];

Solution solution = new();
Console.WriteLine($"{solution.RemoveDuplicates(nums)}");