import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Floor_Division {

  public static void main(String[] args) throws IOException {

      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int t = Integer.parseInt(br.readLine());

      long[] winners = new long[t];

      for(int j = 0; j < t; j++) {
        int n  = Integer.parseInt(br.readLine());
        String[] numbers_on_borad = br.readLine().split(" ");
        long[] numbers = new long[n];
        int even_numbers = 0;


        for(int i = 0;  i < n; i++)
          numbers[i] = Long.parseLong(numbers_on_borad[i]);

        for(int i = 0; i < n; i++) {
          if(numbers[i]%2 == 0)
            even_numbers++;
        }

        if(n%2 == 0 && even_numbers%2 == 1)
            winners[j] = 1;
        else if(n%2 == 1 && even_numbers%2 == 0)
            winners[j] = 2;
      }

      for(int i = 0; i < t; i++) {
        if(winners[i] == 1)
          System.out.println("Henry");
        else
          System.out.println("Derek");
    }
  }
}
