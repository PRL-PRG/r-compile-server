fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1350575936;
    st `print.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1350575936(x, quote, `...`) {
  (reg x:*, reg quote:*, reg ddd:dots) -+> V { var x:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg print:cls, reg as_character_roman:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg quote1:*, reg quote2:V, reg p2:p(V +), reg ddd1:dots?, reg r7:V, reg cat:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg invisible:cls, reg r12:V |
    mkenv;
    st x = x;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L0(FALSE) else L0(quote);
  L0(quote_orDefault):
    st quote = quote_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c = `as.logical`(r1);
    if c then L9() else L2();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    cat = ldf cat;
    check L13() else D4();
  L3():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L8() else D1();
  L9():
    print = ldf print;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 14 [];
  L4(r11):
    popenv;
    return r11;
  L8():
    goto L1(r2);
  L10():
    p1 = prom<V +>{
      as_character_roman = ldf `as.character.roman`;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r4 = dyn as_character_roman(p);
      return r4;
    };
    p2 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    ddd1 = ld `...`;
    r7 = dyn print[, quote, `...`](p1, p2, ddd1);
    check L11() else D3();
  L13():
    r9 = dyn cat("<0-length roman>\n");
    check L14() else D5();
  L15():
    x5 = ld x;
    check L17() else D6();
  L16():
    r10 = dyn base1(<sym x>);
    goto L4(r10);
  D3():
    deopt 12 [r7];
  D5():
    deopt 16 [r9];
  D6():
    deopt 19 [x5];
  L11():
    goto L3();
  L14():
    goto L3();
  L17():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r12 = dyn invisible(x6);
    check L18() else D7();
  D7():
    deopt 22 [r12];
  L18():
    goto L4(r12);
  }
}