fun main() {
  () -+> v1(I) { reg r:I, reg r2:I, reg r3:I, reg r3u:v1(I) |
    r = f< B -+> I >(TRUE);
    r2 = f< B -+> I >(FALSE);
    r3 = `+`< I,I --> I >(r, r2);
    r3u = box< I --> v1(I) >(r3);
    return r3u;
  }
}

fun f(cond) {
  (reg cond:B) -+> I { reg r:I, reg x:I, reg y:I |
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