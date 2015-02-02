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
public class ILoveBigNumbers10220 {
    Scanner s = new Scanner(System.in);
    public static void main(String[] args){
        new ILoveBigNumbers10220().run();
    }

    private void run() {      
        int n;
        BigInteger b1,b2;
        while(s.hasNextInt()){
            n=s.nextInt();
            b1=getFactorial(n);
            System.out.println(b1);
            b2=BigInteger.ZERO;
            while(b1.compareTo(BigInteger.ZERO) == 1){
                //System.out.println("b1="+b1.mod(BigInteger.TEN));
                b2=b2.add(b1.mod(BigInteger.TEN));
                //System.out.println("b2="+b2);
                b1=b1.divide(BigInteger.TEN);
                //System.out.println("b1="+b1);
            }
            System.out.println(b2);
        }
    }

    private BigInteger getFactorial(int n) {
        BigInteger f=BigInteger.valueOf(n);
        while(n>1){
            f=f.multiply(BigInteger.valueOf(--n));
        }
        return f;
    }
}
