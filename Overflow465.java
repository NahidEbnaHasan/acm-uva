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
public class Overflow465 {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        char op=' ';
        String str;
        int sLen,begIndx1,endIndx1,begIndx2,endIndx2;
        BigInteger bigNum1,bigNum2,res;
        BigInteger INT=BigInteger.valueOf(2147483647);
        while(s.hasNextLine()){
            str=s.nextLine();
            sLen=str.length();
            begIndx1=0;
            endIndx1=0;
            begIndx2=0;
            endIndx2=sLen;
            for(int i=0;i<sLen;i++){
                if(str.charAt(i)=='+' || str.charAt(i)=='*'){
                    op=str.charAt(i);
                    endIndx1=i-1;
                    begIndx2=i+2;
                    break;
                }
            }
            //System.out.println(str.substring(begIndx1, endIndx1)+" "+str.substring(begIndx2, endIndx2));
            bigNum1= new BigInteger(str.substring(begIndx1, endIndx1));
            bigNum2 = new BigInteger(str.substring(begIndx2, endIndx2));
            System.out.println(str.substring(begIndx1, endIndx1)+" "+op+" "+str.substring(begIndx2, endIndx2));
            if(bigNum1.compareTo(INT)==1){
                System.out.println("first number too big");
            }
            if(bigNum2.compareTo(INT)==1){
                System.out.println("second number too big");
            }
            if(op=='+'){
                res=bigNum1.add(bigNum2);
                //System.out.println(res);
                if(res.compareTo(INT)==1){
                    System.out.println("result too big");
                }
            }else{
                res=bigNum1.multiply(bigNum2);
                //System.out.println(res);
                if(res.compareTo(INT)==1){
                    System.out.println("result too big");
                }
            }
        }
    }
}
