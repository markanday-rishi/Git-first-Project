import java.util.Scanner;

public class substraction {
    
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num1 = reader.nextInt();
        System.out.print("Enter a number: ");
        int num2 = reader.nextInt();

        int subs=num1-num2;
        System.out.println("substraction of " +num1 +" & " +num2 +":" +subs);
    }
}
