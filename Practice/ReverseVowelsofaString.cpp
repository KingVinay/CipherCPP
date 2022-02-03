// Leetcode - 345. Reverse Vowels of a string

string reverseVowels(string s) {
        
        int i=0,j = s.size()-1;
        string vowel = "aeiouAEIOU";
        
        while(j>i)
        {
            if(vowel.find(s[i])!=-1 && vowel.find(s[j])!=-1)
            {
                swap(s[i],s[j]);
                i++;j--;
            }
            
            else{
                if(vowel.find(s[i])==-1){i++;}
                if(vowel.find(s[j])==-1){j--;}
                }
        
        
         }
        return s;
    
    }