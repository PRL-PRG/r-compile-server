fun main() {
  (reg cond1:L, reg cond2:L) --> I { reg r:I, reg x:I, reg y:I, reg z:I |
    if cond1 then BB1() else BB2();
  BB1():
    r = 42;
    if cond2 then BB3() else BB4();
  BB2():
    x = 24;
    goto BB5();
  BB5():
    return 100;
  BB3():
    #"r dominates this use"
    y = r;
    goto BB5();
  BB4():
    #"r dominates this use"
    z = r;
    goto BB5();
  }
}