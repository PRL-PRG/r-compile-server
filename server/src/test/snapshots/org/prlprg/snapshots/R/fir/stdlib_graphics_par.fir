fun main() {
  () -+> V { reg r:cls, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg par1:cls, reg op:*, reg op1:V, reg p1:p(V +), reg r7:V, reg par2:cls, reg r8:V, reg par3:cls, reg op2:*, reg op3:V, reg p2:p(V +), reg r10:V, reg par4:cls, reg r11:V, reg plot:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg par5:cls, reg r15:V, reg plot1:cls, reg p4:p(V +), reg r17:V, reg par6:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c1:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg c2:cls, reg r25:V, reg par7:cls, reg r26:V, reg barplot:cls, reg rbind:cls, reg nr_prof:*, reg nr_prof1:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg r30:V, reg par8:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p8:p(V +), reg r35:V, reg plot2:cls, reg r36:V, reg p9:p(V +), reg gray:cls, reg r38:V, reg p10:p(V +), reg R_version_string:*, reg R_version_string1:V, reg p11:p(V +), reg r41:V, reg r42:cls, reg ex:cls, reg r43:V, reg r44:cls, reg showLty:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg c3:cls, reg r47:V, reg p12:p(V +), reg r49:V, reg par9:cls, reg r50:V, reg showLty1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg c4:cls, reg r53:V, reg p13:p(V +), reg r55:V, reg showLty2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg c5:cls, reg r58:V, reg p14:p(V +), reg r60:V |
    mkenv;
    r = clos inner2482031027;
    st par = r;
    par = ldf par;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(2.0, 2.0);
      goto L0(r3);
    L2():
      r1 = dyn base(2.0, 2.0);
      goto L0(r1);
    };
    r5 = dyn par[mfrow, pty](p, "s");
    check L3() else D1();
  D1():
    deopt 9 [r5];
  L3():
    st op = r5;
    par1 = ldf par;
    check L4() else D2();
  D2():
    deopt 12 [];
  L4():
    p1 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r7 = dyn par1(p1);
    check L5() else D3();
  D3():
    deopt 14 [r7];
  L5():
    par2 = ldf par;
    check L6() else D4();
  D4():
    deopt 16 [];
  L6():
    r8 = dyn par2[`no.readonly`](TRUE);
    check L7() else D5();
  D5():
    deopt 19 [r8];
  L7():
    st op = r8;
    par3 = ldf par;
    check L8() else D6();
  D6():
    deopt 22 [];
  L8():
    p2 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r10 = dyn par3(p2);
    check L9() else D7();
  D7():
    deopt 24 [r10];
  L9():
    par4 = ldf par;
    check L10() else D8();
  D8():
    deopt 26 [];
  L10():
    r11 = dyn par4("ylog");
    check L11() else D9();
  D9():
    deopt 28 [r11];
  L11():
    plot = ldf plot;
    check L12() else D10();
  D10():
    deopt 30 [];
  L12():
    p3 = prom<V +>{
      r12 = `:`(1.0, 12.0);
      return r12;
    };
    r14 = dyn plot[, log](p3, "y");
    check L13() else D11();
  D11():
    deopt 34 [r14];
  L13():
    par5 = ldf par;
    check L14() else D12();
  D12():
    deopt 36 [];
  L14():
    r15 = dyn par5("ylog");
    check L15() else D13();
  D13():
    deopt 38 [r15];
  L15():
    plot1 = ldf plot;
    check L16() else D14();
  D14():
    deopt 40 [];
  L16():
    p4 = prom<V +>{
      return <int 1, 2>;
    };
    r17 = dyn plot1[, xaxs](p4, "i");
    check L17() else D15();
  D15():
    deopt 44 [r17];
  L17():
    par6 = ldf par;
    check L18() else D16();
  D16():
    deopt 46 [];
  L18():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c1 = ldf c in base;
      r20 = dyn c1("usr", "xaxp");
      goto L0(r20);
    L2():
      r18 = dyn base1("usr", "xaxp");
      goto L0(r18);
    };
    r22 = dyn par6(p5);
    check L19() else D17();
  D17():
    deopt 48 [r22];
  L19():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L0(r24):
    st `nr.prof` = r24;
    par7 = ldf par;
    check L23() else D19();
  L20():
    c2 = ldf c in base;
    r25 = dyn c2(16.0, 11.0, 10.0, 9.0, 9.0, 6.0, 6.0, 6.0, 5.0, 4.0, 3.0, 3.0, 1.0);
    check L22() else D18();
  L21():
    r23 = dyn base2[`prof.pilots`, lawyers, farmers, salesmen, physicians, mechanics, policemen, managers, engineers, teachers, housewives, students, `armed.forces`](16.0, 11.0, 10.0, 9.0, 9.0, 6.0, 6.0, 6.0, 5.0, 4.0, 3.0, 3.0, 1.0);
    goto L0(r23);
  D18():
    deopt 78 [r25];
  D19():
    deopt 81 [];
  L22():
    goto L0(r25);
  L23():
    r26 = dyn par7[las](3.0);
    check L24() else D20();
  D20():
    deopt 84 [r26];
  L24():
    barplot = ldf barplot;
    check L25() else D21();
  D21():
    deopt 86 [];
  L25():
    p7 = prom<V +>{
      rbind = ldf rbind;
      p6 = prom<V +>{
        nr_prof = ld `nr.prof`;
        nr_prof1 = force? nr_prof;
        checkMissing(nr_prof1);
        return nr_prof1;
      };
      r28 = dyn rbind(p6);
      return r28;
    };
    r30 = dyn barplot(p7);
    check L26() else D22();
  D22():
    deopt 88 [r30];
  L26():
    par8 = ldf par;
    check L27() else D23();
  D23():
    deopt 90 [];
  L27():
    r31 = dyn par8[las](0.0);
    check L28() else D24();
  D24():
    deopt 93 [r31];
  L28():
    sym3 = ldf require;
    base3 = ldf require in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L1():
    plot2 = ldf plot;
    check L33() else D27();
  L29():
    require = ldf require;
    check L31() else D25();
  L30():
    r32 = dyn base3(<sym grDevices>);
    goto L1();
  D25():
    deopt 96 [];
  D27():
    deopt 100 [];
  L31():
    p8 = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r35 = dyn require(p8);
    check L32() else D26();
  L33():
    p9 = prom<V +>{
      r36 = `:`(1.0, 12.0);
      return r36;
    };
    p10 = prom<V +>{
      gray = ldf gray;
      r38 = dyn gray(0.7);
      return r38;
    };
    p11 = prom<V +>{
      R_version_string = ld `R.version.string`;
      R_version_string1 = force? R_version_string;
      checkMissing(R_version_string1);
      return R_version_string1;
    };
    r41 = dyn plot2[, type, main, fg, bty, sub](p9, "b", "'fg' : axes, ticks and box in gray", p10, "7", p11);
    check L34() else D28();
  D26():
    deopt 98 [r35];
  D28():
    deopt 112 [r41];
  L32():
    goto L1();
  L34():
    r42 = clos inner2708337952;
    st ex = r42;
    ex = ldf ex;
    check L35() else D29();
  D29():
    deopt 117 [];
  L35():
    r43 = dyn ex();
    check L36() else D30();
  D30():
    deopt 118 [r43];
  L36():
    r44 = clos inner1216436244;
    st showLty = r44;
    showLty = ldf showLty;
    check L37() else D31();
  D31():
    deopt 123 [];
  L37():
    p12 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      c3 = ldf c in base;
      r47 = dyn c3("solid", "dashed", "dotted", "dotdash", "longdash", "twodash");
      goto L0(r47);
    L2():
      r45 = dyn base4("solid", "dashed", "dotted", "dotdash", "longdash", "twodash");
      goto L0(r45);
    };
    r49 = dyn showLty(p12);
    check L38() else D32();
  D32():
    deopt 125 [r49];
  L38():
    par9 = ldf par;
    check L39() else D33();
  D33():
    deopt 127 [];
  L39():
    r50 = dyn par9[new](TRUE);
    check L40() else D34();
  D34():
    deopt 130 [r50];
  L40():
    showLty1 = ldf showLty;
    check L41() else D35();
  D35():
    deopt 132 [];
  L41():
    p13 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r52):
      return r52;
    L1():
      c4 = ldf c in base;
      r53 = dyn c4("solid", "44", "13", "1343", "73", "2262");
      goto L0(r53);
    L2():
      r51 = dyn base5("solid", "44", "13", "1343", "73", "2262");
      goto L0(r51);
    };
    r55 = dyn showLty1[, xoff, col](p13, 0.2, 2.0);
    check L42() else D36();
  D36():
    deopt 138 [r55];
  L42():
    showLty2 = ldf showLty;
    check L43() else D37();
  D37():
    deopt 140 [];
  L43():
    p14 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      c5 = ldf c in base;
      r58 = dyn c5("11", "22", "33", "44", "12", "13", "14", "21", "31");
      goto L0(r58);
    L2():
      r56 = dyn base6("11", "22", "33", "44", "12", "13", "14", "21", "31");
      goto L0(r56);
    };
    r60 = dyn showLty2(p14);
    check L44() else D38();
  D38():
    deopt 142 [r60];
  L44():
    popenv;
    return r60;
  }
}
fun inner2482031027(`...`, `no.readonly`) {
  (reg ddd:dots, reg no_readonly:*) -+> V { var `...`:dots?, var `no.readonly`:*, reg no_readonly_isMissing:L, reg no_readonly_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg list:cls, reg ddd1:dots?, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg args:*, reg args1:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg as_list:cls, reg no_readonly1:*, reg no_readonly2:V, reg c2:L, reg _Pars:*, reg _Pars1:V, reg c3:L, reg _Pars3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg _Pars6:V, reg r11:V, reg _Pars_readonly:*, reg _Pars_readonly1:V, reg _Pars7:*, reg _Pars8:V, reg match:cls, reg r12:V, reg r13:V, reg __:cls, reg r14:V, reg _Pars9:*, reg _Pars10:V, reg p:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg unlist:cls, reg lapply:cls, reg args2:*, reg args3:V, reg p1:p(V +), reg is_character:*, reg is_character1:V, reg p2:p(V +), reg r22:V, reg p3:p(V +), reg r24:V, reg all:cls, reg r25:V, reg c4:L, reg as_list1:cls, reg unlist1:cls, reg args4:*, reg args5:V, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg args6:*, reg args7:V, reg length1:cls, reg r33:V, reg r34:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg args8:*, reg args9:V, reg c6:L, reg args11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r37:V, reg is_list:cls, reg r38:V, reg c7:L, reg c8:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg c12:L, reg r40:V, reg args12:*, reg args13:V, reg c13:L, reg c15:L, reg args15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c17:L, reg dx5:V, reg __2:cls, reg r41:V, reg c18:V, reg c19:L, reg c20:V, reg c22:L, reg args16:*, reg args17:V, reg c23:L, reg args19:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r42:V, reg dx8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg r46:V, reg args20:*, reg args21:V, reg names:cls, reg r47:V, reg c24:V, reg c25:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg C_par:*, reg C_par1:V, reg args22:*, reg args23:V, reg _External2:cls, reg r50:V, reg single:*, reg single1:V, reg c26:L, reg value:*, reg value1:V, reg c27:L, reg value3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __4:cls, reg r51:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r54:V, reg r55:V, reg args24:*, reg args25:V, reg names1:cls, reg r56:V, reg c28:V, reg r57:V, reg c29:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r58:V, reg r59:V, reg value4:*, reg value5:V, reg invisible:cls, reg r60:V, reg value6:*, reg value7:V |
    mkenv;
    st `...` = ddd;
    no_readonly_isMissing = missing.0(no_readonly);
    if no_readonly_isMissing then L0(FALSE) else L0(no_readonly);
  L0(no_readonly_orDefault):
    st `no.readonly` = no_readonly_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1(r1):
    st `.Pars.readonly` = r1;
    st single = FALSE;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L30():
    c = ldf c in base;
    r2 = dyn c("cin", "cra", "csi", "cxy", "din", "page");
    check L32() else D0();
  L31():
    r = dyn base("cin", "cra", "csi", "cxy", "din", "page");
    goto L1(r);
  D0():
    deopt 9 [r2];
  L2(r4):
    st args = r4;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L32():
    goto L1(r2);
  L33():
    list = ldf list;
    check L35() else D1();
  L34():
    r3 = dyn base1(<sym ...>);
    goto L2(r3);
  D1():
    deopt 16 [];
  L3(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L41() else L4();
  L35():
    ddd1 = ld `...`;
    r5 = dyn list[`...`](ddd1);
    check L36() else D2();
  L37():
    args = ld args;
    check L39() else D3();
  L38():
    r6 = dyn base2(<sym args>);
    goto L3(r6);
  D2():
    deopt 18 [r5];
  D3():
    deopt 22 [args];
  L4():
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L5():
    sym10 = ldf `.External2`;
    base10 = ldf `.External2` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  L36():
    goto L2(r5);
  L39():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r8 = dyn length(args1);
    check L40() else D4();
  L41():
    as_list = ldf `as.list`;
    check L42() else D5();
  D4():
    deopt 25 [r8];
  D5():
    deopt 28 [];
  L6(r19):
    c4 = `as.logical`(r19);
    if c4 then L50() else L7();
  L22(r49):
    st value = r49;
    single = ld single;
    check L94() else D23();
  L40():
    goto L3(r8);
  L42():
    p = prom<V +>{
      no_readonly1 = ld `no.readonly`;
      no_readonly2 = force? no_readonly1;
      checkMissing(no_readonly2);
      c2 = `as.logical`(no_readonly2);
      if c2 then L3() else L0();
    L0():
      _Pars9 = ld `.Pars`;
      _Pars10 = force? _Pars9;
      checkMissing(_Pars10);
      return _Pars10;
    L3():
      _Pars = ld `.Pars`;
      _Pars1 = force? _Pars;
      checkMissing(_Pars1);
      c3 = `is.object`(_Pars1);
      if c3 then L4() else L5(_Pars1);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", _Pars1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(_Pars3):
      sym3 = ldf match;
      base3 = ldf match in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L2(_Pars6, r11):
      r13 = `-`(<missing>, r11);
      __ = ldf `[` in base;
      r14 = dyn __(_Pars6, r13);
      goto L1(r14);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L7():
      _Pars_readonly = ld `.Pars.readonly`;
      _Pars_readonly1 = force? _Pars_readonly;
      checkMissing(_Pars_readonly1);
      _Pars7 = ld `.Pars`;
      _Pars8 = force? _Pars7;
      checkMissing(_Pars8);
      match = ldf match in base;
      r12 = dyn match(_Pars_readonly1, _Pars8, NA_INT, NULL);
      goto L2(_Pars3, r12);
    L8():
      r10 = dyn base3(<sym .Pars.readonly>, <sym .Pars>);
      goto L2(_Pars3, r10);
    };
    r16 = dyn as_list(p);
    check L43() else D6();
  L45():
    unlist = ldf unlist;
    check L47() else D7();
  L46():
    r18 = dyn base4(<lang unlist(lapply(args, is.character))>);
    goto L6(r18);
  L89():
    C_par = ld C_par;
    check L91() else D20();
  L90():
    r48 = dyn base10(<sym C_par>, <sym args>);
    goto L22(r48);
  D6():
    deopt 30 [r16];
  D7():
    deopt 35 [];
  D20():
    deopt 95 [C_par];
  D23():
    deopt 102 [single];
  L7():
    goto L8();
  L8():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L43():
    st args = r16;
    goto L5();
  L47():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        args2 = ld args;
        args3 = force? args2;
        checkMissing(args3);
        return args3;
      };
      p2 = prom<V +>{
        is_character = ld `is.character`;
        is_character1 = force? is_character;
        checkMissing(is_character1);
        return is_character1;
      };
      r22 = dyn lapply(p1, p2);
      return r22;
    };
    r24 = dyn unlist(p3);
    check L48() else D8();
  L50():
    as_list1 = ldf `as.list`;
    check L51() else D10();
  L91():
    C_par1 = force? C_par;
    checkMissing(C_par1);
    args22 = ld args;
    check L92() else D21();
  L94():
    single1 = force? single;
    checkMissing(single1);
    c26 = `as.logical`(single1);
    if c26 then L95() else L23();
  D8():
    deopt 37 [r24];
  D10():
    deopt 41 [];
  D21():
    deopt 97 [args22];
  L9(r32):
    r34 = `==`(r32, 1.0);
    c5 = `as.logical`(r34);
    if c5 then L58() else L10();
  L23():
    goto L25();
  L25():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  L48():
    all = ldf all in base;
    r25 = dyn all(r24);
    check L49() else D9();
  L51():
    p5 = prom<V +>{
      unlist1 = ldf unlist;
      p4 = prom<V +>{
        args4 = ld args;
        args5 = force? args4;
        checkMissing(args5);
        return args5;
      };
      r27 = dyn unlist1(p4);
      return r27;
    };
    r29 = dyn as_list1(p5);
    check L52() else D11();
  L54():
    args6 = ld args;
    check L56() else D12();
  L55():
    r31 = dyn base5(<sym args>);
    goto L9(r31);
  L92():
    args23 = force? args22;
    checkMissing(args23);
    _External2 = ldf `.External2` in base;
    r50 = dyn _External2(C_par1, args23);
    check L93() else D22();
  L95():
    value = ld value;
    check L96() else D24();
  D9():
    deopt 39 [r25];
  D11():
    deopt 43 [r29];
  D12():
    deopt 49 [args6];
  D22():
    deopt 100 [r50];
  D24():
    deopt 104 [value];
  L10():
    goto L5();
  L26(r53):
    r57 = `!`(r53);
    c29 = `as.logical`(r57);
    if c29 then L107() else L28();
  L49():
    goto L6(r25);
  L52():
    st args = r29;
    goto L8();
  L56():
    args7 = force? args6;
    checkMissing(args7);
    length1 = ldf length in base;
    r33 = dyn length1(args7);
    check L57() else D13();
  L58():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L93():
    goto L22(r50);
  L96():
    value1 = force? value;
    checkMissing(value1);
    c27 = `is.object`(value1);
    if c27 then L97() else L98(value1);
  L101():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L103() else L104();
  L102():
    r52 = dyn base11(<lang names(args)>);
    goto L26(r52);
  D13():
    deopt 52 [r33];
  L11(r36):
    c7 = `as.logical`(r36);
    if c7 then L13(c7) else L66();
  L24(dx10):
    st value = dx10;
    goto L25();
  L27(r55):
    c28 = `==`(r55, NULL);
    goto L26(c28);
  L28():
    value6 = ld value;
    check L113() else D29();
  L57():
    goto L9(r33);
  L59():
    args8 = ld args;
    check L61() else D14();
  L60():
    r35 = dyn base6(<lang `[[`(args, 1)>);
    goto L11(r35);
  L97():
    dr8 = tryDispatchBuiltin.1("[[", value1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(dr8);
  L98(value3):
    __4 = ldf `[[` in base;
    r51 = dyn __4(value3, 1);
    goto L24(r51);
  L103():
    args24 = ld args;
    check L105() else D25();
  L104():
    r54 = dyn base12(<sym args>);
    goto L27(r54);
  L107():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L108() else L109();
  D14():
    deopt 57 [args8];
  D25():
    deopt 115 [args24];
  D29():
    deopt 127 [value6];
  L13(c8):
    c22 = `as.logical`(c8);
    if c22 then L74() else L16();
  L29(r59):
    popenv;
    return r59;
  L61():
    args9 = force? args8;
    checkMissing(args9);
    c6 = `is.object`(args9);
    if c6 then L62() else L63(args9);
  L66():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L99():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx9);
  L105():
    args25 = force? args24;
    checkMissing(args25);
    names1 = ldf names in base;
    r56 = dyn names1(args25);
    check L106() else D26();
  L108():
    value4 = ld value;
    check L110() else D27();
  L109():
    r58 = dyn base13(<sym value>);
    goto L29(r58);
  L113():
    value7 = force? value6;
    checkMissing(value7);
    popenv;
    return value7;
  D26():
    deopt 118 [r56];
  D27():
    deopt 123 [value4];
  L12(dx3):
    is_list = ldf `is.list` in base;
    r38 = dyn is_list(dx3);
    check L65() else D15();
  L14(c12, r40):
    c19 = `as.logical`(r40);
    c20 = `||`(c12, c19);
    goto L13(c20);
  L16():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  L18(dx8):
    goto L5();
  L62():
    dr2 = tryDispatchBuiltin.1("[[", args9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(dr2);
  L63(args11):
    __1 = ldf `[[` in base;
    r37 = dyn __1(args11, 1);
    goto L12(r37);
  L67():
    args12 = ld args;
    check L69() else D16();
  L68():
    r39 = dyn base7(<lang `[[`(args, 1)>);
    goto L14(c7, r39);
  L74():
    args16 = ld args;
    check L75() else D17();
  L106():
    goto L27(r56);
  L110():
    value5 = force? value4;
    checkMissing(value5);
    invisible = ldf invisible in base;
    r60 = dyn invisible(value5);
    check L111() else D28();
  D15():
    deopt 63 [r38];
  D16():
    deopt 65 [c7, args12];
  D17():
    deopt 72 [args16];
  D28():
    deopt 126 [r60];
  L19(r44):
    c25 = `as.logical`(r44);
    if c25 then L86() else L21();
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L65():
    goto L11(r38);
  L69():
    args13 = force? args12;
    checkMissing(args13);
    c13 = `is.object`(args13);
    if c13 then L70() else L71(c7, args13);
  L75():
    args17 = force? args16;
    checkMissing(args17);
    c23 = `is.object`(args17);
    if c23 then L76() else L77(args17);
  L80():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L82() else L83();
  L81():
    r43 = dyn base8(<lang names(args)>);
    goto L19(r43);
  L111():
    goto L29(r60);
  L15(c17, dx5):
    c18 = `==`(dx5, NULL);
    goto L14(c17, c18);
  L17(dx7):
    st args = dx7;
    goto L18(dx7);
  L20(r46):
    c24 = `==`(r46, NULL);
    goto L19(c24);
  L21():
    goto L18(NULL);
  L70():
    dr4 = tryDispatchBuiltin.1("[[", args13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(c7, dr4);
  L71(c15, args15):
    __2 = ldf `[[` in base;
    r41 = dyn __2(args15, 1);
    goto L15(c15, r41);
  L76():
    dr6 = tryDispatchBuiltin.1("[[", args17);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(dr6);
  L77(args19):
    __3 = ldf `[[` in base;
    r42 = dyn __3(args19, 1);
    goto L17(r42);
  L82():
    args20 = ld args;
    check L84() else D18();
  L83():
    r45 = dyn base9(<sym args>);
    goto L20(r45);
  L86():
    st single = TRUE;
    goto L18(TRUE);
  D18():
    deopt 81 [args20];
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(c7, dx4);
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L84():
    args21 = force? args20;
    checkMissing(args21);
    names = ldf names in base;
    r47 = dyn names(args21);
    check L85() else D19();
  D19():
    deopt 84 [r47];
  L85():
    goto L20(r47);
  }
}
fun inner2708337952() {
  () -+> V { reg par:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg invisible:cls, reg r6:V |
    mkenv;
    par = ldf par;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn par[`no.readonly`](TRUE);
    check L3() else D1();
  D1():
    deopt 4 [r];
  L3():
    st `old.par` = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L4():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang par(old.par)>);
    goto L0();
  L5():
    r1 = dyn base(<lang par(old.par)>);
    goto L0();
  L1(r5):
    popenv;
    return r5;
  L6():
    invisible = ldf invisible in base;
    r6 = dyn invisible();
    check L8() else D2();
  L7():
    r4 = dyn base1();
    goto L1(r4);
  D2():
    deopt 12 [r6];
  L8():
    goto L1(r6);
  }
}
fun inner1216436244(ltys, xoff, `...`) {
  (reg ltys:*, reg xoff:*, reg ddd:dots) -+> V { var ltys:*, var xoff:*, reg xoff_isMissing:L, reg xoff_orDefault:*, var `...`:dots?, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ltys1:*, reg ltys2:V, reg length:cls, reg r2:V, reg r3:V, reg p:p(V +), reg r5:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg rep:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg on_exit:cls, reg r13:V, reg plot:cls, reg p2:p(V +), reg p3:p(V +), reg r16:V, reg n:*, reg n1:V, reg r17:V, reg n2:*, reg n3:V, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg ltys3:*, reg ltys4:V, reg as_character:cls, reg r22:V, reg r23:cls, reg abline:cls, reg y:*, reg y1:V, reg p4:p(V +), reg ltys5:*, reg ltys6:V, reg p5:p(V +), reg ddd1:dots?, reg r26:V, reg mytext:cls, reg xoff1:*, reg xoff2:V, reg p6:p(V +), reg y2:*, reg y3:V, reg p7:p(V +), reg clty:*, reg clty1:V, reg p8:p(V +), reg r30:V, reg y4:*, reg y5:V, reg n4:*, reg n5:V, reg r31:V, reg r32:V, reg r33:V, reg r34:V, reg abline1:cls, reg y6:*, reg y7:V, reg p9:p(V +), reg ltys7:*, reg ltys8:V, reg p10:p(V +), reg ddd2:dots?, reg r37:V, reg mytext1:cls, reg xoff3:*, reg xoff4:V, reg r38:V, reg p11:p(V +), reg y8:*, reg y9:V, reg p12:p(V +), reg paste:cls, reg clty2:*, reg clty3:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg r44:V |
    mkenv;
    st ltys = ltys;
    xoff_isMissing = missing.0(xoff);
    if xoff_isMissing then L0(0.0) else L0(xoff);
  L0(xoff_orDefault):
    st xoff = xoff_orDefault;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      st n = r1;
      r3 = `>=`(r1, 1.0);
      return r3;
    L1():
      ltys1 = ld ltys;
      ltys2 = force? ltys1;
      checkMissing(ltys2);
      length = ldf length in base;
      r2 = dyn length(ltys2);
      goto L0(r2);
    L2():
      r = dyn base(<sym ltys>);
      goto L0(r);
    };
    r5 = dyn stopifnot(p);
    check L4() else D1();
  D1():
    deopt 3 [r5];
  L4():
    par = ldf par;
    check L5() else D2();
  D2():
    deopt 5 [];
  L5():
    p1 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      rep = ldf rep in base;
      r8 = dyn rep(0.5, 4.0);
      goto L0(r8);
    L2():
      r6 = dyn base1(0.5, 4.0);
      goto L0(r6);
    };
    r10 = dyn par[mar](p1);
    check L6() else D3();
  D3():
    deopt 8 [r10];
  L6():
    st op = r10;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L7() else L8();
  L1():
    plot = ldf plot;
    check L9() else D4();
  L7():
    on_exit = ldf `on.exit` in base;
    r13 = dyn on_exit(<lang par(op)>);
    goto L1();
  L8():
    r11 = dyn base2(<lang par(op)>);
    goto L1();
  D4():
    deopt 14 [];
  L9():
    p2 = prom<V +>{
      return <int 0, 1>;
    };
    p3 = prom<V +>{
      return <int 0, 1>;
    };
    r16 = dyn plot[, , type, axes, ann](p2, p3, "n", FALSE, FALSE);
    check L10() else D5();
  D5():
    deopt 23 [r16];
  L10():
    n = ld n;
    check L11() else D6();
  D6():
    deopt 24 [n];
  L11():
    n1 = force? n;
    checkMissing(n1);
    r17 = `:`(n1, 1.0);
    n2 = ld n;
    check L12() else D7();
  D7():
    deopt 27 [r17, n2];
  L12():
    n3 = force? n2;
    checkMissing(n3);
    r18 = `+`(n3, 1.0);
    r19 = `/`(r17, r18);
    st y = r19;
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L13() else L14();
  L2(r21):
    st clty = r21;
    r23 = clos inner2642653899;
    st mytext = r23;
    abline = ldf abline;
    check L17() else D10();
  L13():
    ltys3 = ld ltys;
    check L15() else D8();
  L14():
    r20 = dyn base3(<sym ltys>);
    goto L2(r20);
  D8():
    deopt 35 [ltys3];
  D10():
    deopt 44 [];
  L15():
    ltys4 = force? ltys3;
    checkMissing(ltys4);
    as_character = ldf `as.character` in base;
    r22 = dyn as_character(ltys4);
    check L16() else D9();
  L17():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p5 = prom<V +>{
      ltys5 = ld ltys;
      ltys6 = force? ltys5;
      checkMissing(ltys6);
      return ltys6;
    };
    ddd1 = ld `...`;
    r26 = dyn abline[h, lty, `...`](p4, p5, ddd1);
    check L18() else D11();
  D9():
    deopt 38 [r22];
  D11():
    deopt 50 [r26];
  L16():
    goto L2(r22);
  L18():
    mytext = ldf mytext;
    check L19() else D12();
  D12():
    deopt 52 [];
  L19():
    p6 = prom<V +>{
      xoff1 = ld xoff;
      xoff2 = force? xoff1;
      checkMissing(xoff2);
      return xoff2;
    };
    p7 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p8 = prom<V +>{
      clty = ld clty;
      clty1 = force? clty;
      checkMissing(clty1);
      return clty1;
    };
    r30 = dyn mytext(p6, p7, p8);
    check L20() else D13();
  D13():
    deopt 56 [r30];
  L20():
    y4 = ld y;
    check L21() else D14();
  D14():
    deopt 57 [y4];
  L21():
    y5 = force? y4;
    checkMissing(y5);
    n4 = ld n;
    check L22() else D15();
  D15():
    deopt 60 [y5, 1.0, 3.0, n4];
  L22():
    n5 = force? n4;
    checkMissing(n5);
    r31 = `+`(n5, 1.0);
    r32 = `*`(3.0, r31);
    r33 = `/`(1.0, r32);
    r34 = `-`(y5, r33);
    st y = r34;
    abline1 = ldf abline;
    check L23() else D16();
  D16():
    deopt 69 [];
  L23():
    p9 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p10 = prom<V +>{
      ltys7 = ld ltys;
      ltys8 = force? ltys7;
      checkMissing(ltys8);
      return ltys8;
    };
    ddd2 = ld `...`;
    r37 = dyn abline1[h, lty, lwd, `...`](p9, p10, 2.0, ddd2);
    check L24() else D17();
  D17():
    deopt 77 [r37];
  L24():
    mytext1 = ldf mytext;
    check L25() else D18();
  D18():
    deopt 79 [];
  L25():
    p11 = prom<V +>{
      xoff3 = ld xoff;
      xoff4 = force? xoff3;
      checkMissing(xoff4);
      r38 = `+`(0.125, xoff4);
      return r38;
    };
    p12 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    p14 = prom<V +>{
      paste = ldf paste;
      p13 = prom<V +>{
        clty2 = ld clty;
        clty3 = force? clty2;
        checkMissing(clty3);
        return clty3;
      };
      r42 = dyn paste(p13, " lwd = 2");
      return r42;
    };
    r44 = dyn mytext1(p11, p12, p14);
    check L26() else D19();
  D19():
    deopt 83 [r44];
  L26():
    popenv;
    return r44;
  }
}
fun inner2642653899(x, y, txt) {
  (reg x:*, reg y:*, reg txt:*) -+> V { var x:*, var y:*, var txt:*, reg text:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg txt1:*, reg txt2:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p3:p(V +), reg ddd:*, reg r7:V |
    mkenv;
    st x = x;
    st y = y;
    st txt = txt;
    text = ldf text;
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
    p2 = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c(0.0, -0.3);
      goto L0(r5);
    L2():
      r3 = dyn base(0.0, <lang `-`(0.3)>);
      goto L0(r3);
    };
    ddd = ld `...`;
    r7 = dyn text[, , , adj, cex, `...`](p, p1, p2, p3, 0.8, ddd);
    check L1() else D1();
  D1():
    deopt 10 [r7];
  L1():
    popenv;
    return r7;
  }
}