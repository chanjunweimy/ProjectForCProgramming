/*
 * Given a date, find day of week
 * i.e. Date: 9 Aug 2010. Day: Mon
 */

import java.util.Scanner;
import java.util.GregorianCalendar;

class Main {
    public static void main(String[] args) {
        // Note Sun starts from 1 in Gregorian Calendar
        String[] names = new String[]
            {"", "Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};

        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        int month = sc.nextInt();
        int date = sc.nextInt();
        //System.out.println(Integer.toString(year) + " " + Integer.toString(month) + " " + Integer.toString(date));

        GregorianCalendar calendar = new GregorianCalendar(year, month-1, date);
        System.out.println(names[calendar.get(GregorianCalendar.DAY_OF_WEEK)]);
    }
}
