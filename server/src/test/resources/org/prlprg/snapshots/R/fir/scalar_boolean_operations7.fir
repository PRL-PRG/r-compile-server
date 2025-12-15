fun main() {
  () -+> V { reg a:*, reg a1:V, reg c:L, reg c1:V, reg b:*, reg b1:V, reg c3:L, reg c4:V |
    mkenv;
    st a = NA_LGL;
    st b = TRUE;
    a = ld a;
    check L1() else D0();
  D0():
    deopt 6 [a];
  L1():
    a1 = force? a;
    checkMissing(a1);
    c = `as.logical`(a1);
    if c then L0(c) else L2();
  L0(c1):
    popenv;
    return c1;
  L2():
    b = ld b;
    check L3() else D1();
  D1():
    deopt 8 [c, b];
  L3():
    b1 = force? b;
    checkMissing(b1);
    c3 = `as.logical`(b1);
    c4 = `||`(c, c3);
    goto L0(c4);
  }
}