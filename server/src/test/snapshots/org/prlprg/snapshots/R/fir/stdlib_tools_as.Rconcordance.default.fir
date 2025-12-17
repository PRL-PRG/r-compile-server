fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.Rconcordance.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sub:cls, reg sub1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg grep:cls, reg s:*, reg s1:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg s2:*, reg s3:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg stringToConcordance:cls, reg s4:*, reg s5:V, reg c1:L, reg s7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg s8:*, reg s9:V, reg c2:L, reg s11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r15:V, reg s12:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x3:V, reg addConcordance:cls, reg result:*, reg result1:V, reg p4:p(V +), reg line:*, reg line1:V, reg p5:p(V +), reg r18:V, reg result2:*, reg result3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sub = ldf sub;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      sub1 = ldf sub;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn sub1("[^[:digit:]]*$", "", p);
      return r1;
    };
    r3 = dyn sub("^.*(concordance){1}?", "concordance", p1);
    check L7() else D1();
  D1():
    deopt 5 [r3];
  L7():
    st s = r3;
    grep = ldf grep;
    check L8() else D2();
  D2():
    deopt 8 [];
  L8():
    p2 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r5 = dyn grep[, , value]("^concordance:", p2, TRUE);
    check L9() else D3();
  D3():
    deopt 13 [r5];
  L9():
    st s = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L14() else L1();
  L10():
    s2 = ld s;
    check L12() else D4();
  L11():
    r6 = dyn base(<sym s>);
    goto L0(r6);
  D4():
    deopt 17 [s2];
  L1():
    stringToConcordance = ldf stringToConcordance;
    check L17() else D6();
  L12():
    s3 = force? s2;
    checkMissing(s3);
    length = ldf length in base;
    r8 = dyn length(s3);
    check L13() else D5();
  L14():
    popenv;
    return NULL;
  D5():
    deopt 20 [r8];
  D6():
    deopt 28 [];
  L13():
    goto L0(r8);
  L17():
    p3 = prom<V +>{
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      c1 = `is.object`(s5);
      if c1 then L1() else L2(s5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", s5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(s7):
      __ = ldf `[` in base;
      r12 = dyn __(s7, 1.0);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn stringToConcordance(p3);
    check L18() else D7();
  D7():
    deopt 30 [r14];
  L18():
    st result = r14;
    s8 = ld s;
    check L19() else D8();
  D8():
    deopt 32 [s8];
  L19():
    s9 = force? s8;
    checkMissing(s9);
    c2 = `is.object`(s9);
    if c2 then L20() else L21(s9);
  L3(dx3):
    s12 = toForSeq(dx3);
    l = length(s12);
    i = 0;
    goto L4(i);
  L20():
    dr2 = tryDispatchBuiltin.1("[", s9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(s11):
    __1 = ldf `[` in base;
    r15 = dyn __1(s11, -1.0);
    goto L3(r15);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L23() else L5();
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L5():
    x3 = `[[`(s12, i2, NULL, TRUE);
    st line = x3;
    addConcordance = ldf addConcordance;
    check L24() else D9();
  L23():
    result2 = ld result;
    check L26() else D11();
  D9():
    deopt 38 [i2];
  D11():
    deopt 46 [result2];
  L24():
    p4 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    p5 = prom<V +>{
      line = ld line;
      line1 = force? line;
      checkMissing(line1);
      return line1;
    };
    r18 = dyn addConcordance(p4, p5);
    check L25() else D10();
  L26():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D10():
    deopt 41 [i2, r18];
  L25():
    st result = r18;
    goto L4(i2);
  }
}