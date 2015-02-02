/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package acm;

import java.util.Scanner;

/**
 *
 * @author Imam Ibn Hasan
 */
public class CarmichaelNumbers10006 {
    int n;
    Scanner s = new Scanner(System.in);
    public static void main(String[] args){
        new CarmichaelNumbers10006().run();
    }

    private void run() {
        while((n=s.nextInt())>0){
            if(isPrime(n)){
                System.out.println(n+" is normal.");
            }else if(fermat(n)){
                System.out.println("The number "+n+" is a Carmichael number.");
            }else{
                System.out.println(n+" is normal.");
            }
        }
    }

    private boolean isPrime(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    private boolean fermat(int n) {
        long a,m;
        for(a=2;a<n;a++){
            m=n;
            if(bigMod(a,(long)n,m)!=a){
                return false;
            }
        }
        return true;
    }

    private long bigMod(long a, long n, long m) {
        if(n==0){
            return 1;
        }else if(n%2==0){
            return square(bigMod(a, n/2, m))%m;
        }else{
            return (a%m)*bigMod(a, n-1, m)%m;
        }
    }

    private long square(long x) {
        return x*x;
    }
}
