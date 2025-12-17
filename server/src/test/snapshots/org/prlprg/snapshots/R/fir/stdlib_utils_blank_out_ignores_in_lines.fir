fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2973771521;
    st blank_out_ignores_in_lines = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2973771521(lines, ignore) {
  (reg lines:*, reg ignore:*) -+> V { var lines:*, var ignore:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ignore1:*, reg ignore2:V, reg is_list:cls, reg r5:V, reg c:L, reg ignore3:*, reg ignore4:V, reg c1:L, reg ignore6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg ignore7:*, reg ignore8:V, reg c2:L, reg ignore10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg ignore11:*, reg ignore12:V, reg c3:L, reg ignore14:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg ignore17:V, reg r9:V, reg ignore18:*, reg ignore19:V, reg nzchar:cls, reg r10:V, reg __2:cls, reg r11:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg do_call:cls, reg blank_out_regexp_matches:*, reg blank_out_regexp_matches1:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg lines1:*, reg lines2:V, reg re:*, reg re1:V, reg list1:cls, reg r17:V, reg args:*, reg args1:V, reg c5:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg lines3:*, reg lines4:V |
    mkenv;
    st lines = lines;
    st ignore = ignore;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    st args = r1;
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L10():
    list = ldf list in base;
    r2 = dyn list();
    check L12() else D0();
  L11():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    c = `as.logical`(r4);
    if c then L17() else L2();
  L12():
    goto L0(r2);
  L13():
    ignore1 = ld ignore;
    check L15() else D1();
  L14():
    r3 = dyn base1(<sym ignore>);
    goto L1(r3);
  D1():
    deopt 7 [ignore1];
  L2():
    goto L5();
  L5():
    ignore11 = ld ignore;
    check L27() else D5();
  L15():
    ignore2 = force? ignore1;
    checkMissing(ignore2);
    is_list = ldf `is.list` in base;
    r5 = dyn is_list(ignore2);
    check L16() else D2();
  L17():
    ignore3 = ld ignore;
    check L18() else D3();
  D2():
    deopt 10 [r5];
  D3():
    deopt 11 [ignore3];
  D5():
    deopt 25 [ignore11];
  L16():
    goto L1(r5);
  L18():
    ignore4 = force? ignore3;
    checkMissing(ignore4);
    c1 = `is.object`(ignore4);
    if c1 then L19() else L20(ignore4);
  L27():
    ignore12 = force? ignore11;
    checkMissing(ignore12);
    c3 = `is.object`(ignore12);
    if c3 then L28() else L29(ignore12);
  L3(dx1):
    st args = dx1;
    ignore7 = ld ignore;
    check L22() else D4();
  L6(dx6):
    s = toForSeq(dx6);
    l = length(s);
    i = 0;
    goto L8(i);
  L19():
    dr = tryDispatchBuiltin.1("[", ignore4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(ignore6):
    __ = ldf `[` in base;
    r6 = dyn __(ignore6, -1);
    goto L3(r6);
  L28():
    dr4 = tryDispatchBuiltin.1("[", ignore12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(dr4);
  L29(ignore14):
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D4():
    deopt 17 [ignore7];
  L7(ignore17, r9):
    __2 = ldf `[` in base;
    r11 = dyn __2(ignore17, r9);
    goto L6(r11);
  L8(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L35() else L9();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    ignore8 = force? ignore7;
    checkMissing(ignore8);
    c2 = `is.object`(ignore8);
    if c2 then L23() else L24(ignore8);
  L30():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx5);
  L31():
    ignore18 = ld ignore;
    check L33() else D6();
  L32():
    r8 = dyn base2(<sym ignore>);
    goto L7(ignore14, r8);
  D6():
    deopt 29 [ignore14, ignore18];
  L4(dx3):
    st ignore = dx3;
    goto L5();
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st re = x;
    do_call = ldf `do.call`;
    check L36() else D8();
  L23():
    dr2 = tryDispatchBuiltin.1("[[", ignore8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(ignore10):
    __1 = ldf `[[` in base;
    r7 = dyn __1(ignore10, 1);
    goto L4(r7);
  L33():
    ignore19 = force? ignore18;
    checkMissing(ignore19);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(ignore19);
    check L34() else D7();
  L35():
    lines3 = ld lines;
    check L38() else D10();
  D7():
    deopt 32 [ignore14, r10];
  D8():
    deopt 35 [i2];
  D10():
    deopt 43 [lines3];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L34():
    goto L7(ignore14, r10);
  L36():
    p = prom<V +>{
      blank_out_regexp_matches = ld blank_out_regexp_matches;
      blank_out_regexp_matches1 = force? blank_out_regexp_matches;
      checkMissing(blank_out_regexp_matches1);
      return blank_out_regexp_matches1;
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r14):
      return r14;
    L2():
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r13 = dyn base3(<lang list(lines, re)>, <sym args>);
      goto L0(r13);
    L1(r16):
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      c5 = ldf c in base;
      r18 = dyn c5(r16, args1);
      goto L0(r18);
    L4():
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      list1 = ldf list in base;
      r17 = dyn list1(lines2, re1);
      goto L1(r17);
    L5():
      r15 = dyn base4(<sym lines>, <sym re>);
      goto L1(r15);
    };
    r20 = dyn do_call(p, p1);
    check L37() else D9();
  L38():
    lines4 = force? lines3;
    checkMissing(lines4);
    popenv;
    return lines4;
  D9():
    deopt 38 [i2, r20];
  L37():
    st lines = r20;
    goto L8(i2);
  }
}