import java.io.*;

class Palindrome {
    public static void main(String[] args) {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            Solution ob = new Solution();
            System.out.println(ob.isPalindrome(S));
        }
    }
}

class Solution {
    int isPalindrome(String S) {
        StringBuffer sb = new StringBuffer(S);
        if (S.equals(sb.reverse().toString())) {
            return 1;
        } else {
            return 0;
        }
    }
}
