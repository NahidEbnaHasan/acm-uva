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
public class Product10106 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        BigInteger n1,n2;
        while(s.hasNextBigInteger()){
            n1=s.nextBigInteger();
            n2=s.nextBigInteger();
            System.out.println(n1.multiply(n2));
        }
    }
}
