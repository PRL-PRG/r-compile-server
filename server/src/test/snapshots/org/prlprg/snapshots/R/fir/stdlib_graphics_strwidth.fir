fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg par:cls, reg r4:V, reg plot:cls, reg r5:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg strwidth:cls, reg str_ex:*, reg str_ex1:V, reg p2:p(V +), reg r11:V, reg sw:*, reg sw1:V, reg all_equal:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg sw2:*, reg sw3:V, reg c1:L, reg sw5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg sum:cls, reg r15:V, reg p3:p(V +), reg sw6:*, reg sw7:V, reg c2:L, reg sw9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg strwidth1:cls, reg str_ex2:*, reg str_ex3:V, reg p5:p(V +), reg r21:V, reg sw_i:*, reg sw_i1:V, reg unique:cls, reg sw10:*, reg sw11:V, reg sw_i2:*, reg sw_i3:V, reg r23:V, reg p6:p(V +), reg r25:V, reg mean:cls, reg sw_i4:*, reg sw_i5:V, reg strwidth2:cls, reg str_ex4:*, reg str_ex5:V, reg p7:p(V +), reg r27:V, reg r28:V, reg p8:p(V +), reg r30:V, reg par1:cls, reg r31:V, reg c3:L, reg r34:V, reg r35:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r37:V, reg dx5:V, reg __2:cls, reg r38:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg letters:*, reg letters1:V, reg LETTERS:*, reg LETTERS1:V, reg c4:cls, reg r42:V, reg strheight:cls, reg all_lett:*, reg all_lett1:V, reg p9:p(V +), reg r44:V, reg r45:V, reg table:cls, reg shL:*, reg shL1:V, reg p10:p(V +), reg r47:V, reg mean1:cls, reg shL2:*, reg shL3:V, reg p11:p(V +), reg r49:V, reg par2:cls, reg r50:V, reg c5:L, reg r53:V, reg r54:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r56:V, reg dx7:V, reg __3:cls, reg r57:V, reg strwidth3:cls, reg all_lett2:*, reg all_lett3:V, reg p12:p(V +), reg r60:V, reg r61:V, reg split:cls, reg all_lett4:*, reg all_lett5:V, reg p13:p(V +), reg factor:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r63:V, reg r64:V, reg round:cls, reg r65:V, reg p14:p(V +), reg r67:V, reg p15:p(V +), reg r69:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r70:V, reg r71:V, reg expression:cls, reg r72:V, reg strwidth4:cls, reg sumex:*, reg sumex1:V, reg p16:p(V +), reg r74:V, reg strheight1:cls, reg sumex2:*, reg sumex3:V, reg p17:p(V +), reg r76:V, reg par3:cls, reg op:*, reg op1:V, reg p18:p(V +), reg r78:V |
    mkenv;
    r = clos inner3674721102;
    st strwidth = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    st `str.ex` = r2;
    par = ldf par;
    check L8() else D1();
  L5():
    c = ldf c in base;
    r3 = dyn c("W", "w", "I", ".", "WwI.");
    check L7() else D0();
  L6():
    r1 = dyn base("W", "w", "I", ".", "WwI.");
    goto L0(r1);
  D0():
    deopt 11 [r3];
  D1():
    deopt 14 [];
  L7():
    goto L0(r3);
  L8():
    r4 = dyn par[pty]("s");
    check L9() else D2();
  D2():
    deopt 17 [r4];
  L9():
    st op = r4;
    plot = ldf plot;
    check L10() else D3();
  D3():
    deopt 20 [];
  L10():
    p = prom<V +>{
      r5 = `:`(1.0, 100.0);
      return r5;
    };
    p1 = prom<V +>{
      r7 = `:`(1.0, 100.0);
      return r7;
    };
    r9 = dyn plot[, , type](p, p1, "n");
    check L11() else D4();
  D4():
    deopt 25 [r9];
  L11():
    strwidth = ldf strwidth;
    check L12() else D5();
  D5():
    deopt 27 [];
  L12():
    p2 = prom<V +>{
      str_ex = ld `str.ex`;
      str_ex1 = force? str_ex;
      checkMissing(str_ex1);
      return str_ex1;
    };
    r11 = dyn strwidth(p2);
    check L13() else D6();
  D6():
    deopt 29 [r11];
  L13():
    st sw = r11;
    sw = ld sw;
    check L14() else D7();
  D7():
    deopt 31 [sw];
  L14():
    sw1 = force? sw;
    checkMissing(sw1);
    all_equal = ldf `all.equal`;
    check L15() else D8();
  D8():
    deopt 34 [];
  L15():
    p3 = prom<V +>{
      sym1 = ldf sum;
      base1 = ldf sum in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r13):
      return r13;
    L2():
      sw2 = ld sw;
      sw3 = force? sw2;
      checkMissing(sw3);
      c1 = `is.object`(sw3);
      if c1 then L4() else L5(sw3);
    L3():
      r12 = dyn base1(<lang `[`(sw, `:`(1.0, 4.0))>);
      goto L0(r12);
    L1(dx1):
      sum = ldf sum in base;
      r15 = dyn sum(dx1);
      goto L0(r15);
    L4():
      dr = tryDispatchBuiltin.1("[", sw3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(sw5):
      __ = ldf `[` in base;
      r14 = dyn __(sw5, <int 1, 2, 3, 4>);
      goto L1(r14);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p4 = prom<V +>{
      sw6 = ld sw;
      sw7 = force? sw6;
      checkMissing(sw7);
      c2 = `is.object`(sw7);
      if c2 then L1() else L2(sw7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", sw7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(sw9):
      __1 = ldf `[` in base;
      r17 = dyn __1(sw9, 5.0);
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r19 = dyn all_equal(p3, p4);
    check L16() else D9();
  D9():
    deopt 37 [r19];
  L16():
    strwidth1 = ldf strwidth;
    check L17() else D10();
  D10():
    deopt 39 [];
  L17():
    p5 = prom<V +>{
      str_ex2 = ld `str.ex`;
      str_ex3 = force? str_ex2;
      checkMissing(str_ex3);
      return str_ex3;
    };
    r21 = dyn strwidth1(p5, "inches");
    check L18() else D11();
  D11():
    deopt 42 [r21];
  L18():
    st `sw.i` = r21;
    sw_i = ld `sw.i`;
    check L19() else D12();
  D12():
    deopt 45 [25.4, sw_i];
  L19():
    sw_i1 = force? sw_i;
    checkMissing(sw_i1);
    `*`(25.4, sw_i1);
    unique = ldf unique;
    check L20() else D13();
  D13():
    deopt 49 [];
  L20():
    p6 = prom<V +>{
      sw10 = ld sw;
      sw11 = force? sw10;
      checkMissing(sw11);
      sw_i2 = ld `sw.i`;
      sw_i3 = force? sw_i2;
      checkMissing(sw_i3);
      r23 = `/`(sw11, sw_i3);
      return r23;
    };
    r25 = dyn unique(p6);
    check L21() else D14();
  D14():
    deopt 51 [r25];
  L21():
    mean = ldf mean;
    check L22() else D15();
  D15():
    deopt 53 [];
  L22():
    p8 = prom<V +>{
      sw_i4 = ld `sw.i`;
      sw_i5 = force? sw_i4;
      checkMissing(sw_i5);
      strwidth2 = ldf strwidth;
      p7 = prom<V +>{
        str_ex4 = ld `str.ex`;
        str_ex5 = force? str_ex4;
        checkMissing(str_ex5);
        return str_ex5;
      };
      r27 = dyn strwidth2(p7, "fig");
      r28 = `/`(sw_i5, r27);
      return r28;
    };
    r30 = dyn mean(p8);
    check L23() else D16();
  D16():
    deopt 55 [r30];
  L23():
    par1 = ldf par;
    check L24() else D17();
  D17():
    deopt 56 [r30];
  L24():
    r31 = dyn par1("fin");
    check L25() else D18();
  D18():
    deopt 58 [r30, r31];
  L25():
    c3 = `is.object`(r31);
    if c3 then L26() else L27(r30, r31);
  L1(r37, dx5):
    `/`(r37, dx5);
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L26():
    dr4 = tryDispatchBuiltin.1("[", r31);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L28() else L27(r30, dr4);
  L27(r34, r35):
    __2 = ldf `[` in base;
    r38 = dyn __2(r35, 1.0);
    goto L1(r34, r38);
  L2(r41):
    st `all.lett` = r41;
    strheight = ldf strheight;
    check L34() else D22();
  L28():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L1(r30, dx4);
  L29():
    letters = ld letters;
    check L31() else D19();
  L30():
    r40 = dyn base2(<sym letters>, <sym LETTERS>);
    goto L2(r40);
  D19():
    deopt 65 [letters];
  D22():
    deopt 73 [];
  L31():
    letters1 = force? letters;
    checkMissing(letters1);
    LETTERS = ld LETTERS;
    check L32() else D20();
  L34():
    p9 = prom<V +>{
      all_lett = ld `all.lett`;
      all_lett1 = force? all_lett;
      checkMissing(all_lett1);
      return all_lett1;
    };
    r44 = dyn strheight[, units](p9, "inches");
    check L35() else D23();
  D20():
    deopt 67 [LETTERS];
  D23():
    deopt 77 [r44];
  L32():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c4 = ldf c in base;
    r42 = dyn c4(letters1, LETTERS1);
    check L33() else D21();
  L35():
    r45 = `*`(r44, 72.0);
    st shL = r45;
    table = ldf table;
    check L36() else D24();
  D21():
    deopt 70 [r42];
  D24():
    deopt 82 [];
  L33():
    goto L2(r42);
  L36():
    p10 = prom<V +>{
      shL = ld shL;
      shL1 = force? shL;
      checkMissing(shL1);
      return shL1;
    };
    r47 = dyn table(p10);
    check L37() else D25();
  D25():
    deopt 84 [r47];
  L37():
    mean1 = ldf mean;
    check L38() else D26();
  D26():
    deopt 86 [];
  L38():
    p11 = prom<V +>{
      shL2 = ld shL;
      shL3 = force? shL2;
      checkMissing(shL3);
      return shL3;
    };
    r49 = dyn mean1(p11);
    check L39() else D27();
  D27():
    deopt 88 [r49];
  L39():
    par2 = ldf par;
    check L40() else D28();
  D28():
    deopt 89 [r49];
  L40():
    r50 = dyn par2("cin");
    check L41() else D29();
  D29():
    deopt 91 [r49, r50];
  L41():
    c5 = `is.object`(r50);
    if c5 then L42() else L43(r49, r50);
  L3(r56, dx7):
    `/`(r56, dx7);
    strwidth3 = ldf strwidth;
    check L45() else D30();
  L42():
    dr6 = tryDispatchBuiltin.1("[", r50);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(r49, dr6);
  L43(r53, r54):
    __3 = ldf `[` in base;
    r57 = dyn __3(r54, 2.0);
    goto L3(r53, r57);
  D30():
    deopt 97 [];
  L44():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L3(r49, dx6);
  L45():
    p12 = prom<V +>{
      all_lett2 = ld `all.lett`;
      all_lett3 = force? all_lett2;
      checkMissing(all_lett3);
      return all_lett3;
    };
    r60 = dyn strwidth3[, units](p12, "inches");
    check L46() else D31();
  D31():
    deopt 101 [r60];
  L46():
    r61 = `*`(r60, 72.0);
    st swL = r61;
    split = ldf split;
    check L47() else D32();
  D32():
    deopt 106 [];
  L47():
    p13 = prom<V +>{
      all_lett4 = ld `all.lett`;
      all_lett5 = force? all_lett4;
      checkMissing(all_lett5);
      return all_lett5;
    };
    p15 = prom<V +>{
      factor = ldf factor;
      p14 = prom<V +>{
        sym3 = ldf round;
        base3 = ldf round in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r64):
        return r64;
      L1():
        round = ldf round in base;
        r65 = dyn round(<sym swL>, 2.0);
        goto L0(r65);
      L2():
        r63 = dyn base3(<sym swL>, 2.0);
        goto L0(r63);
      };
      r67 = dyn factor(p14);
      return r67;
    };
    r69 = dyn split(p13, p15);
    check L48() else D33();
  D33():
    deopt 109 [r69];
  L48():
    sym4 = ldf expression;
    base4 = ldf expression in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L4(r71):
    st sumex = r71;
    strwidth4 = ldf strwidth;
    check L51() else D34();
  L49():
    expression = ldf expression in base;
    r72 = dyn expression(<lang sum(`[`(x, i), i=1.0, n)>, <lang `==`(`^`(e, {
          `*`(i, pi)
        }), `-`(1.0))>);
    goto L4(r72);
  L50():
    r70 = dyn base4(<lang sum(`[`(x, i), i=1.0, n)>, <lang `==`(`^`(e, {
          `*`(i, pi)
        }), `-`(1.0))>);
    goto L4(r70);
  D34():
    deopt 115 [];
  L51():
    p16 = prom<V +>{
      sumex = ld sumex;
      sumex1 = force? sumex;
      checkMissing(sumex1);
      return sumex1;
    };
    r74 = dyn strwidth4(p16);
    check L52() else D35();
  D35():
    deopt 117 [r74];
  L52():
    strheight1 = ldf strheight;
    check L53() else D36();
  D36():
    deopt 119 [];
  L53():
    p17 = prom<V +>{
      sumex2 = ld sumex;
      sumex3 = force? sumex2;
      checkMissing(sumex3);
      return sumex3;
    };
    r76 = dyn strheight1(p17);
    check L54() else D37();
  D37():
    deopt 121 [r76];
  L54():
    par3 = ldf par;
    check L55() else D38();
  D38():
    deopt 123 [];
  L55():
    p18 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r78 = dyn par3(p18);
    check L56() else D39();
  D39():
    deopt 125 [r78];
  L56():
    popenv;
    return r78;
  }
}
fun inner3674721102(s, units, cex, font, vfont, `...`) {
  (reg s:*, reg units:*, reg cex:*, reg font:*, reg vfont:*, reg ddd:dots) -+> V { var s:*, var units:*, reg units_isMissing:L, reg units_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var font:*, reg font_isMissing:L, reg font_orDefault:*, var vfont:*, reg vfont_isMissing:L, reg vfont_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vfont1:*, reg vfont2:V, reg c:V, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg pmatch:cls, reg vfont3:*, reg vfont4:V, reg c2:L, reg vfont6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg Hershey:*, reg Hershey1:V, reg c3:L, reg Hershey3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p1:p(V +), reg r9:V, reg pmatch1:cls, reg vfont7:*, reg vfont8:V, reg c4:L, reg vfont10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r10:V, reg p2:p(V +), reg Hershey4:*, reg Hershey5:V, reg c5:L, reg Hershey7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg p3:p(V +), reg r14:V, reg c6:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg _External_graphics:cls, reg C_strWidth:*, reg C_strWidth1:V, reg p4:p(V +), reg as_graphicsAnnot:cls, reg s1:*, reg s2:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg pmatch2:cls, reg units1:*, reg units2:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg c7:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg cex1:*, reg cex2:V, reg p10:p(V +), reg font1:*, reg font2:V, reg p11:p(V +), reg vfont11:*, reg vfont12:V, reg p12:p(V +), reg ddd1:dots?, reg r33:V |
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
    r17 = dyn base2(<sym C_strWidth>, <lang as.graphicsAnnot(s)>, <lang pmatch(units, c("user", "figure", "inches"))>, <sym cex>, <sym font>, <sym vfont>, <sym ...>);
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
      C_strWidth = ld C_strWidth;
      C_strWidth1 = force? C_strWidth;
      checkMissing(C_strWidth1);
      return C_strWidth1;
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