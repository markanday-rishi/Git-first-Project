import java.util.Scanner;

public class addition {


    public static void main(String[] args) {

        Scanner reader = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num1 = reader.nextInt();
        System.out.print("Enter a number: ");
        int num2 = reader.nextInt();

        int sum=num1+num2;
        System.out.println("sum of " +num1 +" & " +num2 +":" +sum);

    }
}
