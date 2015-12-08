/*
 * Given a string in base X, convert it to a string in base Y
 */

import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) {
        String str = "FF";
        int X = 16, Y = 10;
        System.out.println(new BigInteger(str, X).toString(Y));
    }
}
