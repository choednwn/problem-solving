using Internal;

public class Solution
{
    public string LongestCommonPrefix(string[] strs)
    {
        int shortestLetterCount = strs.Min(s => s.Length);
        string prefix = "";

        for (int i = 0; i < shortestLetterCount; i++)
        {
            char letter = strs[0][i];
            foreach (string s in strs)
            {
                if (s[i] != letter) return prefix;
            }

            prefix += letter;
        }

        return prefix;
    }
}

string[] strs = ["pie", "pizza", "pin"];

Solution solution = new();
Console.WriteLine(solution.LongestCommonPrefix(strs));