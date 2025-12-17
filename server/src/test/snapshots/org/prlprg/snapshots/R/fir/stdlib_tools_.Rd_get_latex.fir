fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_latex` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg tempfile:cls, reg r:V, reg options:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg on_exit:cls, reg r4:V, reg tryCatch:cls, reg Rd2latex:cls, reg x1:*, reg x2:V, reg p:p(V +), reg tf:*, reg tf1:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:cls, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg readLines:cls, reg tf2:*, reg tf3:V, reg p4:p(V +), reg r15:V, reg enc2utf8:cls, reg r16:V |
    mkenv;
    st x = x;
    tempfile = ldf tempfile;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn tempfile();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st tf = r;
    options = ldf options;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    r1 = dyn options[useFancyQuotes](FALSE);
    check L5() else D3();
  D3():
    deopt 8 [r1];
  L5():
    st save = r1;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    tryCatch = ldf tryCatch;
    check L8() else D4();
  L6():
    on_exit = ldf `on.exit` in base;
    r4 = dyn on_exit(<lang {
      options(save);
      unlink(tf)
    }>);
    goto L0();
  L7():
    r2 = dyn base(<lang {
      options(save);
      unlink(tf)
    }>);
    goto L0();
  D4():
    deopt 14 [];
  L8():
    p2 = prom<V +>{
      Rd2latex = ldf Rd2latex;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        tf = ld tf;
        tf1 = force? tf;
        checkMissing(tf1);
        return tf1;
      };
      r7 = dyn Rd2latex[, , fragment, outputEncoding](p, p1, TRUE, "UTF-8");
      return r7;
    };
    p3 = prom<V +>{
      r9 = clos inner3708401697;
      return r9;
    };
    r11 = dyn tryCatch[, error](p2, p3);
    check L9() else D5();
  D5():
    deopt 18 [r11];
  L9():
    sym1 = ldf enc2utf8;
    base1 = ldf enc2utf8 in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r13):
    popenv;
    return r13;
  L10():
    readLines = ldf readLines;
    check L12() else D6();
  L11():
    r12 = dyn base1(<lang readLines(tf, warn=FALSE, encoding="UTF-8")>);
    goto L1(r12);
  D6():
    deopt 22 [];
  L12():
    p4 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r15 = dyn readLines[, warn, encoding](p4, FALSE, "UTF-8");
    check L13() else D7();
  D7():
    deopt 28 [r15];
  L13():
    enc2utf8 = ldf enc2utf8 in base;
    r16 = dyn enc2utf8(r15);
    check L14() else D8();
  D8():
    deopt 30 [r16];
  L14():
    goto L1(r16);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg character:cls, reg r:V |
    mkenv;
    st e = e;
    character = ldf character;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn character();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}