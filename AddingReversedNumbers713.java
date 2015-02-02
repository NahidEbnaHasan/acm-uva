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
public class AddingReversedNumbers713 {
    public static void main(String args[]){
        
        int t;
        String s;
        BigInteger ONE=BigInteger.ONE;
        BigInteger TEN=BigInteger.TEN;
        BigInteger ZERO=BigInteger.ZERO;
        BigInteger b1,b2,b3,b4,b5,b6,temp;
        Scanner scan=new Scanner(System.in);
        t=scan.nextInt();
        for(int i=0;i<t;i++){
            b1=scan.nextBigInteger();
            b2=scan.nextBigInteger();
            b3=ZERO;
            b4=ZERO;
            while(b1.compareTo(ZERO)==1){
                temp=b1.mod(TEN);
                b3=b3.multiply(TEN).add(temp);
                b1=b1.divide(TEN);
            }
            while(b2.compareTo(ZERO)==1){
                temp=b2.mod(TEN);
                b4=b4.multiply(TEN).add(temp);
                b2=b2.divide(TEN);
            }
            b5=b3.add(b4);
            b6=ZERO;
            while(b5.compareTo(ZERO)==1){
                temp=b5.mod(TEN);
                b6=b6.multiply(TEN).add(temp);
                b5=b5.divide(TEN);
            }
            System.out.println(b6);
        }
    }
}
