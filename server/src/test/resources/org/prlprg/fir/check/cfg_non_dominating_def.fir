fun main {
  (reg cond:L) --> I { reg r:I, reg x:I |
    if cond then BB1() else BB2();
  BB1():
    # cfg-error: Local register r assigned after use(s)
    r = 42;
    goto BB3();
  BB2():
    goto BB3();
  BB3():
    # cfg-error: Local register r used before assignment
    x = r;  # r is not defined in BB2 path, so doesn't dominate
    return x;
  }
}