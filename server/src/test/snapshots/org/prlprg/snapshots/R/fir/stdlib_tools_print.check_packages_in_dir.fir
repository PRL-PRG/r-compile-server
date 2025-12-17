fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_packages_in_dir` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg writeLines:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg invisible:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg attr:cls, reg r12:V, reg writeLines1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg strwrap:cls, reg sprintf:cls, reg dir:*, reg dir1:V, reg p:p(V +), reg r16:V, reg p1:p(V +), reg r18:V, reg sprintf1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg x7:*, reg x8:V, reg attr1:cls, reg r23:V, reg length1:cls, reg r24:V, reg p2:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg x9:*, reg x10:V, reg attr2:cls, reg r30:V, reg length2:cls, reg r31:V, reg p3:p(V +), reg r33:V, reg c1:cls, reg r34:V, reg p4:p(V +), reg r36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg x11:*, reg x12:V, reg invisible1:cls, reg r39:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L10() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    writeLines = ldf writeLines;
    check L11() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L4(r11):
    st dir = r11;
    writeLines1 = ldf writeLines;
    check L23() else D8();
  L9():
    goto L0(r2);
  L11():
    r4 = dyn writeLines("No packages checked.");
    check L12() else D3();
  L19():
    x5 = ld x;
    check L21() else D6();
  L20():
    r10 = dyn base2(<sym x>, "dir");
    goto L4(r10);
  D3():
    deopt 10 [r4];
  D6():
    deopt 22 [x5];
  D8():
    deopt 29 [];
  L12():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r12 = dyn attr(x6, "dir");
    check L22() else D7();
  L23():
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      strwrap = ldf strwrap;
      p1 = prom<V +>{
        sprintf = ldf sprintf;
        p = prom<V +>{
          dir = ld dir;
          dir1 = force? dir;
          checkMissing(dir1);
          return dir1;
        };
        r16 = dyn sprintf("Check results for packages in dir '%s':", p);
        return r16;
      };
      r18 = dyn strwrap(p1);
      sprintf1 = ldf sprintf;
      p2 = prom<V +>{
        sym4 = ldf length;
        base4 = ldf length in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L2() else L3();
      L0(r20):
        return r20;
      L2():
        sym5 = ldf attr;
        base5 = ldf attr in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L4() else L5();
      L3():
        r19 = dyn base4(<lang attr(x, "pnames")>);
        goto L0(r19);
      L1(r22):
        length1 = ldf length in base;
        r24 = dyn length1(r22);
        goto L0(r24);
      L4():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        attr1 = ldf attr in base;
        r23 = dyn attr1(x8, "pnames");
        goto L1(r23);
      L5():
        r21 = dyn base5(<sym x>, "pnames");
        goto L1(r21);
      };
      p3 = prom<V +>{
        sym6 = ldf length;
        base6 = ldf length in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L2() else L3();
      L0(r27):
        return r27;
      L2():
        sym7 = ldf attr;
        base7 = ldf attr in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L4() else L5();
      L3():
        r26 = dyn base6(<lang attr(x, "rnames")>);
        goto L0(r26);
      L1(r29):
        length2 = ldf length in base;
        r31 = dyn length2(r29);
        goto L0(r31);
      L4():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        attr2 = ldf attr in base;
        r30 = dyn attr2(x10, "rnames");
        goto L1(r30);
      L5():
        r28 = dyn base7(<sym x>, "rnames");
        goto L1(r28);
      };
      r33 = dyn sprintf1("Package sources: %d, Reverse depends: %d", p2, p3);
      c1 = ldf c in base;
      r34 = dyn c1(r18, r33, "Use summary() for more information.");
      goto L0(r34);
    L2():
      r13 = dyn base3(<lang strwrap(sprintf("Check results for packages in dir '%s':", dir))>, <lang sprintf("Package sources: %d, Reverse depends: %d", length(attr(x, "pnames")), length(attr(x, "rnames")))>, "Use summary() for more information.");
      goto L0(r13);
    };
    r36 = dyn writeLines1(p4);
    check L24() else D9();
  D7():
    deopt 26 [r12];
  D9():
    deopt 31 [r36];
  L2(r6):
    popenv;
    return r6;
  L13():
    x3 = ld x;
    check L15() else D4();
  L14():
    r5 = dyn base1(<sym x>);
    goto L2(r5);
  L22():
    goto L4(r12);
  L24():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L25() else L26();
  D4():
    deopt 13 [x3];
  L5(r38):
    popenv;
    return r38;
  L15():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r7 = dyn invisible(x4);
    check L16() else D5();
  L25():
    x11 = ld x;
    check L27() else D10();
  L26():
    r37 = dyn base8(<sym x>);
    goto L5(r37);
  D5():
    deopt 16 [r7];
  D10():
    deopt 34 [x11];
  L16():
    goto L2(r7);
  L27():
    x12 = force? x11;
    checkMissing(x12);
    invisible1 = ldf invisible in base;
    r39 = dyn invisible1(x12);
    check L28() else D11();
  D11():
    deopt 37 [r39];
  L28():
    goto L5(r39);
  }
}