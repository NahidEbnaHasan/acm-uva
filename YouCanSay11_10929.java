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
public class YouCanSay11_10929 {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String l;
        BigInteger bigInt;
        while(s.hasNextLine()){
            l=s.nextLine();
            bigInt = new BigInteger(l);
            if(bigInt.compareTo(BigInteger.ZERO)==0){
                break;
            }else if(bigInt.mod(BigInteger.valueOf(11)).compareTo(BigInteger.ZERO)==0){
                System.out.println(l+" is a multiple of 11.");
            }else{
                System.out.println(l+" is not a multiple of 11.");
            }
        }
    }
}
