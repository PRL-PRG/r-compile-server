fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.aspell` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg writeLines:cls, reg paste:cls, reg format:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg invisible:cls, reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    nrow = ldf nrow;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    c = `as.logical`(r1);
    if c then L5() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L5():
    writeLines = ldf writeLines;
    check L6() else D2();
  D2():
    deopt 5 [];
  L2(r10):
    popenv;
    return r10;
  L6():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        format = ldf format;
        p1 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        ddd1 = ld `...`;
        r3 = dyn format[, `...`](p1, ddd1);
        return r3;
      };
      r5 = dyn paste[, collapse](p2, "\n\n");
      return r5;
    };
    r7 = dyn writeLines(p3);
    check L7() else D3();
  L9():
    x5 = ld x;
    check L11() else D4();
  L10():
    r9 = dyn base(<sym x>);
    goto L2(r9);
  D3():
    deopt 7 [r7];
  D4():
    deopt 12 [x5];
  L7():
    goto L1();
  L11():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r11 = dyn invisible(x6);
    check L12() else D5();
  D5():
    deopt 15 [r11];
  L12():
    goto L2(r11);
  }
}