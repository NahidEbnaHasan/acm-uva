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
public class FibonacciNumbers10579 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        BigInteger fibos[] = new BigInteger[5001];
        fibos[0] = BigInteger.ZERO;
        fibos[1] = BigInteger.ONE;
        
        for(int i=2;i<4786;i++){
            fibos[i]=fibos[i-2].add(fibos[i-1]);
            //System.out.println(fibos[i]);
        }
        while(s.hasNextInt()){
            n = s.nextInt();
            System.out.println(fibos[n]);
            //countDigits(fibos[n]);
        }
    }

    /*private static void countDigits(BigInteger b) {
        int count=0;
        while(b.compareTo(BigInteger.ZERO)==1){
            b=b.divide(BigInteger.TEN);
            count++;
        }
        System.out.println(count);
    }*/
}
