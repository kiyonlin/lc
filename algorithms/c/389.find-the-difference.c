/*
 * [389] Find the Difference
 *
 * https://leetcode.com/problems/find-the-difference/description/
 *
 * algorithms
 * Easy (51.43%)
 * Total Accepted:    108K
 * Total Submissions: 209.8K
 * Testcase Example:  '"abcd"\n"abcde"'
 *
 * 
 * Given two strings s and t which consist of only lowercase letters.
 * 
 * String t is generated by random shuffling string s and then add one more
 * letter at a random position.
 * 
 * Find the letter that was added in t.
 * 
 * Example:
 * 
 * Input:
 * s = "abcd"
 * t = "abcde"
 * 
 * Output:
 * e
 * 
 * Explanation:
 * 'e' is the letter that was added.
 * 
 */
char findTheDifference(char* s, char* t)
{
    int sTable[26] = { 0 };
    int tTable[26] = { 0 };
    while (*s)
        sTable[*s++ - 'a']++;
    while (*t)
        tTable[*t++ - 'a']++;
    for (int i = 0; i < 26; i++)
        if (sTable[i] != tTable[i])
            return 'a' + i;
    return '\0';
}
