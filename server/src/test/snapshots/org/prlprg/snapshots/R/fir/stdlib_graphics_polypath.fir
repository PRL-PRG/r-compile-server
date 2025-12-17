fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg r2:cls, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg plotRules:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg plotRules1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg c4:cls, reg r23:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg c5:cls, reg r27:V, reg p5:p(V +), reg r29:V, reg plotRules2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg c6:cls, reg r32:V, reg p6:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg c7:cls, reg r36:V, reg p7:p(V +), reg r38:V, reg plotRules3:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg c8:cls, reg r41:V, reg p8:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg c9:cls, reg r45:V, reg p9:p(V +), reg r47:V, reg plotRules4:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg c10:cls, reg r50:V, reg p10:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg c11:cls, reg r54:V, reg p11:p(V +), reg r56:V, reg par1:cls, reg op:*, reg op1:V, reg p12:p(V +), reg r58:V |
    mkenv;
    r = clos inner901459129;
    st polypath = r;
    r1 = clos inner2751230428;
    st plotPath = r1;
    r2 = clos inner3458008435;
    st plotRules = r2;
    par = ldf par;
    check L0() else D0();
  D0():
    deopt 10 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c(5.0, 3.0);
      goto L0(r5);
    L2():
      r3 = dyn base(5.0, 3.0);
      goto L0(r3);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1(2.0, 1.0, 1.0, 1.0);
      goto L0(r9);
    L2():
      r7 = dyn base1(2.0, 1.0, 1.0, 1.0);
      goto L0(r7);
    };
    r11 = dyn par[mfrow, mar](p, p1);
    check L1() else D1();
  D1():
    deopt 15 [r11];
  L1():
    st op = r11;
    plotRules = ldf plotRules;
    check L2() else D2();
  D2():
    deopt 18 [];
  L2():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c2 = ldf c in base;
      r14 = dyn c2(0.1, 0.1, 0.9, 0.9, NA_LGL, 0.2, 0.2, 0.8, 0.8);
      goto L0(r14);
    L2():
      r12 = dyn base2(0.1, 0.1, 0.9, 0.9, NA_LGL, 0.2, 0.2, 0.8, 0.8);
      goto L0(r12);
    };
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3(0.1, 0.9, 0.9, 0.1, NA_LGL, 0.2, 0.8, 0.8, 0.2);
      goto L0(r18);
    L2():
      r16 = dyn base3(0.1, 0.9, 0.9, 0.1, NA_LGL, 0.2, 0.8, 0.8, 0.2);
      goto L0(r16);
    };
    r20 = dyn plotRules(p2, p3, "Nested rectangles, both clockwise");
    check L3() else D3();
  D3():
    deopt 22 [r20];
  L3():
    plotRules1 = ldf plotRules;
    check L4() else D4();
  D4():
    deopt 24 [];
  L4():
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c4 = ldf c in base;
      r23 = dyn c4(0.1, 0.1, 0.9, 0.9, NA_LGL, 0.2, 0.8, 0.8, 0.2);
      goto L0(r23);
    L2():
      r21 = dyn base4(0.1, 0.1, 0.9, 0.9, NA_LGL, 0.2, 0.8, 0.8, 0.2);
      goto L0(r21);
    };
    p5 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c5 = ldf c in base;
      r27 = dyn c5(0.1, 0.9, 0.9, 0.1, NA_LGL, 0.2, 0.2, 0.8, 0.8);
      goto L0(r27);
    L2():
      r25 = dyn base5(0.1, 0.9, 0.9, 0.1, NA_LGL, 0.2, 0.2, 0.8, 0.8);
      goto L0(r25);
    };
    r29 = dyn plotRules1(p4, p5, "Nested rectangles, outer clockwise, inner anti-clockwise");
    check L5() else D5();
  D5():
    deopt 28 [r29];
  L5():
    plotRules2 = ldf plotRules;
    check L6() else D6();
  D6():
    deopt 30 [];
  L6():
    p6 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c6 = ldf c in base;
      r32 = dyn c6(0.1, 0.1, 0.4, 0.4, NA_LGL, 0.6, 0.9, 0.9, 0.6);
      goto L0(r32);
    L2():
      r30 = dyn base6(0.1, 0.1, 0.4, 0.4, NA_LGL, 0.6, 0.9, 0.9, 0.6);
      goto L0(r30);
    };
    p7 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c7 = ldf c in base;
      r36 = dyn c7(0.1, 0.4, 0.4, 0.1, NA_LGL, 0.6, 0.6, 0.9, 0.9);
      goto L0(r36);
    L2():
      r34 = dyn base7(0.1, 0.4, 0.4, 0.1, NA_LGL, 0.6, 0.6, 0.9, 0.9);
      goto L0(r34);
    };
    r38 = dyn plotRules2(p6, p7, "Disjoint rectangles");
    check L7() else D7();
  D7():
    deopt 34 [r38];
  L7():
    plotRules3 = ldf plotRules;
    check L8() else D8();
  D8():
    deopt 36 [];
  L8():
    p8 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c8 = ldf c in base;
      r41 = dyn c8(0.1, 0.1, 0.6, 0.6, NA_LGL, 0.4, 0.4, 0.9, 0.9);
      goto L0(r41);
    L2():
      r39 = dyn base8(0.1, 0.1, 0.6, 0.6, NA_LGL, 0.4, 0.4, 0.9, 0.9);
      goto L0(r39);
    };
    p9 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      c9 = ldf c in base;
      r45 = dyn c9(0.1, 0.6, 0.6, 0.1, NA_LGL, 0.4, 0.9, 0.9, 0.4);
      goto L0(r45);
    L2():
      r43 = dyn base9(0.1, 0.6, 0.6, 0.1, NA_LGL, 0.4, 0.9, 0.9, 0.4);
      goto L0(r43);
    };
    r47 = dyn plotRules3(p8, p9, "Overlapping rectangles, both clockwise");
    check L9() else D9();
  D9():
    deopt 40 [r47];
  L9():
    plotRules4 = ldf plotRules;
    check L10() else D10();
  D10():
    deopt 42 [];
  L10():
    p10 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      c10 = ldf c in base;
      r50 = dyn c10(0.1, 0.1, 0.6, 0.6, NA_LGL, 0.4, 0.9, 0.9, 0.4);
      goto L0(r50);
    L2():
      r48 = dyn base10(0.1, 0.1, 0.6, 0.6, NA_LGL, 0.4, 0.9, 0.9, 0.4);
      goto L0(r48);
    };
    p11 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c11 = ldf c in base;
      r54 = dyn c11(0.1, 0.6, 0.6, 0.1, NA_LGL, 0.4, 0.4, 0.9, 0.9);
      goto L0(r54);
    L2():
      r52 = dyn base11(0.1, 0.6, 0.6, 0.1, NA_LGL, 0.4, 0.4, 0.9, 0.9);
      goto L0(r52);
    };
    r56 = dyn plotRules4(p10, p11, "Overlapping rectangles, one clockwise, other anti-clockwise");
    check L11() else D11();
  D11():
    deopt 46 [r56];
  L11():
    par1 = ldf par;
    check L12() else D12();
  D12():
    deopt 48 [];
  L12():
    p12 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r58 = dyn par1(p12);
    check L13() else D13();
  D13():
    deopt 50 [r58];
  L13():
    popenv;
    return r58;
  }
}
fun inner901459129(x, y, border, col, lty, rule, `...`) {
  (reg x:*, reg y:*, reg border:*, reg col:*, reg lty:*, reg rule:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var rule:*, reg rule_isMissing:L, reg rule_orDefault:*, var `...`:dots?, reg xy_coords:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg y1:*, reg y2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg border1:*, reg border2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg border3:*, reg border4:V, reg is_na:cls, reg r9:V, reg r10:V, reg c2:L, reg c4:V, reg border5:*, reg border6:V, reg c5:L, reg c6:V, reg c8:L, reg par1:cls, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg rule1:*, reg rule2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c9:cls, reg r18:V, reg match:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg rule3:*, reg rule4:V, reg is_na1:cls, reg r22:V, reg c10:L, reg stop:cls, reg r23:V, reg which:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg xy:*, reg xy1:V, reg c11:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg is_na2:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg r33:V, reg xy4:*, reg xy5:V, reg c12:L, reg r35:V, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r37:V, reg dx3:V, reg r38:V, reg is_na3:cls, reg r39:V, reg r40:V, reg p3:p(V +), reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg breaks:*, reg breaks1:V, reg length:cls, reg r45:V, reg r46:V, reg c13:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg _External_graphics:cls, reg C_path:*, reg C_path1:V, reg p4:p(V +), reg xy8:*, reg xy9:V, reg c14:L, reg xy11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r50:V, reg p5:p(V +), reg xy12:*, reg xy13:V, reg c15:L, reg xy15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r52:V, reg p6:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg xy16:*, reg xy17:V, reg c16:L, reg xy19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r58:V, reg length1:cls, reg r59:V, reg as_integer:cls, reg r60:V, reg p7:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r62:V, reg r63:V, reg rule5:*, reg rule6:V, reg as_integer1:cls, reg r64:V, reg p8:p(V +), reg col1:*, reg col2:V, reg p9:p(V +), reg border7:*, reg border8:V, reg p10:p(V +), reg lty1:*, reg lty2:V, reg p11:p(V +), reg ddd1:dots?, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg breaks2:*, reg breaks3:V, reg length2:cls, reg r73:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg r75:V, reg breaks4:*, reg breaks5:V, reg c17:L, reg breaks7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __:cls, reg r76:V, reg r77:V, reg diff:cls, reg breaks8:*, reg breaks9:V, reg p12:p(V +), reg r79:V, reg r80:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r81:V, reg r82:V, reg xy20:*, reg xy21:V, reg c18:L, reg xy23:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r83:V, reg length3:cls, reg r84:V, reg breaks10:*, reg breaks11:V, reg c19:L, reg r86:V, reg breaks13:V, reg dr14:V, reg dc7:L, reg dx14:V, reg r88:V, reg dx15:V, reg nb:*, reg nb1:V, reg __1:cls, reg r89:V, reg r90:V, reg c20:cls, reg r91:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r92:V, reg _External_graphics1:cls, reg C_path2:*, reg C_path3:V, reg p13:p(V +), reg xy24:*, reg xy25:V, reg c21:L, reg xy27:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r94:V, reg c22:L, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg breaks14:*, reg breaks15:V, reg r95:V, reg __2:cls, reg r96:V, reg p14:p(V +), reg xy28:*, reg xy29:V, reg c23:L, reg xy31:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r98:V, reg c24:L, reg dx25:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg breaks16:*, reg breaks17:V, reg r99:V, reg __3:cls, reg r100:V, reg p15:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r102:V, reg r103:V, reg lengths:*, reg lengths1:V, reg as_integer2:cls, reg r104:V, reg p16:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r106:V, reg r107:V, reg rule7:*, reg rule8:V, reg as_integer3:cls, reg r108:V, reg p17:p(V +), reg col3:*, reg col4:V, reg p18:p(V +), reg border9:*, reg border10:V, reg p19:p(V +), reg lty3:*, reg lty4:V, reg p20:p(V +), reg ddd2:dots?, reg r113:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r114:V, reg r115:V, reg invisible:cls, reg r116:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L1(NULL) else L1(border);
  L1(border_orDefault):
    st border = border_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L2(NA_LGL) else L2(col);
  L2(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L3() else L4(lty);
  L3():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("lty");
      return r;
    };
    goto L4(p);
  L4(lty_orDefault):
    st lty = lty_orDefault;
    rule_isMissing = missing.0(rule);
    if rule_isMissing then L5("winding") else L5(rule);
  L5(rule_orDefault):
    st rule = rule_orDefault;
    st `...` = ddd;
    xy_coords = ldf `xy.coords`;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r4 = dyn xy_coords[, , setLab](p1, p2, FALSE);
    check L29() else D1();
  D1():
    deopt 6 [r4];
  L29():
    st xy = r4;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L6(r6):
    c1 = `as.logical`(r6);
    if c1 then L33() else L7();
  L30():
    border1 = ld border;
    check L32() else D2();
  L31():
    r5 = dyn base(<sym border>);
    goto L6(r5);
  D2():
    deopt 9 [border1];
  L7():
    goto L12();
  L12():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L32():
    border2 = force? border1;
    checkMissing(border2);
    c = `is.logical`(border2);
    goto L6(c);
  L33():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L8(r8):
    r10 = `!`(r8);
    c2 = `as.logical`(r10);
    if c2 then L38() else L9(c2);
  L13(r15):
    st rule = r15;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L34():
    border3 = ld border;
    check L36() else D3();
  L35():
    r7 = dyn base1(<sym border>);
    goto L8(r7);
  L46():
    rule1 = ld rule;
    check L48() else D8();
  L47():
    r14 = dyn base2(<sym rule>, <lang c("winding", "evenodd")>);
    goto L13(r14);
  D3():
    deopt 14 [border3];
  D8():
    deopt 34 [rule1];
  L9(c4):
    c8 = `as.logical`(c4);
    if c8 then L41() else L10();
  L15(r21):
    c10 = `as.logical`(r21);
    if c10 then L57() else L16();
  L36():
    border4 = force? border3;
    checkMissing(border4);
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(border4);
    check L37() else D4();
  L38():
    border5 = ld border;
    check L39() else D5();
  L48():
    rule2 = force? rule1;
    checkMissing(rule2);
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L53():
    rule3 = ld rule;
    check L55() else D11();
  L54():
    r20 = dyn base4(<sym rule>);
    goto L15(r20);
  D4():
    deopt 17 [r9];
  D5():
    deopt 19 [c2, border5];
  D11():
    deopt 49 [rule3];
  L10():
    st border = NA_LGL;
    goto L11(NA_LGL);
  L11(r12):
    goto L12();
  L14(r17):
    match = ldf match in base;
    r19 = dyn match(rule2, r17, NA_INT, NULL);
    check L52() else D10();
  L16():
    goto L17();
  L17():
    which = ldf which;
    check L61() else D15();
  L37():
    goto L8(r9);
  L39():
    border6 = force? border5;
    checkMissing(border6);
    c5 = `as.logical`(border6);
    c6 = `&&`(c2, c5);
    goto L9(c6);
  L41():
    par1 = ldf par;
    check L42() else D6();
  L49():
    c9 = ldf c in base;
    r18 = dyn c9("winding", "evenodd");
    check L51() else D9();
  L50():
    r16 = dyn base3("winding", "evenodd");
    goto L14(r16);
  L55():
    rule4 = force? rule3;
    checkMissing(rule4);
    is_na1 = ldf `is.na` in base;
    r22 = dyn is_na1(rule4);
    check L56() else D12();
  L57():
    stop = ldf stop;
    check L58() else D13();
  D6():
    deopt 23 [];
  D9():
    deopt 41 [r18];
  D10():
    deopt 45 [r19];
  D12():
    deopt 52 [r22];
  D13():
    deopt 54 [];
  D15():
    deopt 60 [];
  L42():
    r11 = dyn par1("fg");
    check L43() else D7();
  L51():
    goto L14(r18);
  L52():
    goto L13(r19);
  L56():
    goto L15(r22);
  L58():
    r23 = dyn stop("Invalid fill rule for graphics path");
    check L59() else D14();
  L61():
    p3 = prom<V +>{
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r26):
      sym6 = ldf `is.na`;
      base6 = ldf `is.na` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L8() else L9();
    L2():
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      c11 = `is.object`(xy1);
      if c11 then L5() else L6(xy1);
    L3():
      r25 = dyn base5(<lang `$`(xy, x)>);
      goto L0(r25);
    L1(r32, r33):
      r40 = `||`(r32, r33);
      return r40;
    L4(dx1):
      is_na2 = ldf `is.na` in base;
      r28 = dyn is_na2(dx1);
      goto L0(r28);
    L5():
      dr = tryDispatchBuiltin.1("$", xy1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(xy3):
      r27 = `$`(xy3, <sym x>);
      goto L4(r27);
    L8():
      xy4 = ld xy;
      xy5 = force? xy4;
      checkMissing(xy5);
      c12 = `is.object`(xy5);
      if c12 then L11() else L12(r26, xy5);
    L9():
      r31 = dyn base6(<lang `$`(xy, y)>);
      goto L1(r26, r31);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L4(dx);
    L10(r37, dx3):
      is_na3 = ldf `is.na` in base;
      r39 = dyn is_na3(dx3);
      goto L1(r37, r39);
    L11():
      dr2 = tryDispatchBuiltin.1("$", xy5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L13() else L12(r26, dr2);
    L12(r35, xy7):
      r38 = `$`(xy7, <sym y>);
      goto L10(r35, r38);
    L13():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L10(r26, dx2);
    };
    r42 = dyn which(p3);
    check L62() else D16();
  D7():
    deopt 25 [r11];
  D14():
    deopt 56 [r23];
  D16():
    deopt 62 [r42];
  L43():
    st border = r11;
    goto L11(r11);
  L59():
    goto L17();
  L62():
    st breaks = r42;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  L18(r44):
    r46 = `==`(r44, 0.0);
    c13 = `as.logical`(r46);
    if c13 then L67() else L19();
  L63():
    breaks = ld breaks;
    check L65() else D17();
  L64():
    r43 = dyn base7(<sym breaks>);
    goto L18(r43);
  D17():
    deopt 66 [breaks];
  L19():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L73() else L74();
  L21():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L103() else L104();
  L65():
    breaks1 = force? breaks;
    checkMissing(breaks1);
    length = ldf length in base;
    r45 = dyn length(breaks1);
    check L66() else D18();
  L67():
    sym8 = ldf `.External.graphics`;
    base8 = ldf `.External.graphics` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L68() else L69();
  D18():
    deopt 69 [r45];
  L20(r48):
    goto L21();
  L22(r72):
    st nb = r72;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L77() else L78();
  L27(r115):
    popenv;
    return r115;
  L66():
    goto L18(r45);
  L68():
    _External_graphics = ldf `.External.graphics`;
    check L70() else D19();
  L69():
    r47 = dyn base8(<sym C_path>, <lang `$`(xy, x)>, <lang `$`(xy, y)>, <lang as.integer(length(`$`(xy, x)))>, <lang as.integer(rule)>, <sym col>, <sym border>, <sym lty>, <sym ...>);
    goto L20(r47);
  L73():
    breaks2 = ld breaks;
    check L75() else D21();
  L74():
    r71 = dyn base12(<sym breaks>);
    goto L22(r71);
  L103():
    invisible = ldf invisible in base;
    r116 = dyn invisible();
    check L105() else D33();
  L104():
    r114 = dyn base18();
    goto L27(r114);
  D19():
    deopt 74 [];
  D21():
    deopt 87 [breaks2];
  D33():
    deopt 138 [r116];
  L23(r75):
    st lengths = r75;
    sym15 = ldf `.External.graphics`;
    base15 = ldf `.External.graphics` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L99() else L100();
  L70():
    p4 = prom<V +>{
      C_path = ld C_path;
      C_path1 = force? C_path;
      checkMissing(C_path1);
      return C_path1;
    };
    p5 = prom<V +>{
      xy8 = ld xy;
      xy9 = force? xy8;
      checkMissing(xy9);
      c14 = `is.object`(xy9);
      if c14 then L1() else L2(xy9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", xy9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xy11):
      r50 = `$`(xy11, <sym x>);
      goto L0(r50);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      xy12 = ld xy;
      xy13 = force? xy12;
      checkMissing(xy13);
      c15 = `is.object`(xy13);
      if c15 then L1() else L2(xy13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", xy13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(xy15):
      r52 = `$`(xy15, <sym y>);
      goto L0(r52);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      sym9 = ldf `as.integer`;
      base9 = ldf `as.integer` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r55):
      return r55;
    L2():
      sym10 = ldf length;
      base10 = ldf length in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r54 = dyn base9(<lang length(`$`(xy, x))>);
      goto L0(r54);
    L1(r57):
      as_integer = ldf `as.integer` in base;
      r60 = dyn as_integer(r57);
      goto L0(r60);
    L4():
      xy16 = ld xy;
      xy17 = force? xy16;
      checkMissing(xy17);
      c16 = `is.object`(xy17);
      if c16 then L7() else L8(xy17);
    L5():
      r56 = dyn base10(<lang `$`(xy, x)>);
      goto L1(r56);
    L6(dx9):
      length1 = ldf length in base;
      r59 = dyn length1(dx9);
      goto L1(r59);
    L7():
      dr8 = tryDispatchBuiltin.1("$", xy17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L9() else L8(dr8);
    L8(xy19):
      r58 = `$`(xy19, <sym x>);
      goto L6(r58);
    L9():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L6(dx8);
    };
    p8 = prom<V +>{
      sym11 = ldf `as.integer`;
      base11 = ldf `as.integer` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      rule5 = ld rule;
      rule6 = force? rule5;
      checkMissing(rule6);
      as_integer1 = ldf `as.integer` in base;
      r64 = dyn as_integer1(rule6);
      goto L0(r64);
    L2():
      r62 = dyn base11(<sym rule>);
      goto L0(r62);
    };
    p9 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p10 = prom<V +>{
      border7 = ld border;
      border8 = force? border7;
      checkMissing(border8);
      return border8;
    };
    p11 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    ddd1 = ld `...`;
    r69 = dyn _External_graphics[, , , , , , , , `...`](p4, p5, p6, p7, p8, p9, p10, p11, ddd1);
    check L71() else D20();
  L75():
    breaks3 = force? breaks2;
    checkMissing(breaks3);
    length2 = ldf length in base;
    r73 = dyn length2(breaks3);
    check L76() else D22();
  L77():
    breaks4 = ld breaks;
    check L79() else D23();
  L78():
    r74 = dyn base13(<lang `-`(`[`(breaks, 1.0), 1.0)>, <lang `-`(diff(breaks), 1.0)>, <lang `-`(length(`$`(xy, x)), `[`(breaks, nb))>);
    goto L23(r74);
  L105():
    goto L27(r116);
  D20():
    deopt 84 [r69];
  D22():
    deopt 90 [r73];
  D23():
    deopt 94 [breaks4];
  L71():
    goto L20(r69);
  L76():
    goto L22(r73);
  L79():
    breaks5 = force? breaks4;
    checkMissing(breaks5);
    c17 = `is.object`(breaks5);
    if c17 then L80() else L81(breaks5);
  L99():
    _External_graphics1 = ldf `.External.graphics`;
    check L101() else D31();
  L100():
    r92 = dyn base15(<sym C_path>, <lang `[`(`$`(xy, x), `-`(breaks))>, <lang `[`(`$`(xy, y), `-`(breaks))>, <lang as.integer(lengths)>, <lang as.integer(rule)>, <sym col>, <sym border>, <sym lty>, <sym ...>);
    goto L21();
  D31():
    deopt 124 [];
  L24(dx11):
    r77 = `-`(dx11, 1.0);
    diff = ldf diff;
    check L83() else D24();
  L80():
    dr10 = tryDispatchBuiltin.1("[", breaks5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L82() else L81(dr10);
  L81(breaks7):
    __ = ldf `[` in base;
    r76 = dyn __(breaks7, 1.0);
    goto L24(r76);
  L101():
    p13 = prom<V +>{
      C_path2 = ld C_path;
      C_path3 = force? C_path2;
      checkMissing(C_path3);
      return C_path3;
    };
    p14 = prom<V +>{
      xy24 = ld xy;
      xy25 = force? xy24;
      checkMissing(xy25);
      c21 = `is.object`(xy25);
      if c21 then L2() else L3(xy25);
    L1(dx17):
      c22 = `is.object`(dx17);
      if c22 then L5() else L6(dx17);
    L2():
      dr16 = tryDispatchBuiltin.1("$", xy25);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(xy27):
      r94 = `$`(xy27, <sym x>);
      goto L1(r94);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx16);
    L5():
      dr18 = tryDispatchBuiltin.1("[", dx17);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx19):
      breaks14 = ld breaks;
      breaks15 = force? breaks14;
      checkMissing(breaks15);
      r95 = `-`(<missing>, breaks15);
      __2 = ldf `[` in base;
      r96 = dyn __2(dx19, r95);
      goto L0(r96);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p15 = prom<V +>{
      xy28 = ld xy;
      xy29 = force? xy28;
      checkMissing(xy29);
      c23 = `is.object`(xy29);
      if c23 then L2() else L3(xy29);
    L1(dx23):
      c24 = `is.object`(dx23);
      if c24 then L5() else L6(dx23);
    L2():
      dr20 = tryDispatchBuiltin.1("$", xy29);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(xy31):
      r98 = `$`(xy31, <sym y>);
      goto L1(r98);
    L0(dx27):
      return dx27;
    L4():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx22);
    L5():
      dr22 = tryDispatchBuiltin.1("[", dx23);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(dx25):
      breaks16 = ld breaks;
      breaks17 = force? breaks16;
      checkMissing(breaks17);
      r99 = `-`(<missing>, breaks17);
      __3 = ldf `[` in base;
      r100 = dyn __3(dx25, r99);
      goto L0(r100);
    L7():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx26);
    };
    p16 = prom<V +>{
      sym16 = ldf `as.integer`;
      base16 = ldf `as.integer` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r103):
      return r103;
    L1():
      lengths = ld lengths;
      lengths1 = force? lengths;
      checkMissing(lengths1);
      as_integer2 = ldf `as.integer` in base;
      r104 = dyn as_integer2(lengths1);
      goto L0(r104);
    L2():
      r102 = dyn base16(<sym lengths>);
      goto L0(r102);
    };
    p17 = prom<V +>{
      sym17 = ldf `as.integer`;
      base17 = ldf `as.integer` in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r107):
      return r107;
    L1():
      rule7 = ld rule;
      rule8 = force? rule7;
      checkMissing(rule8);
      as_integer3 = ldf `as.integer` in base;
      r108 = dyn as_integer3(rule8);
      goto L0(r108);
    L2():
      r106 = dyn base17(<sym rule>);
      goto L0(r106);
    };
    p18 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p19 = prom<V +>{
      border9 = ld border;
      border10 = force? border9;
      checkMissing(border10);
      return border10;
    };
    p20 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    ddd2 = ld `...`;
    r113 = dyn _External_graphics1[, , , , , , , , `...`](p13, p14, p15, p16, p17, p18, p19, p20, ddd2);
    check L102() else D32();
  D24():
    deopt 102 [];
  D32():
    deopt 134 [r113];
  L82():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L24(dx10);
  L83():
    p12 = prom<V +>{
      breaks8 = ld breaks;
      breaks9 = force? breaks8;
      checkMissing(breaks9);
      return breaks9;
    };
    r79 = dyn diff(p12);
    check L84() else D25();
  L102():
    goto L21();
  D25():
    deopt 104 [r79];
  L84():
    r80 = `-`(r79, 1.0);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L85() else L86();
  L25(r82):
    breaks10 = ld breaks;
    check L93() else D28();
  L85():
    xy20 = ld xy;
    check L87() else D26();
  L86():
    r81 = dyn base14(<lang `$`(xy, x)>);
    goto L25(r81);
  D26():
    deopt 109 [xy20];
  D28():
    deopt 113 [r82, breaks10];
  L87():
    xy21 = force? xy20;
    checkMissing(xy21);
    c18 = `is.object`(xy21);
    if c18 then L89() else L90(xy21);
  L93():
    breaks11 = force? breaks10;
    checkMissing(breaks11);
    c19 = `is.object`(breaks11);
    if c19 then L94() else L95(r82, breaks11);
  L26(r88, dx15):
    r90 = `-`(r88, dx15);
    c20 = ldf c in base;
    r91 = dyn c20(r77, r80, r90);
    check L98() else D30();
  L88(dx13):
    length3 = ldf length in base;
    r84 = dyn length3(dx13);
    check L92() else D27();
  L89():
    dr12 = tryDispatchBuiltin.1("$", xy21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L91() else L90(dr12);
  L90(xy23):
    r83 = `$`(xy23, <sym x>);
    goto L88(r83);
  L94():
    dr14 = tryDispatchBuiltin.1("[", breaks11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L96() else L95(r82, dr14);
  L95(r86, breaks13):
    nb = ld nb;
    check L97() else D29();
  D27():
    deopt 113 [r84];
  D29():
    deopt 115 [r86, breaks13, nb];
  D30():
    deopt 120 [r91];
  L91():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L88(dx12);
  L92():
    goto L25(r84);
  L96():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L26(r82, dx14);
  L97():
    nb1 = force? nb;
    __1 = ldf `[` in base;
    r89 = dyn __1(breaks13, nb1);
    goto L26(r86, r89);
  L98():
    goto L23(r91);
  }
}
fun inner2751230428(x, y, col, rule) {
  (reg x:*, reg y:*, reg col:*, reg rule:*) -+> V { var x:*, var y:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var rule:*, reg rule_isMissing:L, reg rule_orDefault:*, reg plot_new:cls, reg r:V, reg plot_window:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg range:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg y1:*, reg y2:V, reg range1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg polypath:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg y3:*, reg y4:V, reg p3:p(V +), reg col1:*, reg col2:V, reg p4:p(V +), reg rule1:*, reg rule2:V, reg p5:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg col3:*, reg col4:V, reg is_na:cls, reg r17:V, reg r18:V, reg c:L, reg mtext:cls, reg paste:cls, reg rule3:*, reg rule4:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V |
    mkenv;
    st x = x;
    st y = y;
    col_isMissing = missing.0(col);
    if col_isMissing then L0("grey") else L0(col);
  L0(col_orDefault):
    st col = col_orDefault;
    rule_isMissing = missing.0(rule);
    if rule_isMissing then L1("winding") else L1(rule);
  L1(rule_orDefault):
    st rule = rule_orDefault;
    plot_new = ldf `plot.new`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn plot_new();
    check L5() else D1();
  D1():
    deopt 2 [r];
  L5():
    plot_window = ldf `plot.window`;
    check L6() else D2();
  D2():
    deopt 4 [];
  L6():
    p = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      range = ldf range in base;
      r3 = dyn range(x2, TRUE);
      goto L0(r3);
    L2():
      r1 = dyn base[, `na.rm`](<sym x>, TRUE);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      range1 = ldf range in base;
      r7 = dyn range1(y2, TRUE);
      goto L0(r7);
    L2():
      r5 = dyn base1[, `na.rm`](<sym y>, TRUE);
      goto L0(r5);
    };
    r9 = dyn plot_window(p, p1);
    check L7() else D3();
  D3():
    deopt 7 [r9];
  L7():
    polypath = ldf polypath;
    check L8() else D4();
  D4():
    deopt 9 [];
  L8():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p4 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p5 = prom<V +>{
      rule1 = ld rule;
      rule2 = force? rule1;
      checkMissing(rule2);
      return rule2;
    };
    r14 = dyn polypath[, , col, rule](p2, p3, p4, p5);
    check L9() else D5();
  D5():
    deopt 16 [r14];
  L9():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L2(r16):
    r18 = `!`(r16);
    c = `as.logical`(r18);
    if c then L14() else L3();
  L10():
    col3 = ld col;
    check L12() else D6();
  L11():
    r15 = dyn base2(<sym col>);
    goto L2(r15);
  D6():
    deopt 19 [col3];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L12():
    col4 = force? col3;
    checkMissing(col4);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(col4);
    check L13() else D7();
  L14():
    mtext = ldf mtext;
    check L15() else D8();
  D7():
    deopt 22 [r17];
  D8():
    deopt 25 [];
  L13():
    goto L2(r17);
  L15():
    p7 = prom<V +>{
      paste = ldf paste;
      p6 = prom<V +>{
        rule3 = ld rule;
        rule4 = force? rule3;
        checkMissing(rule4);
        return rule4;
      };
      r20 = dyn paste("Rule:", p6);
      return r20;
    };
    r22 = dyn mtext[, side, line](p7, 1.0, 0.0);
    check L16() else D9();
  D9():
    deopt 31 [r22];
  L16():
    popenv;
    return r22;
  }
}
fun inner3458008435(x, y, title) {
  (reg x:*, reg y:*, reg title:*) -+> V { var x:*, var y:*, var title:*, reg plotPath:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg plotPath1:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg y3:*, reg y4:V, reg p3:p(V +), reg r5:V, reg mtext:cls, reg title1:*, reg title2:V, reg p4:p(V +), reg r7:V, reg plotPath2:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg y5:*, reg y6:V, reg p6:p(V +), reg r10:V |
    mkenv;
    st x = x;
    st y = y;
    st title = title;
    plotPath = ldf plotPath;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn plotPath(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    plotPath1 = ldf plotPath;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r5 = dyn plotPath1[, , rule](p2, p3, "evenodd");
    check L3() else D3();
  D3():
    deopt 11 [r5];
  L3():
    mtext = ldf mtext;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p4 = prom<V +>{
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    };
    r7 = dyn mtext[, side, line](p4, 3.0, 0.0);
    check L5() else D5();
  D5():
    deopt 19 [r7];
  L5():
    plotPath2 = ldf plotPath;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p6 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r10 = dyn plotPath2[, , col](p5, p6, NA_LGL);
    check L7() else D7();
  D7():
    deopt 26 [r10];
  L7():
    popenv;
    return r10;
  }
}