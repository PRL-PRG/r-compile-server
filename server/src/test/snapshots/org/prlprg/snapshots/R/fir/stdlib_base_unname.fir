fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg stats:*, reg stats1:V, reg p1:p(V +), reg r8:V, reg rt:cls, reg r9:V, reg r10:V, reg r11:V, reg factor:cls, reg cut:cls, reg col3:*, reg col4:V, reg p2:p(V +), reg r13:V, reg r14:V, reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg table:cls, reg breaks:*, reg breaks1:V, reg p5:p(V +), reg r21:V, reg z:*, reg z1:V, reg c:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r22:V, reg barplot:cls, reg unname:cls, reg z4:*, reg z5:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V |
    mkenv;
    r = clos inner1343425191;
    st unname = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    rt = ldf rt;
    check L11() else D4();
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    require1 = ldf require;
    check L9() else D2();
  L8():
    r5 = dyn base1(<sym stats>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [750.0, 100.0];
  L6():
    goto L0();
  L9():
    p1 = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r8 = dyn require1(p1);
    check L10() else D3();
  L11():
    r9 = dyn rt[, df](1500.0, 3.0);
    check L12() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 20 [750.0, 100.0, r9];
  L10():
    goto L1();
  L12():
    r10 = `*`(100.0, r9);
    r11 = `+`(750.0, r10);
    st col3 = r11;
    factor = ldf factor;
    check L13() else D6();
  D6():
    deopt 25 [];
  L13():
    p4 = prom<V +>{
      cut = ldf cut;
      p2 = prom<V +>{
        col3 = ld col3;
        col4 = force? col3;
        checkMissing(col4);
        return col4;
      };
      p3 = prom<V +>{
        r13 = `:`(0.0, 155.0);
        r14 = `*`(5.0, r13);
        r15 = `+`(360.0, r14);
        return r15;
      };
      r17 = dyn cut[, breaks](p2, p3);
      return r17;
    };
    r19 = dyn factor(p4);
    check L14() else D7();
  D7():
    deopt 27 [r19];
  L14():
    st breaks = r19;
    table = ldf table;
    check L15() else D8();
  D8():
    deopt 30 [];
  L15():
    p5 = prom<V +>{
      breaks = ld breaks;
      breaks1 = force? breaks;
      checkMissing(breaks1);
      return breaks1;
    };
    r21 = dyn table(p5);
    check L16() else D9();
  D9():
    deopt 32 [r21];
  L16():
    st z = r21;
    z = ld z;
    check L17() else D10();
  D10():
    deopt 34 [z];
  L17():
    z1 = force? z;
    checkMissing(z1);
    c = `is.object`(z1);
    if c then L18() else L19(z1);
  L2():
    barplot = ldf barplot;
    check L21() else D11();
  L18():
    dr = tryDispatchBuiltin.1("[", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(z3):
    __ = ldf `[` in base;
    r22 = dyn __(z3, <int 1, 2, 3, 4, 5>);
    goto L2();
  D11():
    deopt 40 [];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L21():
    p7 = prom<V +>{
      unname = ldf unname;
      p6 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        return z5;
      };
      r24 = dyn unname(p6);
      return r24;
    };
    r26 = dyn barplot[, axes](p7, FALSE);
    check L22() else D12();
  D12():
    deopt 44 [r26];
  L22():
    popenv;
    return r26;
  }
}
fun inner1343425191(obj, force) {
  (reg obj:*, reg force:*) -+> V { var obj:*, var force:*, reg force_isMissing:L, reg force_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg obj1:*, reg obj2:V, reg names:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg l:*, reg names__:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg obj3:*, reg obj4:V, reg dimnames:cls, reg r12:V, reg c2:V, reg r13:V, reg c3:L, reg c5:V, reg force1:*, reg force2:V, reg c6:L, reg c7:L, reg c8:V, reg is_data_frame:cls, reg obj5:*, reg obj6:V, reg p:p(V +), reg r15:V, reg r16:V, reg c11:L, reg c12:V, reg c15:L, reg c16:V, reg c18:L, reg l1:*, reg dimnames__:cls, reg r17:V, reg obj7:*, reg obj8:V |
    mkenv;
    st obj = obj;
    force_isMissing = missing.0(force);
    if force_isMissing then L0(FALSE) else L0(force);
  L0(force_orDefault):
    st force = force_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L17() else L3();
  L11():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r = dyn base(<lang names(obj)>);
    goto L1(r);
  L2(r3):
    c = `==`(r3, NULL);
    goto L1(c);
  L3():
    goto L4();
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L13():
    obj1 = ld obj;
    check L15() else D0();
  L14():
    r2 = dyn base1(<sym obj>);
    goto L2(r2);
  L17():
    l = ld obj;
    names__ = ldf `names<-`;
    check L18() else D2();
  D0():
    deopt 3 [obj1];
  D2():
    deopt 12 [NULL, l, NULL];
  L5(r9):
    r13 = `!`(r9);
    c3 = `as.logical`(r13);
    if c3 then L27() else L7(c3);
  L15():
    obj2 = force? obj1;
    checkMissing(obj2);
    names = ldf names in base;
    r4 = dyn names(obj2);
    check L16() else D1();
  L18():
    r6 = dyn names__(l, NULL, NULL);
    check L19() else D3();
  L21():
    sym3 = ldf dimnames;
    base3 = ldf dimnames in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L22():
    r8 = dyn base2(<lang dimnames(obj)>);
    goto L5(r8);
  D1():
    deopt 6 [r4];
  D3():
    deopt 14 [NULL, r6];
  L6(r11):
    c2 = `==`(r11, NULL);
    goto L5(c2);
  L7(c5):
    c18 = `as.logical`(c5);
    if c18 then L34() else L9();
  L16():
    goto L2(r4);
  L19():
    st obj = r6;
    goto L4();
  L23():
    obj3 = ld obj;
    check L25() else D4();
  L24():
    r10 = dyn base3(<sym obj>);
    goto L6(r10);
  L27():
    force1 = ld force;
    check L28() else D6();
  D4():
    deopt 21 [obj3];
  D6():
    deopt 27 [c3, force1];
  L9():
    goto L10();
  L10():
    obj7 = ld obj;
    check L38() else D11();
  L25():
    obj4 = force? obj3;
    checkMissing(obj4);
    dimnames = ldf dimnames in base;
    r12 = dyn dimnames(obj4);
    check L26() else D5();
  L28():
    force2 = force? force1;
    checkMissing(force2);
    c6 = `as.logical`(force2);
    if c6 then L8(c3, c6) else L29();
  L34():
    l1 = ld obj;
    dimnames__ = ldf `dimnames<-`;
    check L35() else D9();
  D5():
    deopt 24 [r12];
  D9():
    deopt 39 [NULL, l1, NULL];
  D11():
    deopt 45 [obj7];
  L8(c7, c8):
    c15 = `as.logical`(c8);
    c16 = `&&`(c7, c15);
    goto L7(c16);
  L26():
    goto L6(r12);
  L29():
    is_data_frame = ldf `is.data.frame`;
    check L30() else D7();
  L35():
    r17 = dyn dimnames__(l1, NULL, NULL);
    check L36() else D10();
  L38():
    obj8 = force? obj7;
    checkMissing(obj8);
    popenv;
    return obj8;
  D7():
    deopt 30 [c3, c6];
  D10():
    deopt 41 [NULL, r17];
  L30():
    p = prom<V +>{
      obj5 = ld obj;
      obj6 = force? obj5;
      checkMissing(obj6);
      return obj6;
    };
    r15 = dyn is_data_frame(p);
    check L31() else D8();
  L36():
    st obj = r17;
    goto L10();
  D8():
    deopt 32 [c3, c6, r15];
  L31():
    r16 = `!`(r15);
    c11 = `as.logical`(r16);
    c12 = `||`(c6, c11);
    goto L8(c3, c12);
  }
}