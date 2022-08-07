import java.util.*;

public class primetilN {
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        int n  = scn.nextInt();
        int m = scn.nextInt();
        for(int i =n;i<=m;i++)
        {
            int f =0;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j ==0)
                {
                    f = 1;
                    break;
                }

            }
            if(f == 0)
            {
                System.out.println(i);
            }
        }
    }
    
}
