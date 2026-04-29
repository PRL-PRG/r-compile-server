fun main() {
  () --> v1(I) { reg r:I, reg r2:I, reg r3:I, reg r3u:v1(I) |
    r = f< B --> I >(TRUE);
    r2 = f< B --> I >(FALSE);
    r3 = `+`< I,I --> I >(r, r2);
    r3u = box< I --> v1(I) >(r3);
    return r3u;
  }
}

fun f(cond) {
  (reg cond:B) --> I { reg r:I, reg x:I |
    if cond then BB1() else BB2();
  BB1():
    # cfg-error: Local register r assigned after use(s)
    r = 42;
    goto BB3();
  BB2():
    goto BB3();
  BB3():
    # cfg-error: Local register r used before assignment
    # prov-error: Read before write: r
    x = r;  # r is not defined in BB2 path, so doesn't dominate
    return x;
  }
}