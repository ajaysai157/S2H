import java.util.*;
class String1{
    public static String reverseString(String s) {
        // code here
        int left=0,right=s.length()-1;
        char[] arr=s.toCharArray();
        while(left<right){
            char temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        String rev=new String(arr);
        return rev;
    }
    public static void main(String[] args) {
        // Code here
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        String res=reverseString(s);
        System.out.println("Reverse of "+s+" is "+res);
    }
}