import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int test = scanner.nextInt();
        label1: while (test!=0) {
            test--;
            int size = scanner.nextInt();
            String str = scanner.next();
            int i = 0;
            if(str.charAt(i)=='M' || str.charAt(i)=='m')
            {

            
            while ((str.charAt(i) == 'M' || str.charAt(i) == 'm')) {
                if(i==str.length()-1)
                {
                    System.out.println("No");
                    continue label1; 
                }
                i++;
            }
            }
            else{
                System.out.println("No");
                    continue label1; 
            }
            if(str.charAt(i)=='E' || str.charAt(i)=='e')
            {
            while ((str.charAt(i) == 'E' || str.charAt(i) == 'e')) {
                if(i==str.length()-1)
                {
                    System.out.println("No");
                    continue label1; 
                }
                i++;
            }
        }
            else{
                System.out.println("No");
                    continue label1; 
            }
            if(str.charAt(i)=='O' || str.charAt(i)=='o')
            {
            while ((str.charAt(i) == 'O' || str.charAt(i) == 'o')) {
                if(i==str.length()-1)
                {
                    System.out.println("No");
                    continue label1; 
                }
                i++;
            }
        }
        else{
            System.out.println("No");
                continue label1; 
        }
        if(str.charAt(i)=='W' || str.charAt(i)=='w')
        {
            while ((str.charAt(i) == 'W' || str.charAt(i) == 'w')) {
                if(i==str.length()-1)
                {
                    System.out.println("Yes");
                    continue label1; 
                }
                i++;
            }
        }
        else{
            System.out.println("No");
                continue label1;
        }
            System.out.println("No");
            
        }
    }
}
