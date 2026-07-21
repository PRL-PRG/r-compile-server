fun main() {
  () --> v1(I) {
    r: I = f< B --> I >(TRUE);
    r2: I = f< B --> I >(FALSE);
    r3: I = `+`< I,I --> I >(r, r2);
    r3u: v1(I) = box< I --> v1(I) >(r3);
    return r3u;
  }
}

fun f(cond) {
  (reg cond:B) --> I {
    if cond then BB1() else BB2();
  BB1():
    # r is defined (a real, non-constant register) only on this path...
    # cfg-error: Local register r assigned after use(s)
    r: I = f< B --> I >(cond);
    goto BB3();
  BB2():
    goto BB3();
  BB3():
    # ...so it doesn't dominate this use (no def on the BB2 path).
    # cfg-error: Local register r used before assignment
    # prov-error: Read before write: r
    return r;
  }
}
