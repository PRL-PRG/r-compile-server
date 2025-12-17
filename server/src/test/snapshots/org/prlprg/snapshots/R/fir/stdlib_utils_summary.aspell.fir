fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.aspell` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sort:cls, reg unique:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg words:*, reg words1:V, reg length:cls, reg r7:V, reg c1:L, reg writeLines:cls, reg r8:V, reg print:cls, reg words2:*, reg words3:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg words4:*, reg words5:V, reg invisible:cls, reg r14:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sort = ldf sort;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      unique = ldf unique;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        c = `is.object`(object2);
        if c then L1() else L2(object2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", object2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(object4):
        r = `$`(object4, <sym Original>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn unique(p);
      return r2;
    };
    r4 = dyn sort(p1);
    check L5() else D1();
  D1():
    deopt 3 [r4];
  L5():
    st words = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r6):
    c1 = `as.logical`(r6);
    if c1 then L10() else L1();
  L6():
    words = ld words;
    check L8() else D2();
  L7():
    r5 = dyn base(<sym words>);
    goto L0(r5);
  D2():
    deopt 7 [words];
  L1():
    goto L2();
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L8():
    words1 = force? words;
    checkMissing(words1);
    length = ldf length in base;
    r7 = dyn length(words1);
    check L9() else D3();
  L10():
    writeLines = ldf writeLines;
    check L11() else D4();
  D3():
    deopt 10 [r7];
  D4():
    deopt 12 [];
  L3(r13):
    popenv;
    return r13;
  L9():
    goto L0(r7);
  L11():
    r8 = dyn writeLines("Possibly misspelled words:");
    check L12() else D5();
  L16():
    words4 = ld words;
    check L18() else D8();
  L17():
    r12 = dyn base1(<sym words>);
    goto L3(r12);
  D5():
    deopt 14 [r8];
  D8():
    deopt 23 [words4];
  L12():
    print = ldf print;
    check L13() else D6();
  L18():
    words5 = force? words4;
    checkMissing(words5);
    invisible = ldf invisible in base;
    r14 = dyn invisible(words5);
    check L19() else D9();
  D6():
    deopt 16 [];
  D9():
    deopt 26 [r14];
  L13():
    p2 = prom<V +>{
      words2 = ld words;
      words3 = force? words2;
      checkMissing(words3);
      return words3;
    };
    r10 = dyn print(p2);
    check L14() else D7();
  L19():
    goto L3(r14);
  D7():
    deopt 18 [r10];
  L14():
    goto L2();
  }
}