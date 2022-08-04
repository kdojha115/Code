import java.util.*;

public class grading {
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        if(n>90)
        {
            System.out.print("Excellent");
        }
        else if(n>80 && n<=90){
            System.out.print("Good");
        }
        else if(n>70 && n<=80)
        {
            System.out.print("Fair");
        }
        else if(n>60 && n<= 70)
        {
            System.out.print("Meets expectations");
        }
        else{
            System.out.print("Below par");
        }
        System.out.println();
    }
}
