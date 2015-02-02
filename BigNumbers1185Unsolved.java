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
public class BigNumbers1185Unsolved {
    static Scanner s = new Scanner(System.in);
    static BigInteger[] factorial = new BigInteger[10001];
    public static void main(String[] args){
        int t,n;
        int i,j,k,l;
        BigInteger b1,temp,ZERO,ONE,TEN;
        ZERO=BigInteger.ZERO;
        ONE=BigInteger.ONE;
        TEN=BigInteger.TEN;
        factorial[0]=ONE;
        factorial[1]=ONE;
        
        for (i = 2; i < 10001; i++) {
            temp=BigInteger.valueOf(i);
            factorial[i]=temp.multiply(factorial[i-1]);
        }
        t=s.nextInt();
        while(t>0){
            n=s.nextInt();
            if(n<10000){
                b1=factorial[n];
                System.out.println(b1);
                //String str=b1.toString();
                //System.out.println(str.length());
            }else{
                for(i=10001;i<n+1;i++){
                    temp=BigInteger.valueOf(i);
                    factorial[10000]=temp.multiply(factorial[10000]);
                }
                System.out.println(factorial[10000]);
            }
            t--;
        }
    }
}
