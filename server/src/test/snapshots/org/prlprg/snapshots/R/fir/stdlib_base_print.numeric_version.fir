fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-796907711`;
    st `print.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-796907711`(x, quote, `...`) {
  (reg x:*, reg quote:*, reg ddd:dots) -+> V { var x:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg y:*, reg y1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg writeLines:cls, reg gettext:cls, reg r7:V, reg p:p(V +), reg r9:V, reg print:cls, reg ifelse:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg y2:*, reg y3:V, reg is_na:cls, reg r13:V, reg p1:p(V +), reg sQuote:cls, reg y4:*, reg y5:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg quote1:*, reg quote2:V, reg p5:p(V +), reg ddd1:dots?, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg x3:*, reg x4:V, reg invisible:cls, reg r24:V |
    mkenv;
    st x = x;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L0(FALSE) else L0(quote);
  L0(quote_orDefault):
    st quote = quote_orDefault;
    st `...` = ddd;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    st y = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L14() else L3();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(x2);
    check L9() else D1();
  L10():
    y = ld y;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym y>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [y];
  L3():
    print = ldf print;
    check L18() else D6();
  L4():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L9():
    goto L1(r2);
  L12():
    y1 = force? y;
    checkMissing(y1);
    length = ldf length in base;
    r5 = dyn length(y1);
    check L13() else D3();
  L14():
    writeLines = ldf writeLines;
    check L15() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [];
  D6():
    deopt 19 [];
  L5(r23):
    popenv;
    return r23;
  L13():
    goto L2(r5);
  L15():
    p = prom<V +>{
      gettext = ldf gettext;
      r7 = dyn gettext("<0 elements>");
      return r7;
    };
    r9 = dyn writeLines(p);
    check L16() else D5();
  L18():
    p4 = prom<V +>{
      ifelse = ldf ifelse;
      p1 = prom<V +>{
        sym2 = ldf `is.na`;
        base2 = ldf `is.na` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        is_na = ldf `is.na` in base;
        r13 = dyn is_na(y3);
        goto L0(r13);
      L2():
        r11 = dyn base2(<sym y>);
        goto L0(r11);
      };
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          y4 = ld y;
          y5 = force? y4;
          checkMissing(y5);
          return y5;
        };
        r16 = dyn sQuote(p2);
        return r16;
      };
      r18 = dyn ifelse(p1, NA_STR, p3);
      return r18;
    };
    p5 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    ddd1 = ld `...`;
    r21 = dyn print[, quote, `...`](p4, p5, ddd1);
    check L19() else D7();
  L20():
    x3 = ld x;
    check L22() else D8();
  L21():
    r22 = dyn base3(<sym x>);
    goto L5(r22);
  D5():
    deopt 17 [r9];
  D7():
    deopt 24 [r21];
  D8():
    deopt 27 [x3];
  L16():
    goto L4();
  L19():
    goto L4();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r24 = dyn invisible(x4);
    check L23() else D9();
  D9():
    deopt 30 [r24];
  L23():
    goto L5(r24);
  }
}