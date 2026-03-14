import java.util.Scanner;

class BitManipulation1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number to Check Even or Odd : ");
        int n=sc.nextInt();
        if((n & 1)==1){
            System.out.println(n+" is Odd Number");
        }else{
            System.out.println(n+" is Even Number");
        }
        sc.close();
    }
}