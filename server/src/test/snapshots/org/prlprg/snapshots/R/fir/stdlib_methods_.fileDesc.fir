fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st `.fileDesc` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg file3:*, reg file4:V, reg nzchar:cls, reg r4:V, reg c2:L, reg paste:cls, reg sQuote:cls, reg file5:*, reg file6:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg file7:*, reg file8:V, reg inherits:cls, reg r11:V, reg c3:L, reg paste1:cls, reg sQuote1:cls, reg summary:cls, reg file9:*, reg file10:V, reg p2:p(V +), reg r13:V, reg c4:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V |
    mkenv;
    st file = file;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L1();
  L6():
    file1 = ld file;
    check L8() else D0();
  L7():
    r = dyn base(<sym file>);
    goto L0(r);
  D0():
    deopt 1 [file1];
  L1():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L8():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L0(c);
  L9():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r3):
    c2 = `as.logical`(r3);
    if c2 then L14() else L3();
  L4(r10):
    c3 = `as.logical`(r10);
    if c3 then L23() else L5();
  L10():
    file3 = ld file;
    check L12() else D1();
  L11():
    r2 = dyn base1(<sym file>);
    goto L2(r2);
  L19():
    file7 = ld file;
    check L21() else D5();
  L20():
    r9 = dyn base2(<sym file>, "connection");
    goto L4(r9);
  D1():
    deopt 6 [file3];
  D5():
    deopt 19 [file7];
  L3():
    popenv;
    return " to the standard output connection";
  L5():
    popenv;
    return "";
  L12():
    file4 = force? file3;
    checkMissing(file4);
    nzchar = ldf nzchar in base;
    r4 = dyn nzchar(file4);
    check L13() else D2();
  L14():
    paste = ldf paste;
    check L15() else D3();
  L21():
    file8 = force? file7;
    checkMissing(file8);
    inherits = ldf inherits in base;
    r11 = dyn inherits(file8, "connection", FALSE);
    check L22() else D6();
  L23():
    paste1 = ldf paste;
    check L24() else D7();
  D2():
    deopt 9 [r4];
  D3():
    deopt 11 [];
  D6():
    deopt 24 [r11];
  D7():
    deopt 26 [];
  L13():
    goto L2(r4);
  L15():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        file5 = ld file;
        file6 = force? file5;
        checkMissing(file6);
        return file6;
      };
      r6 = dyn sQuote(p);
      return r6;
    };
    r8 = dyn paste(" to the file", p1);
    check L16() else D4();
  L22():
    goto L4(r11);
  L24():
    p4 = prom<V +>{
      sQuote1 = ldf sQuote;
      p3 = prom<V +>{
        summary = ldf summary;
        p2 = prom<V +>{
          file9 = ld file;
          file10 = force? file9;
          checkMissing(file10);
          return file10;
        };
        r13 = dyn summary(p2);
        c4 = `is.object`(r13);
        if c4 then L1() else L2(r13);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", r13);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r15):
        r16 = `$`(r15, <sym description>);
        goto L0(r16);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r18 = dyn sQuote1(p3);
      return r18;
    };
    r20 = dyn paste1(" to the connection", p4);
    check L25() else D8();
  D4():
    deopt 14 [r8];
  D8():
    deopt 29 [r20];
  L16():
    popenv;
    return r8;
  L25():
    popenv;
    return r20;
  }
}