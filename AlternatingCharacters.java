import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class AlternatingCharacters {

    public static int deleteChars(String s){
        int num_deletions = 0;
        for(int i = 0; i < s.length() - 1; i++){
            if(s.charAt(i) == s.charAt(i+1)){
                String modifiedS = s.substring(0,i) + s.substring(i+1);
                num_deletions = deleteChars(modifiedS) + 1;
            }
        }

        return num_deletions;

    }

    public static int fastCount(String s){
        int deleteCounter = 0;
        for(int i = 0; i < s.length() - 1; i++){
            if(s.charAt(i) == s.charAt(i+1)){
                deleteCounter++;
            }
        }
        return deleteCounter;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner scan = new Scanner(System.in);

        int numWords = scan.nextInt();
        // consume line break
        scan.nextLine();

        while(numWords != 0){
            String word = scan.nextLine();
            if(word.length() > 1){
                //int numDeletions = deleteChars(word);
                //System.out.println(numDeletions);
                System.out.println(fastCount(word));
                numWords--;
            }
            else{
                System.out.println(0);
            }
        }

    }
}