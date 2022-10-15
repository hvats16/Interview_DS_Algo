/*
    MY YOUTUBE VIDE ON THIS Qn : https://www.youtube.com/watch?v=I7drewKcN1Y&t=5s
    Company Tags               : Snapchat, GoDaddy, Lyft, Expedia, Microsoft, Bloomberg, Amazon, CouponDunia, FactSet, Goldman Sachs, VMWare, Zoho
    Leetcode Link              : https://leetcode.com/problems/string-compression/
    GfG Link                   : https://practice.geeksforgeeks.org/problems/run-length-encoding/1

*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        
        int i     = 0;
        int index = 0;
        
        while(i < n) {
            char curr = chars[i];
            
            int count = 0;
            //Find count of duplicates
            while(i < n && chars[i] == curr) {
                i++;
                count++;
            }
            
            //Assign it to chars and move index ahead to add the count
            chars[index] = curr;
            index++;
            
            //add the count
            if(count > 1) {
                string count_str = to_string(count);
                for(char &ch : count_str) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        
        return index;
    }
};
