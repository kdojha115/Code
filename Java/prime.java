import java.util.Scanner;

public class prime {
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int p = 0;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                p = 1;
                break;
            }
        }
        if(p == 1)
        {
            System.out.print("Not prime");
        }
        else{
            System.out.print("Prime");
        }
        System.out.println();
    }
    
}
