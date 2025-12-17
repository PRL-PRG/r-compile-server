fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1115738149;
    st sapply = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1115738149(X, FUN, `...`, simplify, `USE.NAMES`) {
  (reg X:*, reg FUN:*, reg ddd:dots, reg simplify:*, reg USE_NAMES:*) -+> V { var X:*, var FUN:*, var `...`:dots?, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, var `USE.NAMES`:*, reg USE_NAMES_isMissing:L, reg USE_NAMES_orDefault:*, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg lapply:cls, reg X1:*, reg X2:V, reg p1:p(V +), reg FUN3:*, reg FUN4:V, reg p2:p(V +), reg ddd1:dots?, reg r4:V, reg USE_NAMES1:*, reg USE_NAMES2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg c5:L, reg r6:V, reg X3:*, reg X4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c15:L, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c18:L, reg r10:V, reg answer:*, reg answer1:V, reg names:cls, reg r11:V, reg c19:V, reg c20:L, reg c21:V, reg c23:L, reg X5:*, reg X6:V, reg l:*, reg names__:cls, reg r12:V, reg isFALSE:cls, reg simplify1:*, reg simplify2:V, reg p3:p(V +), reg r14:V, reg r15:V, reg c24:L, reg simplify2array:cls, reg answer2:*, reg answer3:V, reg p4:p(V +), reg simplify3:*, reg simplify4:V, reg r17:V, reg p5:p(V +), reg r19:V, reg answer4:*, reg answer5:V |
    mkenv;
    st X = X;
    st FUN = FUN;
    st `...` = ddd;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L0(TRUE) else L0(simplify);
  L0(simplify_orDefault):
    st simplify = simplify_orDefault;
    USE_NAMES_isMissing = missing.0(USE_NAMES);
    if USE_NAMES_isMissing then L1(TRUE) else L1(USE_NAMES);
  L1(USE_NAMES_orDefault):
    st `USE.NAMES` = USE_NAMES_orDefault;
    match_fun = ldf `match.fun`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    st FUN = r1;
    lapply = ldf lapply;
    check L12() else D2();
  D2():
    deopt 6 [];
  L12():
    p1 = prom<V +>{
      X1 = ld X;
      X2 = force? X1;
      checkMissing(X2);
      return X2;
    };
    p2 = prom<V +>{
      FUN3 = ld FUN;
      FUN4 = force? FUN3;
      checkMissing(FUN4);
      return FUN4;
    };
    ddd1 = ld `...`;
    r4 = dyn lapply[X, FUN, `...`](p1, p2, ddd1);
    check L13() else D3();
  D3():
    deopt 12 [r4];
  L13():
    st answer = r4;
    USE_NAMES1 = ld `USE.NAMES`;
    check L14() else D4();
  D4():
    deopt 14 [USE_NAMES1];
  L14():
    USE_NAMES2 = force? USE_NAMES1;
    checkMissing(USE_NAMES2);
    c = `as.logical`(USE_NAMES2);
    if c then L15() else L2(c);
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L20() else L4(c10);
  L15():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L3(c5, r6):
    c7 = `as.logical`(r6);
    c8 = `&&`(c5, c7);
    goto L2(c8);
  L4(c12):
    c23 = `as.logical`(c12);
    if c23 then L28() else L7();
  L16():
    X3 = ld X;
    check L18() else D5();
  L17():
    r5 = dyn base(<sym X>);
    goto L3(c, r5);
  L20():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D5():
    deopt 17 [c, X3];
  L5(c15, r8):
    c20 = `as.logical`(r8);
    c21 = `&&`(c15, c20);
    goto L4(c21);
  L7():
    goto L8();
  L8():
    isFALSE = ldf isFALSE;
    check L33() else D11();
  L18():
    X4 = force? X3;
    checkMissing(X4);
    c6 = `is.character`(X4);
    goto L3(c, c6);
  L21():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L22():
    r7 = dyn base1(<lang names(answer)>);
    goto L5(c10, r7);
  L28():
    X5 = ld X;
    check L29() else D8();
  D8():
    deopt 30 [X5];
  D11():
    deopt 40 [];
  L6(c18, r10):
    c19 = `==`(r10, NULL);
    goto L5(c18, c19);
  L23():
    answer = ld answer;
    check L25() else D6();
  L24():
    r9 = dyn base2(<sym answer>);
    goto L6(c10, r9);
  L29():
    X6 = force? X5;
    checkMissing(X6);
    l = ld answer;
    names__ = ldf `names<-`;
    check L30() else D9();
  L33():
    p3 = prom<V +>{
      simplify1 = ld simplify;
      simplify2 = force? simplify1;
      checkMissing(simplify2);
      return simplify2;
    };
    r14 = dyn isFALSE(p3);
    check L34() else D12();
  D6():
    deopt 24 [c10, answer];
  D9():
    deopt 33 [X6, l, X6];
  D12():
    deopt 42 [r14];
  L25():
    answer1 = force? answer;
    checkMissing(answer1);
    names = ldf names in base;
    r11 = dyn names(answer1);
    check L26() else D7();
  L30():
    r12 = dyn names__(l, NULL, X6);
    check L31() else D10();
  L34():
    r15 = `!`(r14);
    c24 = `as.logical`(r15);
    if c24 then L35() else L9();
  D7():
    deopt 27 [c10, r11];
  D10():
    deopt 35 [X6, r12];
  L9():
    answer4 = ld answer;
    check L39() else D15();
  L26():
    goto L6(c10, r11);
  L31():
    st answer = r12;
    goto L8();
  L35():
    simplify2array = ldf simplify2array;
    check L36() else D13();
  D13():
    deopt 45 [];
  D15():
    deopt 50 [answer4];
  L36():
    p4 = prom<V +>{
      answer2 = ld answer;
      answer3 = force? answer2;
      checkMissing(answer3);
      return answer3;
    };
    p5 = prom<V +>{
      simplify3 = ld simplify;
      simplify4 = force? simplify3;
      checkMissing(simplify4);
      r17 = `==`(simplify4, "array");
      visible.0();
      return r17;
    };
    r19 = dyn simplify2array[, higher](p4, p5);
    check L37() else D14();
  L39():
    answer5 = force? answer4;
    checkMissing(answer5);
    popenv;
    return answer5;
  D14():
    deopt 49 [r19];
  L37():
    popenv;
    return r19;
  }
}