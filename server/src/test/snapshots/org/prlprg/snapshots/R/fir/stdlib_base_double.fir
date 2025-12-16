fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg double:cls, reg r5:V, reg r6:V, reg all:cls, reg r7:V |
    mkenv;
    r = clos `inner-497502118`;
    st double = r;
    sym = ldf `is.double`;
    base = ldf `is.double` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L2():
    c = `is.double`(1.0);
    goto L0();
  L3():
    r1 = dyn base(1.0);
    goto L0();
  L1(r4):
    popenv;
    return r4;
  L4():
    double = ldf double;
    check L6() else D0();
  L5():
    r3 = dyn base1(<lang `==`(double(3.0), 0.0)>);
    goto L1(r3);
  D0():
    deopt 10 [];
  L6():
    r5 = dyn double(3.0);
    check L7() else D1();
  D1():
    deopt 12 [r5];
  L7():
    r6 = `==`(r5, 0.0);
    all = ldf all in base;
    r7 = dyn all(r6);
    check L8() else D2();
  D2():
    deopt 16 [r7];
  L8():
    goto L1(r7);
  }
}
fun `inner-497502118`(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    length1 = ld length;
    check L4() else D0();
  L3():
    r = dyn base(<lang vector("double", length)>);
    goto L1(r);
  D0():
    deopt 3 [length1];
  L4():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector("double", length2);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    goto L1(r2);
  }
}