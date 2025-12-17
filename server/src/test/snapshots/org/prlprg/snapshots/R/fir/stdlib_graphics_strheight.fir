fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3674721102;
    st strheight = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3674721102(s, units, cex, font, vfont, `...`) {
  (reg s:*, reg units:*, reg cex:*, reg font:*, reg vfont:*, reg ddd:dots) -+> V { var s:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var font:*, reg font_isMissing:L, reg font_orDefault:*, var vfont:*, reg vfont_isMissing:L, reg vfont_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vfont1:*, reg vfont2:V, reg c:V, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg pmatch:cls, reg vfont3:*, reg vfont4:V, reg c2:L, reg vfont6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg Hershey:*, reg Hershey1:V, reg c3:L, reg Hershey3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p1:p(V +), reg r9:V, reg pmatch1:cls, reg vfont7:*, reg vfont8:V, reg c4:L, reg vfont10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r10:V, reg p2:p(V +), reg Hershey4:*, reg Hershey5:V, reg c5:L, reg Hershey7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg p3:p(V +), reg r14:V, reg c6:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg _External_graphics:cls, reg C_strHeight:*, reg C_strHeight1:V, reg p4:p(V +), reg as_graphicsAnnot:cls, reg s1:*, reg s2:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg pmatch2:cls, reg units1:*, reg units2:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg c7:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg cex1:*, reg cex2:V, reg p10:p(V +), reg font1:*, reg font2:V, reg p11:p(V +), reg vfont11:*, reg vfont12:V, reg p12:p(V +), reg ddd1:dots?, reg r33:V |
    mkenv;
    st s = s;
    units_isMissing = missing.0(units);
    if units_isMissing then L0("user") else L0(units);
  L0(units_orDefault):
    st units = units_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L1(NULL) else L1(cex);
  L1(cex_orDefault):
    st cex = cex_orDefault;
    font_isMissing = missing.0(font);
    if font_isMissing then L2(NULL) else L2(font);
  L2(font_orDefault):
    st font = font_orDefault;
    vfont_isMissing = missing.0(vfont);
    if vfont_isMissing then L3(NULL) else L3(vfont);
  L3(vfont_orDefault):
    st vfont = vfont_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L4(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L12() else L5();
  L9():
    vfont1 = ld vfont;
    check L11() else D0();
  L10():
    r = dyn base(<sym vfont>);
    goto L4(r);
  D0():
    deopt 1 [vfont1];
  L5():
    goto L7();
  L7():
    sym2 = ldf `.External.graphics`;
    base2 = ldf `.External.graphics` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L11():
    vfont2 = force? vfont1;
    checkMissing(vfont2);
    c = `==`(vfont2, NULL);
    goto L4(c);
  L12():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L6(r4):
    st vfont = r4;
    goto L7();
  L8(r18):
    popenv;
    return r18;
  L13():
    pmatch = ldf pmatch;
    check L15() else D1();
  L14():
    r3 = dyn base1[typeface, fontindex](<lang pmatch(`[`(vfont, 1), `$`(Hershey, typeface))>, <lang pmatch(`[`(vfont, 2), `$`(Hershey, fontindex))>);
    goto L6(r3);
  L21():
    _External_graphics = ldf `.External.graphics`;
    check L23() else D6();
  L22():
    r17 = dyn base2(<sym C_strHeight>, <lang as.graphicsAnnot(s)>, <lang pmatch(units, c("user", "figure", "inches"))>, <sym cex>, <sym font>, <sym vfont>, <sym ...>);
    goto L8(r17);
  D1():
    deopt 8 [];
  D6():
    deopt 26 [];
  L15():
    p = prom<V +>{
      vfont3 = ld vfont;
      vfont4 = force? vfont3;
      checkMissing(vfont4);
      c2 = `is.object`(vfont4);
      if c2 then L1() else L2(vfont4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", vfont4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(vfont6):
      __ = ldf `[` in base;
      r5 = dyn __(vfont6, 1);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      Hershey = ld Hershey;
      Hershey1 = force? Hershey;
      checkMissing(Hershey1);
      c3 = `is.object`(Hershey1);
      if c3 then L1() else L2(Hershey1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", Hershey1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(Hershey3):
      r7 = `$`(Hershey3, <sym typeface>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r9 = dyn pmatch(p, p1);
    check L16() else D2();
  L23():
    p4 = prom<V +>{
      C_strHeight = ld C_strHeight;
      C_strHeight1 = force? C_strHeight;
      checkMissing(C_strHeight1);
      return C_strHeight1;
    };
    p6 = prom<V +>{
      as_graphicsAnnot = ldf `as.graphicsAnnot`;
      p5 = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r21 = dyn as_graphicsAnnot(p5);
      return r21;
    };
    p9 = prom<V +>{
      pmatch2 = ldf pmatch;
      p7 = prom<V +>{
        units1 = ld units;
        units2 = force? units1;
        checkMissing(units2);
        return units2;
      };
      p8 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r25):
        return r25;
      L1():
        c7 = ldf c in base;
        r26 = dyn c7("user", "figure", "inches");
        goto L0(r26);
      L2():
        r24 = dyn base3("user", "figure", "inches");
        goto L0(r24);
      };
      r28 = dyn pmatch2(p7, p8);
      return r28;
    };
    p10 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p11 = prom<V +>{
      font1 = ld font;
      font2 = force? font1;
      checkMissing(font2);
      return font2;
    };
    p12 = prom<V +>{
      vfont11 = ld vfont;
      vfont12 = force? vfont11;
      checkMissing(vfont12);
      return vfont12;
    };
    ddd1 = ld `...`;
    r33 = dyn _External_graphics[, , , , , , `...`](p4, p6, p9, p10, p11, p12, ddd1);
    check L24() else D7();
  D2():
    deopt 11 [r9];
  D7():
    deopt 34 [r33];
  L16():
    pmatch1 = ldf pmatch;
    check L17() else D3();
  L24():
    goto L8(r33);
  D3():
    deopt 14 [];
  L17():
    p2 = prom<V +>{
      vfont7 = ld vfont;
      vfont8 = force? vfont7;
      checkMissing(vfont8);
      c4 = `is.object`(vfont8);
      if c4 then L1() else L2(vfont8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", vfont8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(vfont10):
      __1 = ldf `[` in base;
      r10 = dyn __1(vfont10, 2);
      goto L0(r10);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      Hershey4 = ld Hershey;
      Hershey5 = force? Hershey4;
      checkMissing(Hershey5);
      c5 = `is.object`(Hershey5);
      if c5 then L1() else L2(Hershey5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", Hershey5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(Hershey7):
      r12 = `$`(Hershey7, <sym fontindex>);
      goto L0(r12);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r14 = dyn pmatch1(p2, p3);
    check L18() else D4();
  D4():
    deopt 17 [r14];
  L18():
    c6 = ldf c in base;
    r15 = dyn c6(r9, r14);
    check L19() else D5();
  D5():
    deopt 20 [r15];
  L19():
    goto L6(r15);
  }
}