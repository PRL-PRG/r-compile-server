fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.list.function` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg formals:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg body:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r7:V, reg list:cls, reg r8:V, reg c:cls, reg r9:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    formals = ldf formals;
    check L4() else D0();
  L3():
    r = dyn base(<lang formals(x)>, <lang list(body(x))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn formals(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r5):
    c = ldf c in base;
    r9 = dyn c(r3, r5);
    check L11() else D5();
  L6():
    body = ldf body;
    check L8() else D2();
  L7():
    r4 = dyn base1(<lang body(x)>);
    goto L1(r4);
  D2():
    deopt 9 [];
  D5():
    deopt 15 [r9];
  L8():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn body(p1);
    check L9() else D3();
  L11():
    goto L0(r9);
  D3():
    deopt 11 [r7];
  L9():
    list = ldf list in base;
    r8 = dyn list(r7);
    check L10() else D4();
  D4():
    deopt 13 [r8];
  L10():
    goto L1(r8);
  }
}