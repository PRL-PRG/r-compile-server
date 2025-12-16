fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sapply:cls, reg options:cls, reg r5:V, reg p1:p(V +), reg mode:*, reg mode1:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c:cls, reg r11:V, reg sapply1:cls, reg cex3:*, reg cex4:V, reg p3:p(V +), reg r13:cls, reg p4:p(V +), reg r15:V, reg t:cls, reg sapply2:cls, reg lex3:*, reg lex4:V, reg p5:p(V +), reg r17:cls, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg cex5:*, reg cex6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg c1:cls, reg r26:V, reg list:cls, reg r27:V, reg l:*, reg dimnames__:cls, reg r28:V, reg mex3:*, reg mex4:V, reg l1:*, reg storage_mode__:cls, reg r29:V, reg storage_mode:cls, reg pi:*, reg pi1:V, reg p8:p(V +), reg r31:V, reg rm:cls, reg pi2:*, reg pi3:V, reg p9:p(V +), reg r33:V |
    mkenv;
    r = clos inner354062069;
    st mode = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sapply = ldf sapply;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L6():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    p1 = prom<V +>{
      options = ldf options;
      r5 = dyn options();
      return r5;
    };
    p2 = prom<V +>{
      mode = ld mode;
      mode1 = force? mode;
      checkMissing(mode1);
      return mode1;
    };
    r8 = dyn sapply(p1, p2);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r8];
  L7():
    goto L0();
  L9():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r10):
    st cex3 = r10;
    sapply1 = ldf sapply;
    check L13() else D5();
  L10():
    c = ldf c in base;
    r11 = dyn c("NULL", "1", "1:1", "1i", "list(1)", "data.frame(x = 1)", "pairlist(pi)", "c", "lm", "formals(lm)[[1]]", "formals(lm)[[2]]", "y ~ x", "expression((1))[[1]]", "(y ~ x)[[1]]", "expression(x <- pi)[[1]][[1]]");
    check L12() else D4();
  L11():
    r9 = dyn base1("NULL", "1", "1:1", "1i", "list(1)", "data.frame(x = 1)", "pairlist(pi)", "c", "lm", "formals(lm)[[1]]", "formals(lm)[[2]]", "y ~ x", "expression((1))[[1]]", "(y ~ x)[[1]]", "expression(x <- pi)[[1]][[1]]");
    goto L1(r9);
  D4():
    deopt 31 [r11];
  D5():
    deopt 34 [];
  L12():
    goto L1(r11);
  L13():
    p3 = prom<V +>{
      cex3 = ld cex3;
      cex4 = force? cex3;
      checkMissing(cex4);
      return cex4;
    };
    p4 = prom<V +>{
      r13 = clos inner354062069;
      return r13;
    };
    r15 = dyn sapply1(p3, p4);
    check L14() else D6();
  D6():
    deopt 37 [r15];
  L14():
    st lex3 = r15;
    t = ldf t;
    check L15() else D7();
  D7():
    deopt 40 [];
  L15():
    p7 = prom<V +>{
      sapply2 = ldf sapply;
      p5 = prom<V +>{
        lex3 = ld lex3;
        lex4 = force? lex3;
        checkMissing(lex4);
        return lex4;
      };
      p6 = prom<V +>{
        r17 = clos inner354062069;
        return r17;
      };
      r19 = dyn sapply2(p5, p6);
      return r19;
    };
    r21 = dyn t(p7);
    check L16() else D8();
  D8():
    deopt 42 [r21];
  L16():
    st mex3 = r21;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L2(r23):
    l = ld mex3;
    dimnames__ = ldf `dimnames<-`;
    check L24() else D12();
  L17():
    cex5 = ld cex3;
    check L19() else D9();
  L18():
    r22 = dyn base2(<sym cex3>, <lang c("typeof(.)", "storage.mode(.)", "mode(.)")>);
    goto L2(r22);
  D9():
    deopt 46 [cex5];
  D12():
    deopt 58 [r23, l, r23];
  L19():
    cex6 = force? cex5;
    checkMissing(cex6);
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L24():
    r28 = dyn dimnames__(l, NULL, r23);
    check L25() else D13();
  D13():
    deopt 60 [r23, r28];
  L3(r25):
    list = ldf list in base;
    r27 = dyn list(cex6, r25);
    check L23() else D11();
  L20():
    c1 = ldf c in base;
    r26 = dyn c1("typeof(.)", "storage.mode(.)", "mode(.)");
    check L22() else D10();
  L21():
    r24 = dyn base3("typeof(.)", "storage.mode(.)", "mode(.)");
    goto L3(r24);
  L25():
    st mex3 = r28;
    mex3 = ld mex3;
    check L26() else D14();
  D10():
    deopt 54 [r26];
  D11():
    deopt 56 [r27];
  D14():
    deopt 62 [mex3];
  L22():
    goto L3(r26);
  L23():
    goto L2(r27);
  L26():
    mex4 = force? mex3;
    checkMissing(mex4);
    l1 = ld pi;
    storage_mode__ = ldf `storage.mode<-`;
    check L27() else D15();
  D15():
    deopt 67 ["complex", l1, "complex"];
  L27():
    r29 = dyn storage_mode__(l1, NULL, "complex");
    check L28() else D16();
  D16():
    deopt 69 ["complex", r29];
  L28():
    st pi = r29;
    storage_mode = ldf `storage.mode`;
    check L29() else D17();
  D17():
    deopt 72 [];
  L29():
    p8 = prom<V +>{
      pi = ld pi;
      pi1 = force? pi;
      checkMissing(pi1);
      return pi1;
    };
    r31 = dyn storage_mode(p8);
    check L30() else D18();
  D18():
    deopt 74 [r31];
  L30():
    rm = ldf rm;
    check L31() else D19();
  D19():
    deopt 76 [];
  L31():
    p9 = prom<V +>{
      pi2 = ld pi;
      pi3 = force? pi2;
      checkMissing(pi3);
      return pi3;
    };
    r33 = dyn rm(p9);
    check L32() else D20();
  D20():
    deopt 78 [r33];
  L32():
    popenv;
    return r33;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_expression:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg is_call:cls, reg r7:V, reg c1:L, reg deparse:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p:p(V +), reg r10:V, reg c3:L, reg r12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r13:V, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg i_ddd:dots, reg i:V, reg c8:L, reg c9:L, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg x9:*, reg x10:V, reg c10:L, reg c11:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg x11:*, reg x12:V, reg typeof:cls, reg r21:V, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg c18:L, reg c19:L, reg i_ddd1:dots, reg i1:V, reg c20:L, reg c21:L, reg c22:L, reg c23:L, reg c24:L, reg c25:L, reg stop:cls, reg r22:V, reg tx:*, reg tx1:V |
    mkenv;
    st x = x;
    sym = ldf `is.expression`;
    base = ldf `is.expression` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    c = `as.logical`(r1);
    if c then L23() else L1();
  L19():
    x1 = ld x;
    check L21() else D0();
  L20():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `is.call`;
    base1 = ldf `is.call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L21():
    x2 = force? x1;
    checkMissing(x2);
    is_expression = ldf `is.expression` in base;
    r2 = dyn is_expression(x2);
    check L22() else D1();
  L23():
    popenv;
    return "expression";
  D1():
    deopt 5 [r2];
  L3(r6):
    c1 = `as.logical`(r6);
    if c1 then L30() else L4();
  L22():
    goto L0(r2);
  L26():
    x3 = ld x;
    check L28() else D2();
  L27():
    r5 = dyn base1(<sym x>);
    goto L3(r5);
  D2():
    deopt 13 [x3];
  L4():
    sym2 = ldf `is.name`;
    base2 = ldf `is.name` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L28():
    x4 = force? x3;
    checkMissing(x4);
    is_call = ldf `is.call` in base;
    r7 = dyn is_call(x4);
    check L29() else D3();
  L30():
    deparse = ldf deparse;
    check L31() else D4();
  D3():
    deopt 16 [r7];
  D4():
    deopt 18 [];
  L11(r18):
    c11 = `as.logical`(r18);
    if c11 then L53() else L12();
  L29():
    goto L3(r7);
  L31():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L1() else L2(x6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x8):
      __ = ldf `[[` in base;
      r8 = dyn __(x8, 1);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn deparse(p);
    check L32() else D5();
  L50():
    x9 = ld x;
    check L52() else D6();
  L51():
    r17 = dyn base2(<sym x>);
    goto L11(r17);
  D5():
    deopt 20 [r10];
  D6():
    deopt 35 [x9];
  L12():
    sym3 = ldf typeof;
    base3 = ldf typeof in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L32():
    c3 = `is.object`(r10);
    if c3 then L33() else L34(r10);
  L52():
    x10 = force? x9;
    checkMissing(x10);
    c10 = `is.symbol`(x10);
    goto L11(c10);
  L53():
    popenv;
    return "name";
  L5(dx3):
    c4 = `is.vector`(dx3, "any");
    if c4 then L36() else L37();
  L13(r20):
    st tx = r20;
    c12 = `is.vector`(r20, "any");
    if c12 then L59() else L60();
  L33():
    dr2 = tryDispatchBuiltin.1("[", r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(r12):
    __1 = ldf `[` in base;
    r13 = dyn __1(r12, 1);
    goto L5(r13);
  L55():
    x11 = ld x;
    check L57() else D7();
  L56():
    r19 = dyn base3(<sym x>);
    goto L13(r19);
  D7():
    deopt 42 [x11];
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L36():
    c5 = inherits(dx3, "factor", FALSE);
    if c5 then L38() else L39();
  L37():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L57():
    x12 = force? x11;
    checkMissing(x12);
    typeof = ldf typeof in base;
    r21 = dyn typeof(x12);
    check L58() else D8();
  L59():
    c13 = inherits(r20, "factor", FALSE);
    if c13 then L61() else L62();
  L60():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D8():
    deopt 45 [r21];
  L38():
    c6 = `is.character`(dx3);
    if c6 then L40() else L41();
  L39():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L38();
  L58():
    goto L13(r21);
  L61():
    c14 = `is.character`(r20);
    if c14 then L63() else L64();
  L62():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L61();
  L6():
    goto L9("(");
  L7():
    goto L9("call");
  L9(r14):
    popenv;
    return r14;
  L14():
    popenv;
    return "numeric";
  L15():
    popenv;
    return "function";
  L16():
    tx = ld tx;
    check L82() else D11();
  L40():
    c7 = `==`.6(dx3, "(");
    if c7 then L6() else L42();
  L41():
    i_ddd = dots[dx3];
    i = `as.integer`(i_ddd);
    c8 = `==`.5(i, 1);
    if c8 then L6() else L43();
  L63():
    c15 = `==`.6(r20, "double");
    if c15 then L14() else L65();
  L64():
    i_ddd1 = dots[r20];
    i1 = `as.integer`(i_ddd1);
    c20 = `==`.5(i1, 1);
    if c20 then L17() else L70();
  D11():
    deopt 58 [tx];
  L17():
    stop = ldf stop;
    check L76() else D9();
  L42():
    goto L7();
  L43():
    c9 = `==`.5(i, 2);
    if c9 then L7() else L44();
  L65():
    c16 = `==`.6(r20, "integer");
    if c16 then L14() else L66();
  L70():
    c21 = `==`.5(i1, 2);
    if c21 then L14() else L71();
  L82():
    tx1 = force? tx;
    checkMissing(tx1);
    popenv;
    return tx1;
  D9():
    deopt 48 [];
  L44():
    goto L9(NULL);
  L66():
    c17 = `==`.6(r20, "closure");
    if c17 then L15() else L67();
  L71():
    c22 = `==`.5(i1, 3);
    if c22 then L17() else L72();
  L76():
    r22 = dyn stop("empty alternative in numeric switch");
    check L77() else D10();
  D10():
    deopt 50 [r22];
  L67():
    c18 = `==`.6(r20, "builtin");
    if c18 then L15() else L68();
  L72():
    c23 = `==`.5(i1, 4);
    if c23 then L17() else L73();
  L77():
    popenv;
    return r22;
  L68():
    c19 = `==`.6(r20, "special");
    if c19 then L15() else L69();
  L73():
    c24 = `==`.5(i1, 5);
    if c24 then L15() else L74();
  L69():
    goto L16();
  L74():
    c25 = `==`.5(i1, 6);
    if c25 then L16() else L75();
  L75():
    invisible.0();
    popenv;
    return NULL;
  }
}