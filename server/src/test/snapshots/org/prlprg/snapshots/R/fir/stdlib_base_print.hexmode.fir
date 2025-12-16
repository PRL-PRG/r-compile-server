fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.hexmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg print:cls, reg format:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg ddd1:dots?, reg r6:V, reg cat:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg invisible:cls, reg r11:V |
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
    cat = ldf cat;
    check L12() else D4();
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
    print = ldf print;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [];
  L3(r10):
    popenv;
    return r10;
  L7():
    goto L0(r2);
  L9():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r4 = dyn format(p);
      return r4;
    };
    ddd1 = ld `...`;
    r6 = dyn print[, `...`](p1, ddd1);
    check L10() else D3();
  L12():
    r8 = dyn cat("<0-length hexmode>\n");
    check L13() else D5();
  L14():
    x5 = ld x;
    check L16() else D6();
  L15():
    r9 = dyn base1(<sym x>);
    goto L3(r9);
  D3():
    deopt 10 [r6];
  D5():
    deopt 14 [r8];
  D6():
    deopt 17 [x5];
  L10():
    goto L2();
  L13():
    goto L2();
  L16():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r11 = dyn invisible(x6);
    check L17() else D7();
  D7():
    deopt 20 [r11];
  L17():
    goto L3(r11);
  }
}