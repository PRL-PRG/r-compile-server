fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_vignette_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg writeLines:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg paste0:cls, reg basename:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg unclass:cls, reg r7:V, reg p:p(V +), reg r9:V, reg p1:p(V +), reg r11:V, reg c1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg x5:*, reg x6:V, reg invisible:cls, reg r18:V |
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
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L12() else L13();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L7() else D1();
  L8():
    writeLines = ldf writeLines;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L3(r17):
    popenv;
    return r17;
  L7():
    goto L0(r2);
  L9():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      paste0 = ldf paste0;
      p1 = prom<V +>{
        basename = ldf basename;
        p = prom<V +>{
          sym2 = ldf unclass;
          base2 = ldf unclass in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r6):
          return r6;
        L1():
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          unclass = ldf unclass in base;
          r7 = dyn unclass(x4);
          goto L0(r7);
        L2():
          r5 = dyn base2(<sym x>);
          goto L0(r5);
        };
        r9 = dyn basename(p);
        return r9;
      };
      r11 = dyn paste0("  ", p1);
      c1 = ldf c in base;
      r12 = dyn c1("Vignettes with missing or empty \\VignetteIndexEntry:", r11);
      goto L0(r12);
    L2():
      r3 = dyn base1("Vignettes with missing or empty \\VignetteIndexEntry:", <lang paste0("  ", basename(unclass(x)))>);
      goto L0(r3);
    };
    r14 = dyn writeLines(p2);
    check L10() else D3();
  L12():
    x5 = ld x;
    check L14() else D4();
  L13():
    r16 = dyn base3(<sym x>);
    goto L3(r16);
  D3():
    deopt 9 [r14];
  D4():
    deopt 14 [x5];
  L10():
    goto L2();
  L14():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r18 = dyn invisible(x6);
    check L15() else D5();
  D5():
    deopt 17 [r18];
  L15():
    goto L3(r18);
  }
}