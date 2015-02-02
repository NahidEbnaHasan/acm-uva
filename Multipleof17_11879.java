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
public class Multipleof17_11879 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int d,len;
        String s;
        BigInteger b,ZERO,SEVENTEEN;
        ZERO=BigInteger.ZERO;
        SEVENTEEN=BigInteger.valueOf(17);
        while(sc.hasNextLine()){
            s=sc.nextLine();
            b= new BigInteger(s);
            if(s.contentEquals("0")){
                break;
            }else if(b.compareTo(SEVENTEEN)<0){
                System.out.println("0");
            }else{
                len=s.length();
                d=s.charAt(len-1)-48;
                s=s.substring(0, len-1);
                //System.out.println(s);
                d=d*5;
                //System.out.println(d);
                b = new BigInteger(s);
                b=b.subtract(BigInteger.valueOf(d));
                if(b.mod(SEVENTEEN).compareTo(ZERO)==0){
                    System.out.println("1");
                }else{
                    System.out.println("0");
                }
            }
        }
    }
}
