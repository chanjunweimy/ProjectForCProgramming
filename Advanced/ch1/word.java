/*
 * 'Special Word': lowercase alphabet followed by two consecutive digits
 * Given a string, replace all 'special words' of length 3 with 3 stars
 * a70 a72 are special words
 * aa24 a872 are not 
 */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        String S = "line: a70 and a72 are special words while aa24 and a872 are not";
        System.out.println(S.replaceAll("[a-z][0-9][0-9]", "***"));
    }
}
