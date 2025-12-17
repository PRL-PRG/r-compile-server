fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2407698021;
    st evalq = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2407698021(expr, envir, enclos) {
  (reg expr:*, reg envir:*, reg enclos:*) -+> V { var expr:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var enclos:*, reg enclos_isMissing:L, reg enclos_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg envir1:*, reg envir2:V, reg is_list:cls, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg envir3:*, reg envir4:V, reg is_pairlist:cls, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg parent_frame1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg baseenv:cls, reg r11:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg substitute:cls, reg r17:V, reg envir5:*, reg envir6:V, reg enclos1:*, reg enclos2:V, reg eval:cls, reg r18:V |
    mkenv;
    st expr = expr;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    enclos_isMissing = missing.0(enclos);
    if enclos_isMissing then L2() else L3(enclos);
  L2():
    p1 = prom<V +>{
      sym = ldf `is.list`;
      base = ldf `is.list` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L0(r3):
      c = `as.logical`(r3);
      if c then L1(c) else L7();
    L5():
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      is_list = ldf `is.list` in base;
      r4 = dyn is_list(envir2);
      goto L0(r4);
    L6():
      r2 = dyn base(<sym envir>);
      goto L0(r2);
    L1(c1):
      c9 = `as.logical`(c1);
      if c9 then L11() else L3();
    L7():
      sym1 = ldf `is.pairlist`;
      base1 = ldf `is.pairlist` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(c5, r6):
      c6 = `as.logical`(r6);
      c7 = `||`(c5, c6);
      goto L1(c7);
    L3():
      sym2 = ldf baseenv;
      base2 = ldf baseenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L13() else L14();
    L8():
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      is_pairlist = ldf `is.pairlist` in base;
      r7 = dyn is_pairlist(envir4);
      goto L2(c, r7);
    L9():
      r5 = dyn base1(<sym envir>);
      goto L2(c, r5);
    L11():
      parent_frame1 = ldf `parent.frame`;
      r8 = dyn parent_frame1();
      return r8;
    L4(r10):
      return r10;
    L13():
      baseenv = ldf baseenv in base;
      r11 = dyn baseenv();
      goto L4(r11);
    L14():
      r9 = dyn base2();
      goto L4(r9);
    };
    goto L3(p1);
  L3(enclos_orDefault):
    st enclos = enclos_orDefault;
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L6() else L7();
  L4(r14):
    popenv;
    return r14;
  L6():
    sym4 = ldf substitute;
    base4 = ldf substitute in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L8() else L9();
  L7():
    r13 = dyn base3(<lang eval(substitute(expr), envir, enclos)>);
    goto L4(r13);
  L5(r16):
    envir5 = ld envir;
    check L10() else D0();
  L8():
    substitute = ldf substitute in base;
    r17 = dyn substitute(<sym expr>);
    goto L5(r17);
  L9():
    r15 = dyn base4(<sym expr>);
    goto L5(r15);
  D0():
    deopt 5 [envir5];
  L10():
    envir6 = force? envir5;
    checkMissing(envir6);
    enclos1 = ld enclos;
    check L11() else D1();
  D1():
    deopt 7 [enclos1];
  L11():
    enclos2 = force? enclos1;
    checkMissing(enclos2);
    eval = ldf eval in base;
    r18 = dyn eval(r16, envir6, enclos2);
    check L12() else D2();
  D2():
    deopt 10 [r18];
  L12():
    goto L4(r18);
  }
}