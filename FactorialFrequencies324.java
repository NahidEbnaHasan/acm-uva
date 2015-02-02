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
public class FactorialFrequencies324 {

    static int last;
    static BigInteger[] factorial = new BigInteger[367];

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n, indx;
        BigInteger b;
        int[] digt = new int[]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for (int i = 0; i <= 366; i++) {
            factorial[i] = GenFactorial(i);
            last = i;
        }
        while (s.hasNextInt()) {
            n = s.nextInt();
            if (n == 0) {
                break;
            } else {
                b = factorial[n];
                System.out.println(b);
                while (b.compareTo(BigInteger.ZERO) == 1) {
                    indx = b.mod(BigInteger.TEN).intValue();
                    digt[indx]++;
                    b = b.divide(BigInteger.TEN);
                }
                System.out.println(n + "! --");
                System.out.printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n", digt[0], digt[1], digt[2], digt[3], digt[4]);
                System.out.printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n", digt[5], digt[6], digt[7], digt[8], digt[9]);
                for (int i = 0; i < 10; i++) {
                    digt[i] = 0;
                }
            }
        }
    }

    private static BigInteger GenFactorial(int i) {
        if (i == 0 || i == 1) {
            return BigInteger.ONE;
        } else {
            BigInteger b = BigInteger.valueOf(i);
            return b.multiply(factorial[last]);
        }
    }
}
