public class Main {
    public static void main(String[] args) {    
        String str = " hello 1100";    
        int[] freq = new int[str.length()];
        int i, j;
        char s[] = str.toCharArray();
        int n = str.length();
        
        for(i = 0; i < n; i++) {
            System.out.println((int)str.charAt(i));
        }
        
        System.out.println();
        
        for(i = 0; i < n; i++) {    
            freq[i] = 1;
            for(j = i+1; j < n; j++) {    
                if(s[i] == s[j]) {    
                    freq[i]++;    
                    s[j] = '~';
                }
            }
        }
        
        for(i = 0; i < freq.length; i++) {    
            if(s[i] != '~')    // s[i] != ' ' &&
                System.out.println(s[i] + " occurs " + freq[i] + " times.");    
        }
    }
}
