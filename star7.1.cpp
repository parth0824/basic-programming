#include <
        int n;cin>>n;
        for (int i = 0; i < n / 2 + 1; i++) {
            int x = i + 1;
            for (int j = 0; j < n; j++) {
                if (n - (2 * i) - 1 <= j && n - 1 - i >= j) {
                    System.out.print(x + " ");
                    x--;
                } else {
                    System.out.print("  ");
                }
            }

            x = 1;
            for (int j = n - 1 - 1; j >= 0; j--) {
                if (n - (2 * i) - 1 <= j && n - 1 - i >= j) {
                    System.out.print(x + " ");
                    x++;
                } else {
                    System.out.print("  ");
                }
            }

            System.out.println();
        }
        for (int i = 1; i < n / 2 + 1; i++) {
            int s = n / 2 - i + 1;
            for (int j = 0; j < n; j++) {
                if (j >= i * 2 && j <= n / 2 + i) {
                    System.out.print(s + " ");
                    s--;
                } else {
                    System.out.print("  ");
                }
            }
            s = 1;
            for (int j = n - 2; j >= 0; j--) {
                if (j >= i * 2 && j <= n / 2 + i) {
                    System.out.print(s + " ");
                    s++;
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

}
