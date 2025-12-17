fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2949311808;
    st `.deparseTrim` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2949311808(expr, cutoff) {
  (reg expr:*, reg cutoff:*) -+> V { var expr:*, var cutoff:*, reg cutoff_isMissing:L, reg cutoff_orDefault:*, reg deparse:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg res:*, reg res1:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg res2:*, reg res3:V, reg c1:L, reg res5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg r7:V, reg c2:L, reg sub:cls, reg res6:*, reg res7:V, reg c3:L, reg res9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg res12:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg res15:V, reg r11:V, reg res16:*, reg res17:V, reg length1:cls, reg r12:V, reg r13:V, reg c4:cls, reg r14:V, reg __1:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg paste0:cls, reg paste1:cls, reg exprs:*, reg exprs1:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg r21:V, reg r22:V, reg paste2:cls, reg res18:*, reg res19:V, reg c5:L, reg res21:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg res22:*, reg res23:V, reg nchar:cls, reg r29:V, reg cutoff1:*, reg cutoff2:V, reg r30:V, reg c6:L, reg paste3:cls, reg substr:cls, reg res24:*, reg res25:V, reg p5:p(V +), reg cutoff3:*, reg cutoff4:V, reg p6:p(V +), reg r33:V, reg p7:p(V +), reg r35:V, reg res26:*, reg res27:V |
    mkenv;
    st expr = expr;
    cutoff_isMissing = missing.0(cutoff);
    if cutoff_isMissing then L0(30) else L0(cutoff);
  L0(cutoff_orDefault):
    st cutoff = cutoff_orDefault;
    deparse = ldf deparse;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r1 = dyn deparse(p);
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    st res = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r3):
    r5 = `>`(r3, 1.0);
    c = `as.logical`(r5);
    if c then L15() else L2();
  L11():
    res = ld res;
    check L13() else D2();
  L12():
    r2 = dyn base(<sym res>);
    goto L1(r2);
  D2():
    deopt 7 [res];
  L2():
    goto L6();
  L6():
    sym3 = ldf nchar;
    base3 = ldf nchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L13():
    res1 = force? res;
    checkMissing(res1);
    length = ldf length in base;
    r4 = dyn length(res1);
    check L14() else D3();
  L15():
    res2 = ld res;
    check L16() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 13 [res2];
  L7(r28):
    cutoff1 = ld cutoff;
    check L33() else D13();
  L14():
    goto L1(r4);
  L16():
    res3 = force? res2;
    checkMissing(res3);
    c1 = `is.object`(res3);
    if c1 then L17() else L18(res3);
  L29():
    res22 = ld res;
    check L31() else D11();
  L30():
    r27 = dyn base3(<sym res>);
    goto L7(r27);
  D11():
    deopt 44 [res22];
  D13():
    deopt 50 [r28, cutoff1];
  L3(dx1):
    r7 = `==`(dx1, "{");
    c2 = `as.logical`(r7);
    if c2 then L20() else L4();
  L17():
    dr = tryDispatchBuiltin.1("[[", res3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(res5):
    __ = ldf `[[` in base;
    r6 = dyn __(res5, 1.0);
    goto L3(r6);
  L31():
    res23 = force? res22;
    checkMissing(res23);
    nchar = ldf nchar in base;
    r29 = dyn nchar(res23, "chars", FALSE, NA_LGL);
    check L32() else D12();
  L33():
    cutoff2 = force? cutoff1;
    checkMissing(cutoff2);
    r30 = `>`(r28, cutoff2);
    c6 = `as.logical`(r30);
    if c6 then L34() else L8();
  D12():
    deopt 50 [r29];
  L4():
    paste2 = ldf paste;
    check L26() else D9();
  L5(r22):
    goto L6();
  L8():
    res26 = ld res;
    check L38() else D16();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L20():
    sub = ldf sub;
    check L21() else D5();
  L32():
    goto L7(r29);
  L34():
    paste3 = ldf paste;
    check L35() else D14();
  D5():
    deopt 21 [];
  D9():
    deopt 35 [];
  D14():
    deopt 54 [];
  D16():
    deopt 58 [res26];
  L21():
    p1 = prom<V +>{
      res6 = ld res;
      res7 = force? res6;
      checkMissing(res7);
      c3 = `is.object`(res7);
      if c3 then L3() else L4(res7);
    L0(dx3):
      return dx3;
    L3():
      dr2 = tryDispatchBuiltin.1("[", res7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L5() else L4(dr2);
    L4(res9):
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L1(res12, r9):
      __1 = ldf `[` in base;
      r15 = dyn __1(res12, r9);
      goto L0(r15);
    L5():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L6():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L7():
      r8 = dyn base1(<lang `-`(1)>, <lang `-`(length(res))>);
      goto L1(res9, r8);
    L2(res15, r11):
      r13 = `-`(<missing>, r11);
      c4 = ldf c in base;
      r14 = dyn c4(-1, r13);
      goto L1(res15, r14);
    L8():
      res16 = ld res;
      res17 = force? res16;
      checkMissing(res17);
      length1 = ldf length in base;
      r12 = dyn length1(res17);
      goto L2(res9, r12);
    L9():
      r10 = dyn base2(<sym res>);
      goto L2(res9, r10);
    };
    r17 = dyn sub("^[ \t]*", "", p1);
    check L22() else D6();
  L26():
    p4 = prom<V +>{
      res18 = ld res;
      res19 = force? res18;
      checkMissing(res19);
      c5 = `is.object`(res19);
      if c5 then L1() else L2(res19);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", res19);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(res21):
      __2 = ldf `[[` in base;
      r23 = dyn __2(res21, 1.0);
      goto L0(r23);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r25 = dyn paste2(p4, " ...");
    check L27() else D10();
  L35():
    p7 = prom<V +>{
      substr = ldf substr;
      p5 = prom<V +>{
        res24 = ld res;
        res25 = force? res24;
        checkMissing(res25);
        return res25;
      };
      p6 = prom<V +>{
        cutoff3 = ld cutoff;
        cutoff4 = force? cutoff3;
        checkMissing(cutoff4);
        return cutoff4;
      };
      r33 = dyn substr(p5, 1.0, p6);
      return r33;
    };
    r35 = dyn paste3(p7, " ...");
    check L36() else D15();
  L38():
    res27 = force? res26;
    checkMissing(res27);
    popenv;
    return res27;
  D6():
    deopt 25 [r17];
  D10():
    deopt 38 [r25];
  D15():
    deopt 57 [r35];
  L22():
    st exprs = r17;
    paste0 = ldf paste0;
    check L23() else D7();
  L27():
    st res = r25;
    goto L5(r25);
  L36():
    popenv;
    return r35;
  D7():
    deopt 28 [];
  L23():
    p3 = prom<V +>{
      paste1 = ldf paste;
      p2 = prom<V +>{
        exprs = ld exprs;
        exprs1 = force? exprs;
        checkMissing(exprs1);
        return exprs1;
      };
      r19 = dyn paste1[, collapse](p2, "; ");
      return r19;
    };
    r21 = dyn paste0("{", p3, "}");
    check L24() else D8();
  D8():
    deopt 32 [r21];
  L24():
    st res = r21;
    goto L5(r21);
  }
}