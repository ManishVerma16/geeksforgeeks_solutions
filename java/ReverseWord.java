import java.util.*;


public class ReverseWord {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0) {
            String S = sc.next();
            Solution obj = new Solution();
            System.out.println(obj.reverseWords(S));
        }
        sc.close();
    }
}

class Solution {
    String reverseWords(String S)
    {
        // code here 
        String newString = "";
        String[] wordList = S.split("\\.");
        
        Collections.reverse(Arrays.asList(wordList));
        newString = String.join(".", wordList);
        return newString;
    }
    
}