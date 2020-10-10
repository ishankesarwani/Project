
import java.util.Scanner;


public class ConvertPalindrome {
    public static boolean isPalindrome(String s){
        String s2="";
        int i,l,count=0;
        boolean flag= true;
        l=s.length();
        for(i=0;i<l;i++){
            if(s.charAt(i)== s.charAt(l-1-i)){
                s2+=s.charAt(l-1-i);
            }
        }
        if(s2.equals(s)){
            flag=true;
        }
        else{
            flag= false;
        }
        return flag;
    }
    public static String covertToPalindrome(String s1){
        String s2="";
        String s3="";
        boolean flag= false;
        char[] ch = new char[s1.length()];
        char[] ch1 = new char[s1.length()];
        for(int i =0; i<s1.length();i++){
            ch[i]=s1.charAt(i);//mad= m
            ch1[i]=s1.charAt(i); //m
            s2+=ch1[i];//m
            s2= new StringBuffer(s2).reverse().toString();
            s3=s1+s2; //madm
            if(isPalindrome(s3) == true){
                return s2;
            }
            s2= new StringBuffer(s2).reverse().toString();
        }
        return s2;
    }
    public static void main(String args[]){
        String s1;
        System.out.println("Enter the string");
        Scanner sc = new Scanner(System.in);
        s1=sc.next();
        if(!isPalindrome(s1)){
            String s = covertToPalindrome(s1);
            System.out.println("String appended at the end to make it a palindrome string "+s);
        }
        
    }
    
}
