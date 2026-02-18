fun main() {
  () -+> I { reg r1:I, reg r2:I |
    r1 = f(TRUE);
    r2 = f(FALSE);
    return r1;
  }
}

fun f(cond) {
  (reg cond:L) -+> I { reg r:I, reg x:I, reg y:I |
    r = 42;
    if cond then BB1() else BB2();
  BB1():
    x = r;  # r is defined in dominating block
    return x;
  BB2():
    y = r;  # r is defined in dominating block
    return y;
  }
}