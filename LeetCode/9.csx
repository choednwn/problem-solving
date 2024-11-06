using Internal;

public class Solution
{
    public bool IsPalindrome(int x)
    {
        string numText = x.ToString();

        for (int i = 0; i < numText.Length / 2; i++)
        {
            if (numText[i] != numText[numText.Length - 1 - i])
                return false;
        }

        return true;
    }
}

int x = 121232121;

Solution solution = new();
bool result = solution.IsPalindrome(x);
Console.WriteLine($"{x}: {result}");