fun main() {
  () -+> I { reg r1:I, reg r2:I, reg r3:I, reg r4:I |
    r1 = f(TRUE, TRUE);
    r2 = f(TRUE, FALSE);
    r3 = f(FALSE, TRUE);
    r4 = f(FALSE, FALSE);
    return r1;
  }
}

fun f(cond1, cond2) {
  (reg cond1:L, reg cond2:L) -+> I { reg r:I, reg x:I, reg y:I, reg z:I |
    if cond1 then BB1() else BB2();
  BB1():
    r = 42;
    if cond2 then BB3() else BB4();
  BB2():
    x = 24;
    goto BB5();
  BB3():
    # r dominates this use
    y = r;
    goto BB5();
  BB4():
    # r dominates this use
    z = r;
    goto BB5();
  BB5():
    return 100;
  }
}