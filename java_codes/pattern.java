class Pattern {

  public static void main(String[] args) {

    for(int i = 0; i < 4; i++) {

      for(int j = 1; j <=4; j++) {

      if(i+j > 4) {
        System.out.print((j+i) - 4);

      }
      else
          System.out.print(j+i);
      }

      System.out.println();
    }
  }
}
