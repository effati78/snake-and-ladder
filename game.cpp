#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#include<windows.h>
#include<ctime>
#include<fstream>

using namespace std;

void chap(int[]);
void chap2(int[]);
void chap3(int);
void gotoxy(int, int);
void mar(int[], int[]);
void pele(int[]);
int optition(int, int, int, int);
void menu(int, int, int, int);
void jadval2();
void a(int, int, int, int, int, int, int, int, int, int, int, int[], int[], int[], int[]);
int tas(int, int, int, int, int, int, int, int, int, int, int, int[], int[], int[], int[]);
void bomb(int, int, int, int, int, int, int, int, int, int, int, int[], int[], int[], int[]);
void harkat(int, int);
void pak(int);
void pak2(int);
void loding();
void About();

ofstream out;
ifstream in ;

int main() {
  int b = 3, k = 3, f = 0, e = 0;
  srand(time(NULL));
  menu(b, k, f, e);
  return 0;
}
int optition(int a, int k, int f, int e) {
  cout << "pleas enter namber bomb\nthe number shoud be between 0 to 5\n";
  cin >> a;
  if (a >= 6) {
    system("cls");
    cout << "the number isn't teru\n";
    optition(a, a, f, e);
  } else {
    if (a <= -1) {
      system("cls");
      cout << "the number isn't teru\n";
      optition(a, a, f, e);
    } else {
      system("cls");
      menu(a, a, f, e);
    }
  }
  return a;
}
void gotoxy(int x, int y) {
  static HANDLE h = NULL;
  if (!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = {
    x,
    y
  };
  SetConsoleCursorPosition(h, c);
}
void jadval2() {
  system("color FC");
  char a;
  for (int i = 0; i < 41; i++) {
    int b;
    b = i % 4;
    if (b == 0) {
      for (int j = 0; j < 81; j++) {
        a = 475;
        cout << a;
      }
      cout << endl;
    } else {
      for (int j = 0; j < 81; j++) {
        int d;
        d = j % 8;
        if (d) {
          a = {};
          cout << a;
        } else {
          a = 475;
          cout << a;
        }
      }
      cout << endl;
    }
  }

}
void a(int b, int k, int d, int s, int f, int e, int q, int w, int r, int t, int h, int u[], int o[], int l[], int z[]) {
  gotoxy(85, 16);
  cout << char(432);
  gotoxy(86, 16);
  cout << char(432);
  gotoxy(87, 16);
  cout << char(432);
  gotoxy(88, 16);
  cout << char(432);
  gotoxy(89, 16);
  cout << char(432);
  gotoxy(90, 16);
  cout << char(432);
  gotoxy(92, 16);
  cout << char(432);
  gotoxy(91, 16);
  cout << char(432);
  gotoxy(93, 16);
  cout << char(432);

  gotoxy(85, 17);
  cout << char(432);
  gotoxy(85, 18);
  cout << char(432);
  gotoxy(85, 19);
  cout << char(432);
  gotoxy(85, 20);
  cout << char(432);

  gotoxy(86, 20);
  cout << char(432);
  gotoxy(87, 20);
  cout << char(432);
  gotoxy(88, 20);
  cout << char(432);
  gotoxy(89, 20);
  cout << char(432);
  gotoxy(90, 20);
  cout << char(432);
  gotoxy(91, 20);
  cout << char(432);
  gotoxy(92, 20);
  cout << char(432);
  gotoxy(93, 20);
  cout << char(432);

  gotoxy(93, 17);
  cout << char(432);
  gotoxy(93, 18);
  cout << char(432);
  gotoxy(93, 19);
  cout << char(432);

  gotoxy(85, 3);
  cout << "1.tas";
  gotoxy(85, 4);
  cout << "2.bomb";
  gotoxy(85, 5);
  cout << "3.save & back";
  gotoxy(85, 6);
  cout << "4.back";
  gotoxy(85, 12);
  cout << "pl 1  @  " << b;
  gotoxy(85, 13);
  cout << "pl 2  #  " << k;
  gotoxy(85, 7);
  int x;
  cin >> x;
  gotoxy(91, 17);
  cout << char {};
  gotoxy(87, 19);
  cout << char {};
  gotoxy(91, 19);
  cout << char {};
  gotoxy(87, 17);
  cout << char {};
  gotoxy(89, 17);
  cout << char {};
  gotoxy(89, 19);
  cout << char {};
  gotoxy(90, 18);
  cout << char {};
  gotoxy(89, 18);
  cout << char {};
  gotoxy(85, 14);
  cout << "                                       ";
  gotoxy(85, 2);
  cout << "                     ";
  gotoxy(86, 7);
  cout << " ";
  switch (x) {
  case 1:
    tas(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    break;
  case 2:
    if (b == 0 && k == 0) {
      gotoxy(85, 14);
      cout << "you don't have bomb";
      a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    } else {
      if (q % 2) {
        if (t <= 3) {
          gotoxy(85, 14);
          cout << "you can't use it";
          a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
        } else {
          if (b == 0) {
            gotoxy(85, 14);
            cout << "you don't have bomb";
            a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
          } else {
            bomb(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
          }
        }
      } else {
        if (h <= 3) {
          gotoxy(85, 14);
          cout << "you can't use it";
          a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
        } else {
          if (k == 0) {
            gotoxy(85, 14);
            cout << "you bon't have bomb";
            a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
          } else {
            bomb(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
          }
        }
      }
    }
    break;
  case 3:
    out.open("save.txt");
    for (int i = 0; i < 14; i++) {
      out << u[i] << " ";
    }
    out << endl;
    for (int j = 0; j < 14; j++) {
      out << o[j] << " ";
    }
    out << endl;
    out << b;
    out << endl;
    out << k;
    out << endl;
    out << d;
    out << endl;
    out << s;
    out << endl;
    out << f;
    out << endl;
    out << e;
    out << endl;
    out << q;
    out << endl;
    out << w;
    out << endl;
    out << r;
    out << endl;
    out << t;
    out << endl;
    out << h;
    out << endl;
    for (int g = 0; g < 5; g++) {
      out << l[g] << " ";
    }
    out << endl;
    for (int e = 0; e < 5; e++) {
      out << z[e] << " ";
    }
    out.close();
    system("cls");
    main();
    break;
  case 4:
    system("cls");
    main();
    break;
  default:
    gotoxy(85, 2);
    cout << "the number isn't true";
    a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    break;
  }
}
int tas(int b, int k, int d, int s, int f, int e, int q, int w, int r, int t, int h, int u[], int o[], int l[], int z[]) {
  srand(time(NULL));
  int n, m;
  n = (rand() % 6) + 1;
  switch (n) {
  case 1:
    gotoxy(89, 18);
    cout << char(298);
    break;
  case 2:
    gotoxy(91, 17);
    cout << char(298);
    gotoxy(87, 19);
    cout << char(298);
    break;
  case 3:
    gotoxy(89, 18);
    cout << char(298);
    gotoxy(91, 17);
    cout << char(298);
    gotoxy(87, 19);
    cout << char(298);
    break;
  case 4:
    gotoxy(91, 17);
    cout << char(298);
    gotoxy(87, 19);
    cout << char(298);
    gotoxy(91, 19);
    cout << char(298);
    gotoxy(87, 17);
    cout << char(298);
    break;
  case 5:
    gotoxy(91, 17);
    cout << char(298);
    gotoxy(87, 19);
    cout << char(298);
    gotoxy(91, 19);
    cout << char(298);
    gotoxy(87, 17);
    cout << char(298);
    gotoxy(89, 18);
    cout << char(298);
    break;
  case 6:
    gotoxy(91, 17);
    cout << char(298);
    gotoxy(87, 19);
    cout << char(298);
    gotoxy(91, 19);
    cout << char(298);
    gotoxy(87, 17);
    cout << char(298);
    gotoxy(89, 17);
    cout << char(298);
    gotoxy(89, 19);
    cout << char(298);
    break;
  }
  if (q % 2) {
    gotoxy(83, 12);
    cout << "$";
    gotoxy(83, 13);
    cout << " ";
    if (w == 1) {
      int c = f + n;
      if (c <= 100) {
        if (n == 6) {
          int j = 0, i = 0;
          while (i < 14) {
            if (u[i] == c) {
              break;
            } else {
              i += 2;
            }
          }
          if (i < 14) {
            pak(f);
            f = u[i + 1];
          } else {
            while (j < 14) {
              if (o[j] == c) {
                break;
              } else {
                j += 2;
              }
            }
            if (j < 14) {
              pak(f);
              f = o[j + 1];
            } else {
              pak(f);
              f += n;
            }
          }
        } else {
          int j = 0, i = 0;
          while (i < 14) {
            if (u[i] == c) {
              break;
            } else {
              i += 2;
            }
          }
          if (i < 14) {
            pak(f);
            f = u[i + 1];
            q++;
          } else {
            while (j < 14) {
              if (o[j] == c) {
                break;
              } else {
                j += 2;
              }
            }
            if (j < 14) {
              pak(f);
              f = o[j + 1];
              q++;
            } else {
              pak(f);
              f += n;
              q++;
            }
          }
        }
        if (f == e) {
          e = 1;
        }
      } else {
        q++;
      }
    } else {
      if (n == 6) {
        gotoxy(87, 39);
        cout << " ";
        w++;
        f++;
      } else {
        q++;
      }
    }
  } else {
    gotoxy(83, 12);
    cout << " ";
    gotoxy(83, 13);
    cout << "$";
    if (r == 1) {
      int c = e + n;
      if (c <= 100) {
        if (n == 6) {
          int j = 0, i = 0;
          while (i < 14) {
            if (u[i] == c) {
              break;
            } else {
              i += 2;
            }
          }
          if (i < 14) {
            pak(e);
            e = u[i + 1];
          } else {
            while (j < 14) {
              if (o[j] == c) {
                break;
              } else {
                j += 2;
              }
            }
            if (j < 14) {
              pak(e);
              e = o[j + 1];
            } else {
              pak(e);
              e += n;
            }
          }
        } else {
          int j = 0, i = 0;
          while (i < 14) {
            if (u[i] == c) {
              break;
            } else {
              i += 2;
            }
          }
          if (i < 14) {
            pak(e);
            e = u[i + 1];
            q++;
          } else {
            while (j < 14) {
              if (o[j] == c) {
                break;
              } else {
                j += 2;
              }
            }
            if (j < 14) {
              pak(e);
              e = o[j + 1];
              q++;
            } else {
              pak(e);
              e += n;
              q++;
            }
          }
        }
        if (e == f) {
          f = 1;
        }
      } else {
        q++;
      }
    } else {
      if (n == 6) {
        gotoxy(85, 39);
        cout << " ";
        r++;
        e++;
      } else {
        q++;
      }
    }
  }
  if (f == 100) {
    system("cls");
    gotoxy(75, 19);
    cout << "pl  1   win";
    Beep(247, 300);
    Beep(330, 300);
    Beep(330, 300);
    Beep(370, 300);
    Beep(555, 300);
    Beep(555, 300);
    Beep(494, 300);
    Beep(440, 300);
    Beep(392, 800);
    Beep(392, 300);
    Beep(370, 300);
    Beep(247, 800);
    Beep(278, 300);
    Beep(294, 300);
    Beep(330, 2600);
    gotoxy(75, 20);
    cout << "1.play again";
    gotoxy(75, 21);
    cout << "2.exit";
    gotoxy(75, 22);
    int x;
    cin >> x;
    switch (x) {
    case 2:
      system("cls");
      exit(0);
    default:
      system("cls");
      main();
      break;
    }
  } else {
    if (e == 100) {
      system("cls");
      gotoxy(75, 19);
      cout << "pl  2   win";
      Beep(247, 300);
      Beep(330, 300);
      Beep(330, 300);
      Beep(370, 300);
      Beep(555, 300);
      Beep(555, 300);
      Beep(494, 300);
      Beep(440, 300);
      Beep(392, 800);
      Beep(392, 300);
      Beep(370, 300);
      Beep(247, 800);
      Beep(278, 300);
      Beep(294, 300);
      Beep(330, 2600);
      gotoxy(75, 20);
      cout << "1.play again";
      gotoxy(75, 21);
      cout << "2.exit";
      gotoxy(75, 22);
      int x;
      cin >> x;
      switch (x) {
      case 2:
        system("cls");
        exit(0);
      default:
        system("cls");
        main();
        break;
      }
    } else {
      if (h == 3) {
        Beep(3000, 1000);
        pak2(s);
        int i;
        for (i = 0; i < 5; i++) {
          if (z[i] == f) {
            break;
          }
        }
        if (i < 5) {
          if (s / 10 == f / 10) {
            pak(f);
            f = 1;
          }
        }
        for (i = 0; i < 5; i++) {
          if (z[i] == e) {
            break;
          }
        }
        if (i < 5) {
          if (s / 10 == e / 10) {
            pak(e);
            e = 1;
          }
        }
        h++;
      } else {
        h++;
      }
      if (t == 3) {
        Beep(3000, 1000);
        pak2(d);
        int i;
        for (i = 0; i < 5; i++) {
          if (l[i] == e) {
            break;
          }
        }
        if (i < 5) {
          if (d / 10 == e / 10) {
            pak(e);
            e = 1;
          }
        }
        for (i = 0; i < 5; i++) {
          if (l[i] == f) {
            break;
          }
        }
        if (i < 5) {
          if (d / 10 == f / 10) {
            pak(f);
            f = 1;
          }
        }
        t++;
      } else {
        t++;
      }
      harkat(f, e);
      a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    }
  }
  return d;
}
void bomb(int b, int k, int d, int s, int f, int e, int q, int w, int r, int t, int h, int u[], int o[], int l[], int z[]) {
  gotoxy(90, 18);
  cout << char {};
  gotoxy(91, 18);
  cout << char {};
  gotoxy(89, 18);
  cout << char {};
  gotoxy(85, 14);
  cout << "which square you want to put your Bomb?";
  if (q % 2) {
    gotoxy(83, 12);
    cout << "$";
    gotoxy(83, 13);
    cout << " ";
    gotoxy(89, 18);
    cin >> d;
    int c = d / 10;
    if (d > 99) {
      gotoxy(85, 14);
      cout << "you should choose square between 2 & 99";
      Sleep(1000);
      bomb(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    } else {
      if (d < 2) {
        gotoxy(85, 14);
        cout << "you should choose square between 2 & 99";
        Sleep(1000);
        bomb(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
      }
    }
    switch (c) {
    case 0:
      gotoxy(4 + (8 * ((d % 10) - 1)), 39);
      cout << "!";
      break;
    case 1:
      if (d % 10 == 0) {
        gotoxy(84 - (8 * ((d % 10) + 1)), 39);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (d % 10)), 35);
        cout << "!";
      }
      break;
    case 2:
      if (d % 10 == 0) {
        gotoxy(4 + (8 * (d % 10)), 35);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((d % 10) - 1)), 31);
        cout << "!";
      }
      break;
    case 3:
      if (d % 10 == 0) {
        gotoxy(84 - (8 * ((d % 10) + 1)), 31);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (d % 10)), 27);
        cout << "!";
      }
      break;
    case 4:
      if (d % 10 == 0) {
        gotoxy(4 + (8 * (d % 10)), 27);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((d % 10) - 1)), 23);
        cout << "!";
      }
      break;
    case 5:
      if (d % 10 == 0) {
        gotoxy(84 - (8 * ((d % 10) + 1)), 23);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (d % 10)), 19);
        cout << "!";
      }
      break;
    case 6:
      if (d % 10 == 0) {
        gotoxy(4 + (8 * (d % 10)), 19);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((d % 10) - 1)), 15);
        cout << "!";
      }
      break;
    case 7:
      if (d % 10 == 0) {
        gotoxy(84 - (8 * ((d % 10) + 1)), 15);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (d % 10)), 11);
        cout << "!";
      }
      break;
    case 8:
      if (d % 10 == 0) {
        gotoxy(4 + (8 * (d % 10)), 11);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((d % 10) - 1)), 7);
        cout << "!";
      }
      break;
    case 9:
      if (d % 10 == 0) {
        gotoxy(84 - (8 * ((d % 10) + 1)), 7);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (d % 10)), 3);
        cout << "!";
      }
      break;
    case 10:
      if (d % 10 == 0) {
        gotoxy(4 + (8 * (d % 10)), 3);
        cout << "!";
        break;
      }
    }
    l[0] = d - 2;
    l[1] = d - 1;
    l[2] = d;
    l[3] = d + 1;
    l[4] = d + 2;
    Beep(500, 500);
    t = 1;
    h++;
    b--;
  } else {
    gotoxy(83, 12);
    cout << " ";
    gotoxy(83, 13);
    cout << "$";
    gotoxy(89, 18);
    cin >> s;
    if (s > 99) {
      gotoxy(85, 14);
      cout << "you should choose square between 2 & 99";
      Sleep(1000);
      bomb(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    } else {
      if (s < 2) {
        gotoxy(85, 14);
        cout << "you should choose square between 2 & 99";
        Sleep(1000);
        bomb(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
      }
    }
    int c = s / 10;
    switch (c) {
    case 0:
      gotoxy(4 + (8 * ((s % 10) - 1)), 39);
      cout << "!";
      break;
    case 1:
      if (s % 10 == 0) {
        gotoxy(84 - (8 * ((s % 10) + 1)), 39);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (s % 10)), 35);
        cout << "!";
      }
      break;
    case 2:
      if (s % 10 == 0) {
        gotoxy(4 + (8 * (s % 10)), 35);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((s % 10) - 1)), 31);
        cout << "!";
      }
      break;
    case 3:
      if (s % 10 == 0) {
        gotoxy(84 - (8 * ((s % 10) + 1)), 31);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (s % 10)), 27);
        cout << "!";
      }
      break;
    case 4:
      if (s % 10 == 0) {
        gotoxy(4 + (8 * (s % 10)), 27);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((s % 10) - 1)), 23);
        cout << "!";
      }
      break;
    case 5:
      if (s % 10 == 0) {
        gotoxy(84 - (8 * ((s % 10) + 1)), 23);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (s % 10)), 19);
        cout << "!";
      }
      break;
    case 6:
      if (s % 10 == 0) {
        gotoxy(4 + (8 * (s % 10)), 19);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((s % 10) - 1)), 15);
        cout << "!";
      }
      break;
    case 7:
      if (s % 10 == 0) {
        gotoxy(84 - (8 * ((s % 10) + 1)), 15);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (s % 10)), 11);
        cout << "!";
      }
      break;
    case 8:
      if (s % 10 == 0) {
        gotoxy(4 + (8 * (s % 10)), 11);
        cout << "!";
      } else {
        gotoxy(4 + (8 * ((s % 10) - 1)), 7);
        cout << "!";
      }
      break;
    case 9:
      if (s % 10 == 0) {
        gotoxy(84 - (8 * ((s % 10) + 1)), 7);
        cout << "!";
      } else {
        gotoxy(84 - (8 * (s % 10)), 3);
        cout << "!";
      }
      break;
    case 10:
      if (s % 10 == 0) {
        gotoxy(4 + (8 * (s % 10)), 3);
        cout << "!";
        break;
      }
    }
    z[0] = s - 2;
    z[1] = s - 1;
    z[2] = s;
    z[3] = s + 1;
    z[4] = s + 2;
    Beep(500, 500);
    h = 1;
    t++;
    k--;
  }
  q++;
  a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
}
void menu(int b, int k, int f, int e) {
  int x, d = 0, s = 0, q = 0, w = 0, r = 0, t = 4, h = 4, u[14] = {
    0
  }, o[14] = {
    0
  }, l[5] = {
    0
  }, z[5] = {
    0
  };
  system("color F0");
  char A = 176;
  gotoxy(72, 19);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(72, 20);
  cout << A << A;
  gotoxy(75, 20);
  cout << "1.Start";
  gotoxy(86, 20);
  cout << A << A;
  gotoxy(72, 21);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(72, 22);
  cout << A << A;
  gotoxy(75, 22);
  cout << "2.Option";
  gotoxy(86, 22);
  cout << A << A;
  gotoxy(72, 23);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(72, 24);
  cout << A << A;
  gotoxy(75, 24);
  cout << "3.Load";
  gotoxy(86, 24);
  cout << A << A;
  gotoxy(72, 25);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(72, 26);
  cout << A << A;
  gotoxy(75, 26);
  cout << "4.About Me";
  gotoxy(86, 26);
  cout << A << A;
  gotoxy(72, 27);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(72, 28);
  cout << A << A;
  gotoxy(75, 28);
  cout << "5.Exit";
  gotoxy(86, 28);
  cout << A << A;
  gotoxy(72, 29);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(72, 30);
  cout << A << A;
  gotoxy(86, 30);
  cout << A << A;
  gotoxy(72, 31);
  cout << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A << A;
  gotoxy(75, 30);
  cin >> x;
  switch (x) {
  case 1:
    system("cls");
    loding();
    system("cls");
    jadval2();
    pele(u);
    mar(o, u);
    a(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    break;
  case 2:
    system("cls");
    optition(b, k, f, e);
  case 3:
    in .open("save.txt");
    for (int i = 0; i < 14; i++) {
      in >> u[i];
    }
    out << endl;
    for (int i = 0; i < 14; i++) {
      in >> o[i];
    }
    out << endl; in >> b;
    out << endl; in >> k;
    out << endl; in >> d;
    out << endl; in >> s;
    out << endl; in >> f;
    out << endl; in >> e;
    out << endl; in >> q;
    out << endl; in >> w;
    out << endl; in >> r;
    out << endl; in >> t;
    out << endl; in >> h;
    out << endl;
    for (int g = 0; g < 5; g++) {
      in >> l[g];
    }
    out << endl;
    for (int e = 0; e < 5; e++) {
      in >> z[e];
    } in .close();
    system("cls");
    loding();
    system("cls");
    jadval2();
    chap(o);
    chap2(u);
    chap3(s);
    chap3(d);
    harkat(f, e);
    tas(b, k, d, s, f, e, q, w, r, t, h, u, o, l, z);
    break;
  case 4:
    system("cls");
    About();
    system("cls");
    menu(b, k, f, e);
  case 5:
    system("cls");
    exit(0);
  default:
    gotoxy(75, 30);
    cout << "Error ...";
    Beep(2000, 500);
    getch();
    system("cls");
    menu(b, k, f, e);
  }
}
void pele(int u[]) {
  int x, y, j = 0;
  while (j < 14) {
    x = (rand() % 97) + 2;
    y = (rand() % ((98 - x) + 1)) + (x + 1);
    int c = x / 10, i = 0;
    while (i < 14) {
      if (u[i] == x) {
        break;
      } else {
        i++;
      }
    }
    if (i < 14) {
      continue;
    }
    if (x == y) {
      continue;
    }
    u[j] = x;
    u[j + 1] = y;
    switch (c) {
    case 0:
      if (x % 10 == 0) {
        continue;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 37);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 37);
        cout << y - x;
      }
      break;
    case 1:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 37);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 37);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 33);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 33);
        cout << y - x;
      }
      break;
    case 2:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 33);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 33);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 29);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 29);
        cout << y - x;
      }
      break;
    case 3:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 29);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 29);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 25);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 25);
        cout << y - x;
      }
      break;
    case 4:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 25);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 25);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 21);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 21);
        cout << y - x;
      }
      break;
    case 5:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 21);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 21);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 17);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 17);
        cout << y - x;
      }
      break;
    case 6:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 17);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 17);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 13);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 13);
        cout << y - x;
      }
      break;
    case 7:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 13);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 13);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 9);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 9);
        cout << y - x;
      }
      break;
    case 8:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 9);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 9);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 5);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 5);
        cout << y - x;
      }
      break;
    case 9:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 5);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 5);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 1);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 1);
        cout << y - x;
      }
      break;
    }
    j += 2;
  }
}
void mar(int o[], int u[]) {
  int a, b, i = 0;
  while (i < 14) {
    int j = 0, g = 0;
    a = (rand() % 98) + 2;
    b = (rand() % (a - 1)) + 2;
    while (j < 14) {
      if (u[j] == a) {
        break;
      } else {
        j++;
      }
    }
    if (j < 14) {
      continue;
    }
    while (g < 14) {
      if (o[g] == a) {
        break;
      } else {
        g++;
      }
    }
    if (g < 14) {
      continue;
    }
    if (a == b) {
      continue;
    }
    o[i] = a;
    o[i + 1] = b;
    int c = a / 10;
    switch (c) {
    case 0:
      gotoxy(2 + (8 * ((a % 10) - 1)), 37);
      cout << "<";
      gotoxy(4 + (8 * ((a % 10) - 1)), 37);
      cout << a - b;
      break;
    case 1:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 37);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 37);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 33);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 33);
        cout << a - b;
      }
      break;
    case 2:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 33);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 33);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 29);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 29);
        cout << a - b;
      }
      break;
    case 3:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 29);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 29);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 25);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 25);
        cout << a - b;
      }
      break;
    case 4:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 25);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 25);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 21);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 21);
        cout << a - b;
      }
      break;
    case 5:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 21);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 21);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 17);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 17);
        cout << a - b;
      }
      break;
    case 6:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 17);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 17);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 13);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 13);
        cout << a - b;
      }
      break;
    case 7:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 13);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 13);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 9);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 9);
        cout << a - b;
      }
      break;
    case 8:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 9);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 9);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 5);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 5);
        cout << a - b;
      }
      break;
    case 9:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 5);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 5);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 1);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 1);
        cout << a - b;
      }
      break;
      i += 2;
    }
    i += 2;
  }
}
void harkat(int f, int e) {
  int c, g;
  c = f / 10;
  g = e / 10;
  switch (c) {
  case 0:
    if (f % 10 == 0) {
      gotoxy(87, 39);
      cout << char(320);
    } else {
      gotoxy(4 + (8 * ((f % 10) - 1)), 38);
      cout << char(320);
    }
    break;
  case 1:
    if (f % 10 == 0) {
      gotoxy(84 - (8 * ((f % 10) + 1)), 38);
      cout << char(320);
    } else {
      gotoxy(84 - (8 * (f % 10)), 34);
      cout << char(320);
    }
    break;
  case 2:
    if (f % 10 == 0) {
      gotoxy(4 + (8 * (f % 10)), 34);
      cout << char(320);
    } else {
      gotoxy(4 + (8 * ((f % 10) - 1)), 30);
      cout << char(320);
    }
    break;
  case 3:
    if (f % 10 == 0) {
      gotoxy(84 - (8 * ((f % 10) + 1)), 30);
      cout << char(320);
    } else {
      gotoxy(84 - (8 * (f % 10)), 26);
      cout << char(320);
    }
    break;
  case 4:
    if (f % 10 == 0) {
      gotoxy(4 + (8 * (f % 10)), 26);
      cout << char(320);
    } else {
      gotoxy(4 + (8 * ((f % 10) - 1)), 22);
      cout << char(320);
    }
    break;
  case 5:
    if (f % 10 == 0) {
      gotoxy(84 - (8 * ((f % 10) + 1)), 22);
      cout << char(320);
    } else {
      gotoxy(84 - (8 * (f % 10)), 18);
      cout << char(320);
    }
    break;
  case 6:
    if (f % 10 == 0) {
      gotoxy(4 + (8 * (f % 10)), 18);
      cout << char(320);
    } else {
      gotoxy(4 + (8 * ((f % 10) - 1)), 14);
      cout << char(320);
    }
    break;
  case 7:
    if (f % 10 == 0) {
      gotoxy(84 - (8 * ((f % 10) + 1)), 14);
      cout << char(320);
    } else {
      gotoxy(84 - (8 * (f % 10)), 10);
      cout << char(320);
    }
    break;
  case 8:
    if (f % 10 == 0) {
      gotoxy(4 + (8 * (f % 10)), 10);
      cout << char(320);
    } else {
      gotoxy(4 + (8 * ((f % 10) - 1)), 6);
      cout << char(320);
    }
    break;
  case 9:
    if (f % 10 == 0) {
      gotoxy(84 - (8 * ((f % 10) + 1)), 6);
      cout << char(320);
    } else {
      gotoxy(84 - (8 * (f % 10)), 2);
      cout << char(320);
    }
    break;
  case 10:
    if (f % 10 == 0) {
      gotoxy(4 + (8 * (f % 10)), 2);
      cout << char(320);
      break;
    }
  }
  switch (g) {
  case 0:
    if (e % 10 == 0) {
      gotoxy(85, 39);
      cout << "#";
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 38);
      cout << "#";
    }
    break;
  case 1:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 38);
      cout << "#";
    } else {
      gotoxy(84 - (8 * (e % 10)), 34);
      cout << "#";
    }
    break;
  case 2:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 34);
      cout << "#";
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 30);
      cout << "#";
    }
    break;
  case 3:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 30);
      cout << "#";
    } else {
      gotoxy(84 - (8 * (e % 10)), 26);
      cout << "#";
    }
    break;
  case 4:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 26);
      cout << "#";
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 22);
      cout << "#";
    }
    break;
  case 5:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 22);
      cout << "#";
    } else {
      gotoxy(84 - (8 * (e % 10)), 18);
      cout << "#";
    }
    break;
  case 6:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 18);
      cout << "#";
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 14);
      cout << "#";
    }
    break;
  case 7:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 14);
      cout << "#";
    } else {
      gotoxy(84 - (8 * (e % 10)), 10);
      cout << "#";
    }
    break;
  case 8:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 10);
      cout << "#";
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 6);
      cout << "#";
    }
    break;
  case 9:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 6);
      cout << "#";
    } else {
      gotoxy(84 - (8 * (e % 10)), 2);
      cout << "#";
    }
    break;
  case 10:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 2);
      cout << "#";
    }
    break;

  }
}
void pak(int e) {
  int g = e / 10;
  switch (g) {
  case 0:
    gotoxy(4 + (8 * ((e % 10) - 1)), 38);
    cout << char {};
    break;
  case 1:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 38);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 34);
      cout << char {};
    }
    break;
  case 2:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 34);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 30);
      cout << char {};
    }
    break;
  case 3:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 30);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 26);
      cout << char {};
    }
    break;
  case 4:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 26);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 22);
      cout << char {};
    }
    break;
  case 5:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 22);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 18);
      cout << char {};
    }
    break;
  case 6:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 18);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 14);
      cout << char {};
    }
    break;
  case 7:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 14);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 10);
      cout << char {};
    }
    break;
  case 8:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 10);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 6);
      cout << char {};
    }
    break;
  case 9:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 6);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 2);
      cout << char {};
    }
    break;
  }
}
void pak2(int e) {
  int g = e / 10;
  switch (g) {
  case 0:
    gotoxy(4 + (8 * ((e % 10) - 1)), 39);
    cout << char {};
    break;
  case 1:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 39);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 35);
      cout << char {};
    }
    break;
  case 2:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 35);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 31);
      cout << char {};
    }
    break;
  case 3:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 31);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 27);
      cout << char {};
    }
    break;
  case 4:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 27);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 23);
      cout << char {};
    }
    break;
  case 5:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 23);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 19);
      cout << char {};
    }
    break;
  case 6:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 19);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 15);
      cout << char {};
    }
    break;
  case 7:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 15);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 11);
      cout << char {};
    }
    break;
  case 8:
    if (e % 10 == 0) {
      gotoxy(4 + (8 * (e % 10)), 11);
      cout << char {};
    } else {
      gotoxy(4 + (8 * ((e % 10) - 1)), 7);
      cout << char {};
    }
    break;
  case 9:
    if (e % 10 == 0) {
      gotoxy(84 - (8 * ((e % 10) + 1)), 7);
      cout << char {};
    } else {
      gotoxy(84 - (8 * (e % 10)), 3);
      cout << char {};
    }
    break;
  }
}
void chap(int o[]) {
  int a, b;
  for (int i = 0; i < 14; i += 2) {
    a = o[i];
    b = o[i + 1];
    int c = a / 10;
    switch (c) {
    case 0:
      gotoxy(2 + (8 * ((a % 10) - 1)), 37);
      cout << "<";
      gotoxy(4 + (8 * ((a % 10) - 1)), 37);
      cout << a - b;
      break;
    case 1:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 37);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 37);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 33);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 33);
        cout << a - b;
      }
      break;
    case 2:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 33);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 33);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 29);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 29);
        cout << a - b;
      }
      break;
    case 3:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 29);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 29);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 25);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 25);
        cout << a - b;
      }
      break;
    case 4:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 25);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 25);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 21);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 21);
        cout << a - b;
      }
      break;
    case 5:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 21);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 21);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 17);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 17);
        cout << a - b;
      }
      break;
    case 6:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 17);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 17);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 13);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 13);
        cout << a - b;
      }
      break;
    case 7:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 13);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 13);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 9);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 9);
        cout << a - b;
      }
      break;
    case 8:
      if (a % 10 == 0) {
        gotoxy(2 + (8 * ((a % 10))), 9);
        cout << ">";
        gotoxy(4 + (8 * (a % 10)), 9);
        cout << a - b;
      } else {
        gotoxy(2 + (8 * ((a % 10) - 1)), 5);
        cout << "<";
        gotoxy(4 + (8 * ((a % 10) - 1)), 5);
        cout << a - b;
      }
      break;
    case 9:
      if (a % 10 == 0) {
        gotoxy(82 - (8 * ((a % 10) + 1)), 5);
        cout << "<";
        gotoxy(84 - (8 * ((a % 10) + 1)), 5);
        cout << a - b;
      } else {
        gotoxy(82 - (8 * (a % 10)), 1);
        cout << ">";
        gotoxy(84 - (8 * (a % 10)), 1);
        cout << a - b;
      }
      break;
      i += 2;
    }
  }
}
void chap2(int u[]) {
  int x, y, c;
  for (int j = 0; j < 14; j += 2) {
    x = u[j];
    y = u[j + 1];
    c = x / 10;
    switch (c) {
    case 0:
      gotoxy(2 + (8 * ((x % 10) - 1)), 37);
      cout << ">";
      gotoxy(4 + (8 * ((x % 10) - 1)), 37);
      cout << y - x;
      break;
    case 1:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 37);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 37);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 33);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 33);
        cout << y - x;
      }
      break;
    case 2:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 33);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 33);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 29);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 29);
        cout << y - x;
      }
      break;
    case 3:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 29);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 29);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 25);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 25);
        cout << y - x;
      }
      break;
    case 4:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 25);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 25);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 21);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 21);
        cout << y - x;
      }
      break;
    case 5:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 21);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 21);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 17);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 17);
        cout << y - x;
      }
      break;
    case 6:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 17);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 17);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 13);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 13);
        cout << y - x;
      }
      break;
    case 7:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 13);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 13);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 9);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 9);
        cout << y - x;
      }
      break;
    case 8:
      if (x % 10 == 0) {
        gotoxy(2 + (8 * ((x % 10))), 9);
        cout << "<";
        gotoxy(4 + (8 * (x % 10)), 9);
        cout << y - x;
      } else {
        gotoxy(2 + (8 * ((x % 10) - 1)), 5);
        cout << ">";
        gotoxy(4 + (8 * ((x % 10) - 1)), 5);
        cout << y - x;
      }
      break;
    case 9:
      if (x % 10 == 0) {
        gotoxy(82 - (8 * ((x % 10) + 1)), 5);
        cout << ">";
        gotoxy(84 - (8 * ((x % 10) + 1)), 5);
        cout << y - x;
      } else {
        gotoxy(82 - (8 * (x % 10)), 1);
        cout << "<";
        gotoxy(84 - (8 * (x % 10)), 1);
        cout << y - x;
      }
      break;
    }
  }
}
void chap3(int d) {
  int c = d / 10;
  switch (c) {
  case 0:
    gotoxy(4 + (8 * ((d % 10) - 1)), 39);
    cout << "!";
    break;
  case 1:
    if (d % 10 == 0) {
      gotoxy(84 - (8 * ((d % 10) + 1)), 39);
      cout << "!";
    } else {
      gotoxy(84 - (8 * (d % 10)), 35);
      cout << "!";
    }
    break;
  case 2:
    if (d % 10 == 0) {
      gotoxy(4 + (8 * (d % 10)), 35);
      cout << "!";
    } else {
      gotoxy(4 + (8 * ((d % 10) - 1)), 31);
      cout << "!";
    }
    break;
  case 3:
    if (d % 10 == 0) {
      gotoxy(84 - (8 * ((d % 10) + 1)), 31);
      cout << "!";
    } else {
      gotoxy(84 - (8 * (d % 10)), 27);
      cout << "!";
    }
    break;
  case 4:
    if (d % 10 == 0) {
      gotoxy(4 + (8 * (d % 10)), 27);
      cout << "!";
    } else {
      gotoxy(4 + (8 * ((d % 10) - 1)), 23);
      cout << "!";
    }
    break;
  case 5:
    if (d % 10 == 0) {
      gotoxy(84 - (8 * ((d % 10) + 1)), 23);
      cout << "!";
    } else {
      gotoxy(84 - (8 * (d % 10)), 19);
      cout << "!";
    }
    break;
  case 6:
    if (d % 10 == 0) {
      gotoxy(4 + (8 * (d % 10)), 19);
      cout << "!";
    } else {
      gotoxy(4 + (8 * ((d % 10) - 1)), 15);
      cout << "!";
    }
    break;
  case 7:
    if (d % 10 == 0) {
      gotoxy(84 - (8 * ((d % 10) + 1)), 15);
      cout << "!";
    } else {
      gotoxy(84 - (8 * (d % 10)), 11);
      cout << "!";
    }
    break;
  case 8:
    if (d % 10 == 0) {
      gotoxy(4 + (8 * (d % 10)), 11);
      cout << "!";
    } else {
      gotoxy(4 + (8 * ((d % 10) - 1)), 7);
      cout << "!";
    }
    break;
  case 9:
    if (d % 10 == 0) {
      gotoxy(84 - (8 * ((d % 10) + 1)), 7);
      cout << "!";
    } else {
      gotoxy(84 - (8 * (d % 10)), 3);
      cout << "!";
    }
    break;
  case 10:
    if (d % 10 == 0) {
      gotoxy(4 + (8 * (d % 10)), 3);
      cout << "!";
      break;
    }
  }
}
void loding() {
  system("color f0");
  char a[20];
  for (int i = 0; i < 20; i++) {
    a[i] = char(475);
  }
  int i = 0;
  while (i < 10) {
    gotoxy(75, 19);
    cout << "start to:      " << i;
    i++;
    gotoxy(77, 20);
    for (int j = 0; j < i; j++) {
      cout << a[j];
      Sleep(50);
    }

  }
}
void About() {
  char a;
  cout << "\n I'm Reza and I'm programmer" << endl;
  cout << " you can tell me in : github \"effati78\" " << endl;
  Sleep(700);
  cout << "\n P";
  Sleep(400);
  cout << "r";
  Sleep(400);
  cout << "e";
  Sleep(400);
  cout << "s";
  Sleep(400);
  cout << "s";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << "a";
  Sleep(400);
  cout << "n";
  Sleep(400);
  cout << "y";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << "k";
  Sleep(400);
  cout << "e";
  Sleep(400);
  cout << "y";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << "t";
  Sleep(400);
  cout << "o";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << "c";
  Sleep(400);
  cout << "o";
  Sleep(400);
  cout << "n";
  Sleep(400);
  cout << "t";
  Sleep(400);
  cout << "i";
  Sleep(400);
  cout << "n";
  Sleep(400);
  cout << "u";
  Sleep(400);
  cout << "e";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << ".";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << ".";
  Sleep(400);
  cout << " ";
  Sleep(400);
  cout << ".";
  Sleep(400);
  getch();
}
