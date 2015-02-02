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
public class LeapYearNotLY10070 {  
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        BigInteger y;
        boolean newLine=false;
        while(s.hasNextBigInteger()){
            y=s.nextBigInteger();
            
            boolean leapYear=false;
            boolean huluculu=false;
            boolean buluculu=false;
            
            if((y.mod(BigInteger.valueOf(4)).compareTo(BigInteger.ZERO)==0 && y.mod(BigInteger.valueOf(100)).compareTo(BigInteger.ZERO)!=0) 
                || y.mod(BigInteger.valueOf(400)).compareTo(BigInteger.ZERO)==0){
                leapYear=true;
            }
            if(y.mod(BigInteger.valueOf(15)).compareTo(BigInteger.ZERO)==0){
                huluculu=true;
            }
            if(y.mod(BigInteger.valueOf(55)).compareTo(BigInteger.ZERO)==0 && leapYear){
                buluculu=true;
            }
            
            if(newLine){
                System.out.println("");
            }
            if(leapYear){
                System.out.println("This is leap year.");
            }
            if(huluculu){
                System.out.println("This is huluculu festival year.");
            }
            if(buluculu){
                System.out.println("This is bulukulu festival year.");
            }
            if(!leapYear && !huluculu && !buluculu){
                System.out.println("This is an ordinary year.");
            }
            if(!newLine){
                newLine=true;
            }
        }
    }
}
