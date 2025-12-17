fun main() {
  () -+> V { reg x:*, reg x1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x2:V |
    mkenv;
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    x = ld x;
    check L2() else D0();
  D0():
    deopt 3 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    s = toForSeq(x1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L3() else L1();
  L1():
    x2 = `[[`(s, i2, NULL, TRUE);
    st i = x2;
    goto L0(i2);
  L3():
    setInvisible.0();
    popenv;
    return i2;
  }
}