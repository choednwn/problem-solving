using Internal;

public class Solution
{
    Dictionary<char, int> romans = new() {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    public int RomanToInt(string s)
    {
        int length = s.Length;
        int result = 0;

        for (int i = 0; i < length; i++)
        {
            if (i < length - 1 && romans[s[i]] < romans[s[i + 1]])
            {
                result += romans[s[i + 1]] - romans[s[i]];
                i++;
            }
            else result += romans[s[i]];
        }
        return result;
    }
}

string s = "MCMXCIV";

Solution solution = new();
Console.WriteLine($"{solution.RomanToInt(s)}");