fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1868572340;
    st `.pretty_format2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1868572340(msg, x, collapse, useFancyQuotes) {
  (reg msg:*, reg x:*, reg collapse:*, reg useFancyQuotes:*) -+> V { var msg:*, var x:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, var useFancyQuotes:*, reg useFancyQuotes_isMissing:L, reg useFancyQuotes_orDefault:*, reg strwrap:cls, reg paste:cls, reg sQuote:cls, reg x1:*, reg x2:V, reg p:p(V +), reg useFancyQuotes1:*, reg useFancyQuotes2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg collapse1:*, reg collapse2:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg xx:*, reg xx1:V, reg length:cls, reg r10:V, reg r11:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg c5:L, reg r13:V, reg msg1:*, reg msg2:V, reg nchar:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg c8:L, reg r18:V, reg r19:V, reg xx2:*, reg xx3:V, reg nchar1:cls, reg r20:V, reg r21:V, reg r22:V, reg r23:V, reg c9:L, reg c10:V, reg c12:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg msg3:*, reg msg4:V, reg _pretty_format:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg collapse3:*, reg collapse4:V, reg p6:p(V +), reg useFancyQuotes3:*, reg useFancyQuotes4:V, reg p7:p(V +), reg r29:V, reg c13:cls, reg r30:V, reg paste1:cls, reg msg5:*, reg msg6:V, reg p8:p(V +), reg xx4:*, reg xx5:V, reg p9:p(V +), reg r33:V |
    mkenv;
    st msg = msg;
    st x = x;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L0(", ") else L0(collapse);
  L0(collapse_orDefault):
    st collapse = collapse_orDefault;
    useFancyQuotes_isMissing = missing.0(useFancyQuotes);
    if useFancyQuotes_isMissing then L1(FALSE) else L1(useFancyQuotes);
  L1(useFancyQuotes_orDefault):
    st useFancyQuotes = useFancyQuotes_orDefault;
    strwrap = ldf strwrap;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p4 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        p1 = prom<V +>{
          useFancyQuotes1 = ld useFancyQuotes;
          useFancyQuotes2 = force? useFancyQuotes1;
          checkMissing(useFancyQuotes2);
          return useFancyQuotes2;
        };
        r2 = dyn sQuote[, q](p, p1);
        return r2;
      };
      p3 = prom<V +>{
        collapse1 = ld collapse;
        collapse2 = force? collapse1;
        checkMissing(collapse2);
        return collapse2;
      };
      r5 = dyn paste[, collapse](p2, p3);
      return r5;
    };
    r7 = dyn strwrap[, exdent](p4, 2);
    check L9() else D1();
  D1():
    deopt 5 [r7];
  L9():
    st xx = r7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L2(r9):
    r11 = `>`(r9, 1);
    c = `as.logical`(r11);
    if c then L3(c) else L14();
  L10():
    xx = ld xx;
    check L12() else D2();
  L11():
    r8 = dyn base(<sym xx>);
    goto L2(r8);
  D2():
    deopt 9 [xx];
  L3(c1):
    c12 = `as.logical`(c1);
    if c12 then L24() else L6();
  L12():
    xx1 = force? xx;
    checkMissing(xx1);
    length = ldf length in base;
    r10 = dyn length(xx1);
    check L13() else D3();
  L14():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D3():
    deopt 12 [r10];
  L4(c5, r13):
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L6():
    paste1 = ldf paste;
    check L32() else D12();
  L13():
    goto L2(r10);
  L15():
    msg1 = ld msg;
    check L17() else D4();
  L16():
    r12 = dyn base1(<sym msg>);
    goto L4(c, r12);
  L24():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D4():
    deopt 17 [c, msg1];
  D12():
    deopt 53 [];
  L5(c8, r18, r19):
    r21 = `+`(r18, r19);
    r22 = `+`(r21, 1);
    r23 = `>`(r22, 75);
    c9 = `as.logical`(r23);
    c10 = `||`(c8, c9);
    goto L3(c10);
  L7(r25):
    popenv;
    return r25;
  L17():
    msg2 = force? msg1;
    checkMissing(msg2);
    nchar = ldf nchar in base;
    r14 = dyn nchar(msg2, "chars", FALSE, NA_LGL);
    check L18() else D5();
  L19():
    xx2 = ld xx;
    check L21() else D6();
  L20():
    r17 = dyn base2(<sym xx>);
    goto L5(c5, r13, r17);
  L25():
    msg3 = ld msg;
    check L27() else D8();
  L26():
    r24 = dyn base3(<sym msg>, <lang .pretty_format(x, collapse=collapse, q=useFancyQuotes)>);
    goto L7(r24);
  L32():
    p8 = prom<V +>{
      msg5 = ld msg;
      msg6 = force? msg5;
      checkMissing(msg6);
      return msg6;
    };
    p9 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r33 = dyn paste1(p8, p9);
    check L33() else D13();
  D5():
    deopt 23 [c, r14];
  D6():
    deopt 25 [c5, r13, xx2];
  D8():
    deopt 40 [msg3];
  D13():
    deopt 56 [r33];
  L18():
    goto L4(c, r14);
  L21():
    xx3 = force? xx2;
    checkMissing(xx3);
    nchar1 = ldf nchar in base;
    r20 = dyn nchar1(xx3, "chars", FALSE, NA_LGL);
    check L22() else D7();
  L27():
    msg4 = force? msg3;
    checkMissing(msg4);
    _pretty_format = ldf `.pretty_format`;
    check L28() else D9();
  L33():
    popenv;
    return r33;
  D7():
    deopt 31 [c5, r13, r20];
  D9():
    deopt 43 [];
  L22():
    goto L5(c5, r13, r20);
  L28():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p6 = prom<V +>{
      collapse3 = ld collapse;
      collapse4 = force? collapse3;
      checkMissing(collapse4);
      return collapse4;
    };
    p7 = prom<V +>{
      useFancyQuotes3 = ld useFancyQuotes;
      useFancyQuotes4 = force? useFancyQuotes3;
      checkMissing(useFancyQuotes4);
      return useFancyQuotes4;
    };
    r29 = dyn _pretty_format[, collapse, q](p5, p6, p7);
    check L29() else D10();
  D10():
    deopt 49 [r29];
  L29():
    c13 = ldf c in base;
    r30 = dyn c13(msg4, r29);
    check L30() else D11();
  D11():
    deopt 51 [r30];
  L30():
    goto L7(r30);
  }
}