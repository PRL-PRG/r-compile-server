fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3266289877;
    st replaceRdSrcrefs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3266289877(Rd, srcref) {
  (reg Rd:*, reg srcref:*) -+> V { var Rd:*, var srcref:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg Rd1:*, reg Rd2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg srcref1:*, reg srcref2:V, reg l:*, reg attr__:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg Rd3:*, reg Rd4:V, reg is_list:cls, reg r9:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg Rd5:*, reg Rd6:V, reg r12:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg replaceRdSrcrefs:cls, reg Rd7:*, reg Rd8:V, reg c4:L, reg Rd10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r13:V, reg p:p(V +), reg srcref4:*, reg srcref5:V, reg p1:p(V +), reg r16:V, reg l2:*, reg c5:L, reg i8:I, reg r18:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r21:V, reg Rd11:*, reg Rd12:V |
    mkenv;
    st Rd = Rd;
    st srcref = srcref;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L17() else L2();
  L11():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r = dyn base(<lang attr(Rd, "srcref")>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L13():
    Rd1 = ld Rd;
    check L15() else D0();
  L14():
    r2 = dyn base1(<sym Rd>, "srcref");
    goto L1(r2);
  L17():
    srcref1 = ld srcref;
    check L18() else D2();
  D0():
    deopt 3 [Rd1];
  D2():
    deopt 10 [srcref1];
  L4(r8):
    c2 = `as.logical`(r8);
    if c2 then L26() else L5();
  L15():
    Rd2 = force? Rd1;
    checkMissing(Rd2);
    attr = ldf attr in base;
    r4 = dyn attr(Rd2, "srcref");
    check L16() else D1();
  L18():
    srcref2 = force? srcref1;
    checkMissing(srcref2);
    l = ld Rd;
    attr__ = ldf `attr<-`;
    check L19() else D3();
  L22():
    Rd3 = ld Rd;
    check L24() else D5();
  L23():
    r7 = dyn base2(<sym Rd>);
    goto L4(r7);
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [srcref2, l, srcref2];
  D5():
    deopt 22 [Rd3];
  L5():
    goto L10();
  L10():
    Rd11 = ld Rd;
    check L38() else D11();
  L16():
    goto L1(r4);
  L19():
    r6 = dyn attr__(l, NULL, "srcref", srcref2);
    check L20() else D4();
  L24():
    Rd4 = force? Rd3;
    checkMissing(Rd4);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(Rd4);
    check L25() else D6();
  L26():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  D4():
    deopt 16 [srcref2, r6];
  D6():
    deopt 25 [r9];
  D11():
    deopt 45 [Rd11];
  L6(r11):
    s = toForSeq(r11);
    l1 = length(s);
    i = 0;
    goto L7(i);
  L20():
    st Rd = r6;
    goto L3();
  L25():
    goto L4(r9);
  L27():
    Rd5 = ld Rd;
    check L29() else D7();
  L28():
    r10 = dyn base3(<sym Rd>);
    goto L6(r10);
  L38():
    Rd12 = force? Rd11;
    checkMissing(Rd12);
    popenv;
    return Rd12;
  D7():
    deopt 27 [Rd5];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l1, i2);
    if c3 then L30() else L9();
  L29():
    Rd6 = force? Rd5;
    checkMissing(Rd6);
    r12 = seq_along(Rd6);
    goto L6(r12);
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    replaceRdSrcrefs = ldf replaceRdSrcrefs;
    check L31() else D8();
  L30():
    goto L10();
  D8():
    deopt 31 [i2];
  L31():
    p = prom<V +>{
      Rd7 = ld Rd;
      Rd8 = force? Rd7;
      checkMissing(Rd8);
      c4 = `is.object`(Rd8);
      if c4 then L1() else L2(Rd8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", Rd8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(Rd10):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r13 = dyn __(Rd10, i6);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      srcref4 = ld srcref;
      srcref5 = force? srcref4;
      checkMissing(srcref5);
      return srcref5;
    };
    r16 = dyn replaceRdSrcrefs(p, p1);
    check L32() else D9();
  D9():
    deopt 34 [i2, r16];
  L32():
    l2 = ld Rd;
    c5 = `is.object`(l2);
    if c5 then L33() else L34(i2, r16, l2);
  L8(i10, dx3):
    st Rd = dx3;
    goto L7(i10);
  L33():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, r16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(i2, r16, dr2);
  L34(i8, r18, l4):
    i11 = ld i;
    check L36() else D10();
  D10():
    deopt 36 [i8, r18, l4, r16, i11];
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i2, dx2);
  L36():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r21 = dyn ____(l4, r16, i12);
    goto L8(i8, r21);
  }
}