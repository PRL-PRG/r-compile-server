fun main(...) {
  (reg cond:L) --> I { reg r1:I, reg r2:I, reg phi:I |
    if cond then BB1() else BB2();
  BB1():
    r1 = 42;
    goto BB3(r1);
  BB2():
    r2 = 24;
    goto BB3(r2);
  BB3(phi):
    return phi;
  }
}