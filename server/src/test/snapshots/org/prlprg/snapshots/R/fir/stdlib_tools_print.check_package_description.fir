fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_package_description` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r3:V, reg length:cls, reg r4:V, reg c:L, reg writeLines:cls, reg paste:cls, reg y:*, reg y1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg invisible:cls, reg r12:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1();
  L4():
    format = ldf format;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(y, format(x, ...))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    goto L2();
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L6():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r3 = dyn format[, `...`](p, ddd1);
    check L7() else D1();
  L9():
    writeLines = ldf writeLines;
    check L10() else D3();
  D1():
    deopt 6 [r3];
  D3():
    deopt 11 [];
  L3(r11):
    popenv;
    return r11;
  L7():
    st y = r3;
    length = ldf length in base;
    r4 = dyn length(r3);
    check L8() else D2();
  L10():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r6 = dyn paste[, collapse](p1, "\n\n");
      return r6;
    };
    r8 = dyn writeLines(p2);
    check L11() else D4();
  L13():
    x3 = ld x;
    check L15() else D5();
  L14():
    r10 = dyn base1(<sym x>);
    goto L3(r10);
  D2():
    deopt 9 [r4];
  D4():
    deopt 13 [r8];
  D5():
    deopt 18 [x3];
  L8():
    goto L0(r4);
  L11():
    goto L2();
  L15():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r12 = dyn invisible(x4);
    check L16() else D6();
  D6():
    deopt 21 [r12];
  L16():
    goto L3(r12);
  }
}