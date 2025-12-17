fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st SweaveGetSyntax = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg apropos:cls, reg r:V, reg synt:*, reg synt1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg get:cls, reg sname:*, reg sname1:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg i7:I, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg i10:I, reg r6:V, reg s1:*, reg s2:V, reg class:cls, reg r7:V, reg identical:cls, reg r8:V, reg r9:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg i17:I, reg r12:V, reg grep:cls, reg s3:*, reg s4:V, reg c2:L, reg s6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg p1:p(V +), reg file1:*, reg file2:V, reg p2:p(V +), reg r16:V, reg length:cls, reg r17:V, reg c3:L, reg s7:*, reg s8:V, reg SweaveSyntaxNoweb:*, reg SweaveSyntaxNoweb1:V |
    mkenv;
    st file = file;
    apropos = ldf apropos;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r = dyn apropos[, mode]("SweaveSyntax", "list");
    check L10() else D1();
  D1():
    deopt 5 [r];
  L10():
    st synt = r;
    synt = ld synt;
    check L11() else D2();
  D2():
    deopt 7 [synt];
  L11():
    synt1 = force? synt;
    checkMissing(synt1);
    s = toForSeq(synt1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L12() else L8();
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st sname = x;
    get = ldf get;
    check L13() else D3();
  L12():
    SweaveSyntaxNoweb = ld SweaveSyntaxNoweb;
    check L34() else D12();
  D3():
    deopt 10 [i2];
  D12():
    deopt 56 [SweaveSyntaxNoweb];
  L13():
    p = prom<V +>{
      sname = ld sname;
      sname1 = force? sname;
      checkMissing(sname1);
      return sname1;
    };
    r2 = dyn get[, mode](p, "list");
    check L14() else D4();
  L34():
    SweaveSyntaxNoweb1 = force? SweaveSyntaxNoweb;
    checkMissing(SweaveSyntaxNoweb1);
    popenv;
    return SweaveSyntaxNoweb1;
  D4():
    deopt 14 [i2, r2];
  L14():
    st s = r2;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(i7, r4):
    r9 = `!`(r4);
    c1 = `as.logical`(r9);
    if c1 then L22() else L3();
  L15():
    sym1 = ldf class;
    base1 = ldf class in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L16():
    r3 = dyn base(<lang class(s)>, "SweaveSyntax");
    goto L1(i2, r3);
  L2(i10, r6):
    identical = ldf identical in base;
    r8 = dyn identical(r6, "SweaveSyntax", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L21() else D7();
  L3():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L17():
    s1 = ld s;
    check L19() else D5();
  L18():
    r5 = dyn base1(<sym s>);
    goto L2(i2, r5);
  L22():
    goto L0(i7);
  D5():
    deopt 20 [i2, s1];
  D7():
    deopt 33 [i10, r8];
  L5(i17, r12):
    c3 = `as.logical`(r12);
    if c3 then L30() else L6();
  L19():
    s2 = force? s1;
    checkMissing(s2);
    class = ldf class in base;
    r7 = dyn class(s2);
    check L20() else D6();
  L21():
    goto L1(i10, r8);
  L25():
    grep = ldf grep;
    check L27() else D8();
  L26():
    r11 = dyn base2(<lang grep(`$`(s, extension), file)>);
    goto L5(i7, r11);
  D6():
    deopt 23 [i2, r7];
  D8():
    deopt 42 [i7];
  L6():
    goto L0(i17);
  L20():
    goto L2(i2, r7);
  L27():
    p1 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      c2 = `is.object`(s4);
      if c2 then L1() else L2(s4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", s4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(s6):
      r13 = `$`(s6, <sym extension>);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r16 = dyn grep(p1, p2);
    check L28() else D9();
  L30():
    s7 = ld s;
    check L31() else D11();
  D9():
    deopt 45 [i7, r16];
  D11():
    deopt 48 [i17, s7];
  L28():
    length = ldf length in base;
    r17 = dyn length(r16);
    check L29() else D10();
  L31():
    s8 = force? s7;
    checkMissing(s8);
    popenv;
    return s8;
  D10():
    deopt 47 [i7, r17];
  L29():
    goto L5(i7, r17);
  }
}