
import java.math.BigInteger;
import java.util.*;
public class main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger[] fib = new BigInteger[5002];
		
		BigInteger a = fib[0] = BigInteger.valueOf(0);
        BigInteger b = fib[1] = BigInteger.valueOf(1);
        for(int i = 2; i < 5002; i++){
        	fib[i] = fib[i-1].add(fib[i-2]);
        }
        int num;
        while(in.hasNext()){
        	num = in.nextInt();
    		for(int i = 0; i < 5002; i++){
    			if(i == num)
    				System.out.println("The Fibonacci number for " + i + " is " + fib[i]);
    		}
        }
	}
}
