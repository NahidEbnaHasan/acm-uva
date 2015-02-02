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
public class FibonacciFreeze495 {
    
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        BigInteger fibos[] = new BigInteger[5001];
        fibos[0] = BigInteger.ZERO;
        fibos[1] = BigInteger.ONE;
        
        for(int i=2;i<5001;i++){
            fibos[i]=fibos[i-2].add(fibos[i-1]);
            //System.out.println(fibos[i]);
        }
        while(s.hasNextInt()){
            n = s.nextInt();
            System.out.println("The Fibonacci number for " + n + " is " + fibos[n]);
        }
    }
}
