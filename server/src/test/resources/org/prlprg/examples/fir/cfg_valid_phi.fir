fun main() {
  () -+> v1(I) {
    r: I = f< B -+> I >(TRUE);
    r2: I = f< B -+> I >(FALSE);
    r3: I = `+`< I,I --> I >(r, r2);
    r3u: v1(I) = box< I --> v1(I) >(r3);
    return r3u;
  }
}

fun f(cond) {
  (reg cond:B) -+> I {
    if cond then BB1() else BB2();
  BB3(phi: I):
    return phi;
  BB1():
    goto BB3(42);
  BB2():
    goto BB3(24);
  }
}
