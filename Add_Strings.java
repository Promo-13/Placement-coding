class Solution {
    public String addStrings(String num1, String num2) {
        StringBuilder res = new StringBuilder();
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        while(i > -1 || j > -1){
            int n1 = i > -1 ? num1.charAt(i)-'0':0;
            int n2 = j > -1 ? num2.charAt(j)-'0':0;
            int sum = n1 + n2 + carry;
            res.append(sum % 10);
            carry = sum / 10;
            i--;
            j--;
        }
        if(carry == 1) res.append(1);
        return res.reverse().toString();
    }
}
