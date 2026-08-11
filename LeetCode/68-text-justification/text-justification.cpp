class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0;
        int n = words.size();
        while (i < n) {
            int j = i;
            int lineLength = 0;
            while (j < n && lineLength + words[j].length() + (j - i) <= maxWidth) 	{
                lineLength += words[j].length();
                j++;
            }
            int numWords = j - i;
            int extraSpaces = maxWidth - lineLength;
            string line = words[i];
            if (j == n || numWords == 1) {
                for (int k = i + 1; k < j; k++) {
                    line += " " + words[k];
                }
                line += string(maxWidth - line.length(), ' ');
            } else {
                int spacesPerGap = extraSpaces / (numWords - 1);
                int extra = extraSpaces % (numWords - 1);
                for (int k = i + 1; k < j; k++) {
                    int spaces = spacesPerGap + (extra > 0 ? 1 : 0);
                    line += string(spaces, ' ') + words[k];
                    extra--;
                }
            }
            result.push_back(line);
            i = j;
        }
        return result;
    }
};
