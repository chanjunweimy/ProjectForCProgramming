/*
 * Read in a double eg 1.4732, 15.3245, echo it but with a minimum field width of 7 and 3 digits after the decimal point
 * i.e. ss1.473 (where 's' denotes space), s15.325 etc
 */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double d = sc.nextDouble();
        System.out.printf("%7.3f\n", d);
    }
}

