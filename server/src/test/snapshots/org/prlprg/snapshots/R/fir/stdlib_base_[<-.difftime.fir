fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1308555555`;
    st `[<-.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1308555555`(x, i, value) {
  (reg x:*, reg i:*, reg value:*) -+> V { var x:*, var i:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg inherits:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg units:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r6:V, reg units1:cls, reg value3:*, reg value4:V, reg p1:p(V +), reg r8:V, reg identical:cls, reg r9:V, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg units2:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r12:V, reg l:*, reg units__:cls, reg r13:V, reg NextMethod:cls, reg r15:V |
    mkenv;
    st x = x;
    st i = i;
    st value = value;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1(c);
  L5():
    value1 = ld value;
    check L7() else D0();
  L6():
    r = dyn base(<sym value>, "difftime");
    goto L0(r);
  D0():
    deopt 2 [value1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L18() else L3();
  L7():
    value2 = force? value1;
    checkMissing(value2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(value2, "difftime", FALSE);
    check L8() else D1();
  L9():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 7 [r2];
  L2(c5, r4):
    r10 = `!`(r4);
    c6 = `as.logical`(r10);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    NextMethod = ldf NextMethod;
    check L24() else D11();
  L8():
    goto L0(r2);
  L10():
    units = ldf units;
    check L12() else D2();
  L11():
    r3 = dyn base1(<lang units(x)>, <lang units(value)>);
    goto L2(c, r3);
  L18():
    units2 = ldf units;
    check L19() else D7();
  D2():
    deopt 11 [c];
  D7():
    deopt 30 [];
  D11():
    deopt 41 [];
  L12():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn units(p);
    check L13() else D3();
  L19():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn units2(p2);
    check L20() else D8();
  L24():
    r15 = dyn NextMethod("[<-");
    check L25() else D12();
  D3():
    deopt 13 [c, r6];
  D8():
    deopt 32 [r12];
  D12():
    deopt 43 [r15];
  L13():
    units1 = ldf units;
    check L14() else D4();
  L20():
    l = ld value;
    units__ = ldf `units<-`;
    check L21() else D9();
  L25():
    popenv;
    return r15;
  D4():
    deopt 15 [c];
  D9():
    deopt 34 [r12, l, r12];
  L14():
    p1 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r8 = dyn units1(p1);
    check L15() else D5();
  L21():
    r13 = dyn units__(l, NULL, r12);
    check L22() else D10();
  D5():
    deopt 17 [c, r8];
  D10():
    deopt 36 [r12, r13];
  L15():
    identical = ldf identical in base;
    r9 = dyn identical(r6, r8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L16() else D6();
  L22():
    st value = r13;
    goto L4();
  D6():
    deopt 26 [c, r9];
  L16():
    goto L2(c, r9);
  }
}