fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.NativeRoutineList` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg data_frame:cls, reg sapply:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg sapply1:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r9:cls, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg print:cls, reg m:*, reg m1:V, reg p6:p(V +), reg ddd1:dots?, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg x7:*, reg x8:V, reg invisible:cls, reg r19:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L7() else D1();
  L8():
    data_frame = ldf `data.frame`;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L3(r18):
    popenv;
    return r18;
  L7():
    goto L0(r2);
  L9():
    p2 = prom<V +>{
      sapply = ldf sapply;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p1 = prom<V +>{
        r4 = clos inner354062069;
        return r4;
      };
      r6 = dyn sapply(p, p1);
      return r6;
    };
    p5 = prom<V +>{
      sapply1 = ldf sapply;
      p3 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p4 = prom<V +>{
        r9 = clos inner354062069;
        return r9;
      };
      r11 = dyn sapply1(p3, p4);
      return r11;
    };
    r13 = dyn data_frame[numParameters, `row.names`](p2, p5);
    check L10() else D3();
  L14():
    x7 = ld x;
    check L16() else D6();
  L15():
    r17 = dyn base1(<sym x>);
    goto L3(r17);
  D3():
    deopt 12 [r13];
  D6():
    deopt 23 [x7];
  L10():
    st m = r13;
    print = ldf print;
    check L11() else D4();
  L16():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r19 = dyn invisible(x8);
    check L17() else D7();
  D4():
    deopt 15 [];
  D7():
    deopt 26 [r19];
  L11():
    p6 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    ddd1 = ld `...`;
    r15 = dyn print[, `...`](p6, ddd1);
    check L12() else D5();
  L17():
    goto L3(r19);
  D5():
    deopt 18 [r15];
  L12():
    goto L2();
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    r = `$`(x4, <sym numParameters>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}