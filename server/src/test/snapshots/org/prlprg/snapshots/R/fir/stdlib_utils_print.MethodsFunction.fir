fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3348268119;
    st `print.MethodsFunction` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3348268119(x, byclass, `...`) {
  (reg x:*, reg byclass:*, reg ddd:dots) -+> V { var x:*, var byclass:*, reg byclass_isMissing:L, reg byclass_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg format:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg byclass1:*, reg byclass2:V, reg p2:p(V +), reg ddd1:dots?, reg r8:V, reg length:cls, reg r9:V, reg c:L, reg print:cls, reg noquote:cls, reg values:*, reg values1:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg cat:cls, reg r14:V, reg cat1:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg x5:*, reg x6:V, reg invisible:cls, reg r19:V |
    mkenv;
    st x = x;
    byclass_isMissing = missing.0(byclass);
    if byclass_isMissing then L0() else L1(byclass);
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "byclass");
      goto L0(r2);
    L2():
      r = dyn base(<sym x>, "byclass");
      goto L0(r);
    };
    goto L1(p);
  L1(byclass_orDefault):
    st byclass = byclass_orDefault;
    st `...` = ddd;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2(r5):
    c = `as.logical`(r5);
    if c then L11() else L3();
  L6():
    format = ldf format;
    check L8() else D0();
  L7():
    r4 = dyn base1(<lang `<-`(values, format(x, byclass=byclass, ...))>);
    goto L2(r4);
  D0():
    deopt 3 [];
  L3():
    cat1 = ldf cat;
    check L17() else D7();
  L4():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L8():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      byclass1 = ld byclass;
      byclass2 = force? byclass1;
      checkMissing(byclass2);
      return byclass2;
    };
    ddd1 = ld `...`;
    r8 = dyn format[, byclass, `...`](p1, p2, ddd1);
    check L9() else D1();
  L11():
    print = ldf print;
    check L12() else D3();
  D1():
    deopt 8 [r8];
  D3():
    deopt 13 [];
  D7():
    deopt 21 [];
  L5(r18):
    popenv;
    return r18;
  L9():
    st values = r8;
    length = ldf length in base;
    r9 = dyn length(r8);
    check L10() else D2();
  L12():
    p4 = prom<V +>{
      noquote = ldf noquote;
      p3 = prom<V +>{
        values = ld values;
        values1 = force? values;
        checkMissing(values1);
        return values1;
      };
      r11 = dyn noquote(p3);
      return r11;
    };
    r13 = dyn print(p4);
    check L13() else D4();
  L17():
    r16 = dyn cat1("no methods found\n");
    check L18() else D8();
  L19():
    x5 = ld x;
    check L21() else D9();
  L20():
    r17 = dyn base2(<sym x>);
    goto L5(r17);
  D2():
    deopt 11 [r9];
  D4():
    deopt 15 [r13];
  D8():
    deopt 23 [r16];
  D9():
    deopt 26 [x5];
  L10():
    goto L2(r9);
  L13():
    cat = ldf cat;
    check L14() else D5();
  L18():
    goto L4();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r19 = dyn invisible(x6);
    check L22() else D10();
  D5():
    deopt 17 [];
  D10():
    deopt 29 [r19];
  L14():
    r14 = dyn cat("see '?methods' for accessing help and source code\n");
    check L15() else D6();
  L22():
    goto L5(r19);
  D6():
    deopt 19 [r14];
  L15():
    goto L4();
  }
}