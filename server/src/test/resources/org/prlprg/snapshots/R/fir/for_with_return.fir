fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner560854305;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner560854305() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V |
    mkenv;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l = length(s);
    i = 0;
    i2 = `+`.1(i, 1);
    c = `<`.1(l, i2);
    if c then L2() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L3() else D0();
  L2():
    invisible.0();
    popenv;
    return i2;
  D0():
    deopt 2 [i2, i5];
  L3():
    i6 = force? i5;
    checkMissing(i6);
    popenv;
    return i6;
  }
}