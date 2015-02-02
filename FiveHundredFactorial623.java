/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Imam Ibn Hasan
 */
public class FiveHundredFactorial623 {
    static int last;
    static BigInteger[] factorial = new BigInteger[1001];
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n;
        
        for (int i = 0; i <= 1000; i++) {
            factorial[i] = GenFactorial(i);
            last=i;
        }
        while (s.hasNextInt()) {
            n = s.nextInt();
            System.out.println(n + "!");
            System.out.println(factorial[n]);
        }
    }

    private static BigInteger GenFactorial(int i) {
        if (i == 0 || i==1) {
            return BigInteger.ONE;
        } else {
            BigInteger b = BigInteger.valueOf(i);
            return b.multiply(factorial[last]);
        }
    }
}
