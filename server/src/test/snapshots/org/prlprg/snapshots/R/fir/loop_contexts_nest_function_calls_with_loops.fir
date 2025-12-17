fun main() {
  () -+> V { reg r:cls, reg outer_func:cls, reg r1:V |
    mkenv;
    r = clos inner2708337952;
    st outer_func = r;
    outer_func = ldf outer_func;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn outer_func();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2708337952() {
  () -+> V { reg r:cls, reg r1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg x1:*, reg x2:V, reg inner_func:cls, reg r2:V, reg r3:V, reg x3:*, reg x4:V |
    mkenv;
    r = clos inner2708337952;
    st inner_func = r;
    st x = 0.0;
    r1 = `:`(1.0, 100.0);
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L2() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    x1 = ld x;
    check L3() else D0();
  L2():
    x3 = ld x;
    check L6() else D3();
  D0():
    deopt 10 [i2, x1];
  D3():
    deopt 19 [x3];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    inner_func = ldf inner_func;
    check L4() else D1();
  L6():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D1():
    deopt 12 [i2, x2];
  L4():
    r2 = dyn inner_func();
    check L5() else D2();
  D2():
    deopt 13 [i2, x2, r2];
  L5():
    r3 = `+`(x2, r2);
    st x = r3;
    goto L0(i2);
  }
}