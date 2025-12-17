fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner535632477;
    st cleanRfuns = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner535632477(val) {
  (reg val:*) -+> V { var val:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grepl:cls, reg val1:*, reg val2:V, reg p:p(V +), reg r3:V, reg any:cls, reg r4:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg grepl1:cls, reg val3:*, reg val4:V, reg p1:p(V +), reg r8:V, reg any1:cls, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg val5:*, reg val6:V, reg c10:L, reg val8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grepl2:cls, reg val9:*, reg val10:V, reg p2:p(V +), reg r11:V, reg r12:V, reg __:cls, reg r13:V, reg val11:*, reg val12:V, reg c11:L, reg val14:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg grepl3:cls, reg val15:*, reg val16:V, reg p3:p(V +), reg r15:V, reg r16:V, reg __1:cls, reg r17:V |
    mkenv;
    st val = val;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L1(c);
  L7():
    grepl = ldf grepl;
    check L9() else D0();
  L8():
    r = dyn base(<lang grepl("^_*Rf_XLENGTH_*$", val)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L19() else L3();
  L9():
    p = prom<V +>{
      val1 = ld val;
      val2 = force? val1;
      checkMissing(val2);
      return val2;
    };
    r3 = dyn grepl("^_*Rf_XLENGTH_*$", p);
    check L10() else D1();
  L12():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D1():
    deopt 6 [r3];
  L2(c5, r6):
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L5();
  L5():
    val11 = ld val;
    check L27() else D9();
  L10():
    any = ldf any in base;
    r4 = dyn any(r3);
    check L11() else D2();
  L13():
    grepl1 = ldf grepl;
    check L15() else D3();
  L14():
    r5 = dyn base1(<lang grepl("^_*XLENGTH_*$", val)>);
    goto L2(c, r5);
  L19():
    val5 = ld val;
    check L20() else D6();
  D2():
    deopt 8 [r4];
  D3():
    deopt 12 [c];
  D6():
    deopt 19 [val5];
  D9():
    deopt 31 [val11];
  L11():
    goto L0(r4);
  L15():
    p1 = prom<V +>{
      val3 = ld val;
      val4 = force? val3;
      checkMissing(val4);
      return val4;
    };
    r8 = dyn grepl1("^_*XLENGTH_*$", p1);
    check L16() else D4();
  L20():
    val6 = force? val5;
    checkMissing(val6);
    c10 = `is.object`(val6);
    if c10 then L21() else L22(val6);
  L27():
    val12 = force? val11;
    checkMissing(val12);
    c11 = `is.object`(val12);
    if c11 then L28() else L29(val12);
  D4():
    deopt 15 [c, r8];
  L4(dx1):
    st val = dx1;
    goto L5();
  L6(dx4):
    popenv;
    return dx4;
  L16():
    any1 = ldf any in base;
    r9 = dyn any1(r8);
    check L17() else D5();
  L21():
    dr = tryDispatchBuiltin.1("[", val6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(val8):
    grepl2 = ldf grepl;
    check L24() else D7();
  L28():
    dr2 = tryDispatchBuiltin.1("[", val12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(dr2);
  L29(val14):
    grepl3 = ldf grepl;
    check L31() else D10();
  D5():
    deopt 17 [c, r9];
  D7():
    deopt 22 [val8];
  D10():
    deopt 34 [val14];
  L17():
    goto L2(c, r9);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L24():
    p2 = prom<V +>{
      val9 = ld val;
      val10 = force? val9;
      checkMissing(val10);
      return val10;
    };
    r11 = dyn grepl2("^_*XLENGTH_*$", p2);
    check L25() else D8();
  L30():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx3);
  L31():
    p3 = prom<V +>{
      val15 = ld val;
      val16 = force? val15;
      checkMissing(val16);
      return val16;
    };
    r15 = dyn grepl3("tre_|^_*(main|MAIN|start)_*$|yyparse", p3);
    check L32() else D11();
  D8():
    deopt 25 [val8, r11];
  D11():
    deopt 37 [val14, r15];
  L25():
    r12 = `!`(r11);
    __ = ldf `[` in base;
    r13 = dyn __(val8, r12);
    goto L4(r13);
  L32():
    r16 = `!`(r15);
    __1 = ldf `[` in base;
    r17 = dyn __1(val14, r16);
    goto L6(r17);
  }
}