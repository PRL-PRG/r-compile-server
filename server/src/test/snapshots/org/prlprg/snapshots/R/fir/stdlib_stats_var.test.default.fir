fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2085344847;
    st `var.test.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2085344847(x, y, ratio, alternative, `conf.level`, `...`) {
  (reg x:*, reg y:*, reg ratio:*, reg alternative:*, reg conf_level:*, reg ddd:dots) -+> V { var x:*, var y:*, var ratio:*, reg ratio_isMissing:L, reg ratio_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `conf.level`:*, reg conf_level_isMissing:L, reg conf_level_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg ratio1:*, reg ratio2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c6:L, reg r9:V, reg ratio3:*, reg ratio4:V, reg is_finite:cls, reg r10:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg ratio5:*, reg ratio6:V, reg r11:V, reg c13:L, reg c14:V, reg r12:V, reg c16:L, reg stop:cls, reg r13:V, reg match_arg:cls, reg alternative1:*, reg alternative2:V, reg p1:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg conf_level1:*, reg conf_level2:V, reg length1:cls, reg r19:V, reg r20:V, reg c17:L, reg c19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c22:L, reg r22:V, reg conf_level3:*, reg conf_level4:V, reg is_finite1:cls, reg r23:V, reg c23:L, reg c24:V, reg c26:L, reg c28:V, reg conf_level5:*, reg conf_level6:V, reg r24:V, reg c29:L, reg c30:V, reg c32:L, reg c34:V, reg conf_level7:*, reg conf_level8:V, reg r25:V, reg c35:L, reg c36:V, reg r26:V, reg c38:L, reg stop1:cls, reg r27:V, reg paste:cls, reg deparse1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg substitute:cls, reg r31:V, reg p2:p(V +), reg r33:V, reg p3:p(V +), reg deparse2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg substitute1:cls, reg r37:V, reg p4:p(V +), reg r39:V, reg p5:p(V +), reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg x1:*, reg x2:V, reg inherits:cls, reg r44:V, reg c39:L, reg c41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg c44:L, reg r46:V, reg y1:*, reg y2:V, reg inherits1:cls, reg r47:V, reg c45:L, reg c46:V, reg c48:L, reg x3:*, reg x4:V, reg c49:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r48:V, reg y3:*, reg y4:V, reg c50:L, reg y6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg x7:*, reg x8:V, reg c51:L, reg x10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r52:V, reg r53:V, reg sum:cls, reg r54:V, reg DF_x:*, reg DF_x1:V, reg r55:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg y7:*, reg y8:V, reg c52:L, reg y10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r58:V, reg r59:V, reg sum1:cls, reg r60:V, reg DF_y:*, reg DF_y1:V, reg r61:V, reg x11:*, reg x12:V, reg c53:L, reg x14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r63:V, reg x17:V, reg r64:V, reg x18:*, reg x19:V, reg is_finite2:cls, reg r65:V, reg __:cls, reg r66:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg x20:*, reg x21:V, reg length2:cls, reg r69:V, reg r70:V, reg DF_x2:*, reg DF_x3:V, reg r71:V, reg c54:L, reg stop2:cls, reg r72:V, reg y11:*, reg y12:V, reg c55:L, reg y14:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg y17:V, reg r75:V, reg y18:*, reg y19:V, reg is_finite3:cls, reg r76:V, reg __1:cls, reg r77:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg y20:*, reg y21:V, reg length3:cls, reg r80:V, reg r81:V, reg DF_y2:*, reg DF_y3:V, reg r82:V, reg c56:L, reg stop3:cls, reg r83:V, reg var:cls, reg x22:*, reg x23:V, reg p6:p(V +), reg r86:V, reg var1:cls, reg y22:*, reg y23:V, reg p7:p(V +), reg r88:V, reg V_x:*, reg V_x1:V, reg V_y:*, reg V_y1:V, reg r89:V, reg ESTIMATE:*, reg ESTIMATE1:V, reg ratio7:*, reg ratio8:V, reg r90:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r91:V, reg r92:V, reg DF_x4:*, reg DF_x5:V, reg DF_y4:*, reg DF_y5:V, reg c57:cls, reg r93:V, reg pf:cls, reg STATISTIC:*, reg STATISTIC1:V, reg p8:p(V +), reg DF_x6:*, reg DF_x7:V, reg p9:p(V +), reg DF_y6:*, reg DF_y7:V, reg p10:p(V +), reg r97:V, reg alternative3:*, reg alternative4:V, reg r98:V, reg c58:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r101:V, reg r102:R, reg r103:V, reg PVAL:*, reg PVAL1:V, reg PVAL2:*, reg PVAL3:V, reg r104:V, reg min:cls, reg r105:V, reg r106:V, reg conf_level9:*, reg conf_level10:V, reg r107:V, reg r108:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r109:V, reg r110:V, reg ESTIMATE2:*, reg ESTIMATE3:V, reg qf:cls, reg BETA:*, reg BETA1:V, reg r111:V, reg p11:p(V +), reg DF_x8:*, reg DF_x9:V, reg p12:p(V +), reg DF_y8:*, reg DF_y9:V, reg p13:p(V +), reg r115:V, reg r116:V, reg ESTIMATE4:*, reg ESTIMATE5:V, reg qf1:cls, reg BETA2:*, reg BETA3:V, reg p14:p(V +), reg DF_x10:*, reg DF_x11:V, reg p15:p(V +), reg DF_y10:*, reg DF_y11:V, reg p16:p(V +), reg r120:V, reg r121:V, reg c59:cls, reg r122:V, reg alternative5:*, reg alternative6:V, reg r124:V, reg c60:L, reg PVAL4:*, reg PVAL5:V, reg r125:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r126:V, reg r127:V, reg ESTIMATE6:*, reg ESTIMATE7:V, reg qf2:cls, reg conf_level11:*, reg conf_level12:V, reg p17:p(V +), reg DF_x12:*, reg DF_x13:V, reg p18:p(V +), reg DF_y12:*, reg DF_y13:V, reg p19:p(V +), reg r131:V, reg r132:V, reg c61:cls, reg r133:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r134:V, reg r135:V, reg ESTIMATE8:*, reg ESTIMATE9:V, reg qf3:cls, reg conf_level13:*, reg conf_level14:V, reg r136:V, reg p20:p(V +), reg DF_x14:*, reg DF_x15:V, reg p21:p(V +), reg DF_y14:*, reg DF_y15:V, reg p22:p(V +), reg r140:V, reg r141:V, reg c62:cls, reg r142:V, reg l:*, reg names__:cls, reg r143:V, reg l1:*, reg names__1:cls, reg r144:V, reg l2:*, reg names__2:cls, reg r145:V, reg conf_level15:*, reg conf_level16:V, reg l3:*, reg attr__:cls, reg r146:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r147:V, reg r148:V, reg STATISTIC2:*, reg STATISTIC3:V, reg PARAMETER:*, reg PARAMETER1:V, reg PVAL6:*, reg PVAL7:V, reg CINT:*, reg CINT1:V, reg ESTIMATE10:*, reg ESTIMATE11:V, reg ratio9:*, reg ratio10:V, reg alternative7:*, reg alternative8:V, reg DNAME:*, reg DNAME1:V, reg list:cls, reg r149:V, reg l4:*, reg attr__1:cls, reg r150:V, reg RVAL:*, reg RVAL1:V |
    mkenv;
    st x = x;
    st y = y;
    ratio_isMissing = missing.0(ratio);
    if ratio_isMissing then L0(1.0) else L0(ratio);
  L0(ratio_orDefault):
    st ratio = ratio_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L1() else L2(alternative);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("two.sided", "less", "greater");
      goto L0(r2);
    L2():
      r = dyn base("two.sided", "less", "greater");
      goto L0(r);
    };
    goto L2(p);
  L2(alternative_orDefault):
    st alternative = alternative_orDefault;
    conf_level_isMissing = missing.0(conf_level);
    if conf_level_isMissing then L3(0.95) else L3(conf_level);
  L3(conf_level_orDefault):
    st `conf.level` = conf_level_orDefault;
    st `...` = ddd;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L4(r5):
    r7 = `==`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L47() else L5(c1);
  L43():
    ratio1 = ld ratio;
    check L45() else D0();
  L44():
    r4 = dyn base1(<sym ratio>);
    goto L4(r4);
  D0():
    deopt 2 [ratio1];
  L5(c3):
    c10 = `as.logical`(c3);
    if c10 then L53() else L7(c10);
  L45():
    ratio2 = force? ratio1;
    checkMissing(ratio2);
    length = ldf length in base;
    r6 = dyn length(ratio2);
    check L46() else D1();
  L47():
    sym2 = ldf `is.finite`;
    base2 = ldf `is.finite` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  D1():
    deopt 5 [r6];
  L6(c6, r9):
    c7 = `as.logical`(r9);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7(c12):
    r12 = `!`(c12);
    c16 = `as.logical`(r12);
    if c16 then L56() else L8();
  L46():
    goto L4(r6);
  L48():
    ratio3 = ld ratio;
    check L50() else D2();
  L49():
    r8 = dyn base2(<sym ratio>);
    goto L6(c1, r8);
  L53():
    ratio5 = ld ratio;
    check L54() else D4();
  D2():
    deopt 10 [c1, ratio3];
  D4():
    deopt 15 [c10, ratio5];
  L8():
    goto L9();
  L9():
    match_arg = ldf `match.arg`;
    check L60() else D7();
  L50():
    ratio4 = force? ratio3;
    checkMissing(ratio4);
    is_finite = ldf `is.finite` in base;
    r10 = dyn is_finite(ratio4);
    check L51() else D3();
  L54():
    ratio6 = force? ratio5;
    checkMissing(ratio6);
    r11 = `>`(ratio6, 0.0);
    c13 = `as.logical`(r11);
    c14 = `&&`(c10, c13);
    goto L7(c14);
  L56():
    stop = ldf stop;
    check L57() else D5();
  D3():
    deopt 13 [c1, r10];
  D5():
    deopt 22 [];
  D7():
    deopt 28 [];
  L51():
    goto L6(c1, r10);
  L57():
    r13 = dyn stop("'ratio' must be a single positive number");
    check L58() else D6();
  L60():
    p1 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r16 = dyn match_arg(p1);
    check L61() else D8();
  D6():
    deopt 24 [r13];
  D8():
    deopt 30 [r16];
  L58():
    goto L9();
  L61():
    st alternative = r16;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L10(r18):
    r20 = `==`(r18, 1);
    c17 = `as.logical`(r20);
    if c17 then L66() else L11(c17);
  L62():
    conf_level1 = ld `conf.level`;
    check L64() else D9();
  L63():
    r17 = dyn base3(<sym conf.level>);
    goto L10(r17);
  D9():
    deopt 34 [conf_level1];
  L11(c19):
    c26 = `as.logical`(c19);
    if c26 then L72() else L13(c26);
  L64():
    conf_level2 = force? conf_level1;
    checkMissing(conf_level2);
    length1 = ldf length in base;
    r19 = dyn length1(conf_level2);
    check L65() else D10();
  L66():
    sym4 = ldf `is.finite`;
    base4 = ldf `is.finite` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  D10():
    deopt 37 [r19];
  L12(c22, r22):
    c23 = `as.logical`(r22);
    c24 = `&&`(c22, c23);
    goto L11(c24);
  L13(c28):
    c32 = `as.logical`(c28);
    if c32 then L75() else L14(c32);
  L65():
    goto L10(r19);
  L67():
    conf_level3 = ld `conf.level`;
    check L69() else D11();
  L68():
    r21 = dyn base4(<sym conf.level>);
    goto L12(c17, r21);
  L72():
    conf_level5 = ld `conf.level`;
    check L73() else D13();
  D11():
    deopt 42 [c17, conf_level3];
  D13():
    deopt 47 [c26, conf_level5];
  L14(c34):
    r26 = `!`(c34);
    c38 = `as.logical`(r26);
    if c38 then L78() else L15();
  L69():
    conf_level4 = force? conf_level3;
    checkMissing(conf_level4);
    is_finite1 = ldf `is.finite` in base;
    r23 = dyn is_finite1(conf_level4);
    check L70() else D12();
  L73():
    conf_level6 = force? conf_level5;
    checkMissing(conf_level6);
    r24 = `>`(conf_level6, 0.0);
    c29 = `as.logical`(r24);
    c30 = `&&`(c26, c29);
    goto L13(c30);
  L75():
    conf_level7 = ld `conf.level`;
    check L76() else D14();
  D12():
    deopt 45 [c17, r23];
  D14():
    deopt 52 [c32, conf_level7];
  L15():
    goto L16();
  L16():
    paste = ldf paste;
    check L82() else D17();
  L70():
    goto L12(c17, r23);
  L76():
    conf_level8 = force? conf_level7;
    checkMissing(conf_level8);
    r25 = `<`(conf_level8, 1.0);
    c35 = `as.logical`(r25);
    c36 = `&&`(c32, c35);
    goto L14(c36);
  L78():
    stop1 = ldf stop;
    check L79() else D15();
  D15():
    deopt 59 [];
  D17():
    deopt 65 [];
  L79():
    r27 = dyn stop1("'conf.level' must be a single number between 0 and 1");
    check L80() else D16();
  L82():
    p3 = prom<V +>{
      deparse1 = ldf deparse1;
      p2 = prom<V +>{
        sym5 = ldf substitute;
        base5 = ldf substitute in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r30):
        return r30;
      L1():
        substitute = ldf substitute in base;
        r31 = dyn substitute(<sym x>);
        goto L0(r31);
      L2():
        r29 = dyn base5(<sym x>);
        goto L0(r29);
      };
      r33 = dyn deparse1(p2);
      return r33;
    };
    p5 = prom<V +>{
      deparse2 = ldf deparse1;
      p4 = prom<V +>{
        sym6 = ldf substitute;
        base6 = ldf substitute in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r36):
        return r36;
      L1():
        substitute1 = ldf substitute in base;
        r37 = dyn substitute1(<sym y>);
        goto L0(r37);
      L2():
        r35 = dyn base6(<sym y>);
        goto L0(r35);
      };
      r39 = dyn deparse2(p4);
      return r39;
    };
    r41 = dyn paste(p3, "and", p5);
    check L83() else D18();
  D16():
    deopt 61 [r27];
  D18():
    deopt 69 [r41];
  L80():
    goto L16();
  L83():
    st DNAME = r41;
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L17(r43):
    c39 = `as.logical`(r43);
    if c39 then L88() else L18(c39);
  L84():
    x1 = ld x;
    check L86() else D19();
  L85():
    r42 = dyn base7(<sym x>, "lm");
    goto L17(r42);
  D19():
    deopt 73 [x1];
  L18(c41):
    c48 = `as.logical`(c41);
    if c48 then L94() else L20();
  L86():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r44 = dyn inherits(x2, "lm", FALSE);
    check L87() else D20();
  L88():
    sym8 = ldf inherits;
    base8 = ldf inherits in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  D20():
    deopt 78 [r44];
  L19(c44, r46):
    c45 = `as.logical`(r46);
    c46 = `&&`(c44, c45);
    goto L18(c46);
  L20():
    x11 = ld x;
    check L124() else D31();
  L23():
    V_x = ld `V.x`;
    check L162() else D51();
  L87():
    goto L17(r44);
  L89():
    y1 = ld y;
    check L91() else D21();
  L90():
    r45 = dyn base8(<sym y>, "lm");
    goto L19(c39, r45);
  L94():
    x3 = ld x;
    check L95() else D23();
  D21():
    deopt 81 [c39, y1];
  D23():
    deopt 88 [x3];
  D31():
    deopt 120 [x11];
  D51():
    deopt 188 [V_x];
  L91():
    y2 = force? y1;
    checkMissing(y2);
    inherits1 = ldf inherits in base;
    r47 = dyn inherits1(y2, "lm", FALSE);
    check L92() else D22();
  L95():
    x4 = force? x3;
    checkMissing(x4);
    c49 = `is.object`(x4);
    if c49 then L97() else L98(x4);
  L124():
    x12 = force? x11;
    checkMissing(x12);
    c53 = `is.object`(x12);
    if c53 then L125() else L126(x12);
  L162():
    V_x1 = force? V_x;
    checkMissing(V_x1);
    V_y = ld `V.y`;
    check L163() else D52();
  D22():
    deopt 86 [c39, r47];
  D52():
    deopt 189 [V_x1, V_y];
  L24(dx9):
    st x = dx9;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L132() else L133();
  L92():
    goto L19(c39, r47);
  L96(dx1):
    st `DF.x` = dx1;
    y3 = ld y;
    check L100() else D24();
  L97():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L99() else L98(dr);
  L98(x6):
    r48 = `$`(x6, <sym df.residual>);
    goto L96(r48);
  L125():
    dr8 = tryDispatchBuiltin.1("[", x12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L127() else L126(dr8);
  L126(x14):
    sym11 = ldf `is.finite`;
    base11 = ldf `is.finite` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L128() else L129();
  L163():
    V_y1 = force? V_y;
    checkMissing(V_y1);
    r89 = `/`(V_x1, V_y1);
    st ESTIMATE = r89;
    ESTIMATE = ld ESTIMATE;
    check L164() else D53();
  D24():
    deopt 92 [y3];
  D53():
    deopt 193 [ESTIMATE];
  L25(x17, r64):
    __ = ldf `[` in base;
    r66 = dyn __(x17, r64);
    goto L24(r66);
  L26(r68):
    r70 = `-`(r68, 1);
    st `DF.x` = r70;
    DF_x2 = ld `DF.x`;
    check L136() else D36();
  L99():
    dx = getTryDispatchBuiltinValue(dr);
    goto L96(dx);
  L100():
    y4 = force? y3;
    checkMissing(y4);
    c50 = `is.object`(y4);
    if c50 then L102() else L103(y4);
  L127():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L128():
    x18 = ld x;
    check L130() else D32();
  L129():
    r63 = dyn base11(<sym x>);
    goto L25(x14, r63);
  L132():
    x20 = ld x;
    check L134() else D34();
  L133():
    r67 = dyn base12(<sym x>);
    goto L26(r67);
  L164():
    ESTIMATE1 = force? ESTIMATE;
    checkMissing(ESTIMATE1);
    ratio7 = ld ratio;
    check L165() else D54();
  D32():
    deopt 124 [x14, x18];
  D34():
    deopt 132 [x20];
  D36():
    deopt 139 [DF_x2];
  D54():
    deopt 194 [ESTIMATE1, ratio7];
  L101(dx3):
    st `DF.y` = dx3;
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  L102():
    dr2 = tryDispatchBuiltin.1("$", y4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L104() else L103(dr2);
  L103(y6):
    r49 = `$`(y6, <sym df.residual>);
    goto L101(r49);
  L130():
    x19 = force? x18;
    checkMissing(x19);
    is_finite2 = ldf `is.finite` in base;
    r65 = dyn is_finite2(x19);
    check L131() else D33();
  L134():
    x21 = force? x20;
    checkMissing(x21);
    length2 = ldf length in base;
    r69 = dyn length2(x21);
    check L135() else D35();
  L136():
    DF_x3 = force? DF_x2;
    checkMissing(DF_x3);
    r71 = `<`(DF_x3, 1);
    c54 = `as.logical`(r71);
    if c54 then L137() else L27();
  L165():
    ratio8 = force? ratio7;
    checkMissing(ratio8);
    r90 = `/`(ESTIMATE1, ratio8);
    st STATISTIC = r90;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L166() else L167();
  D33():
    deopt 127 [x14, r65];
  D35():
    deopt 135 [r69];
  L21(r51):
    DF_x = ld `DF.x`;
    check L113() else D27();
  L27():
    goto L28();
  L28():
    y11 = ld y;
    check L141() else D39();
  L34(r92):
    st PARAMETER = r92;
    pf = ldf pf;
    check L171() else D58();
  L104():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L101(dx2);
  L105():
    x7 = ld x;
    check L107() else D25();
  L106():
    r50 = dyn base9(<lang `^`(`$`(x, residuals), 2.0)>);
    goto L21(r50);
  L131():
    goto L25(x14, r65);
  L135():
    goto L26(r69);
  L137():
    stop2 = ldf stop;
    check L138() else D37();
  L166():
    DF_x4 = ld `DF.x`;
    check L168() else D55();
  L167():
    r91 = dyn base15[`num df`, `denom df`](<sym DF.x>, <sym DF.y>);
    goto L34(r91);
  D25():
    deopt 98 [x7];
  D27():
    deopt 104 [r51, DF_x];
  D37():
    deopt 144 [];
  D39():
    deopt 149 [y11];
  D55():
    deopt 200 [DF_x4];
  D58():
    deopt 210 [];
  L107():
    x8 = force? x7;
    checkMissing(x8);
    c51 = `is.object`(x8);
    if c51 then L109() else L110(x8);
  L113():
    DF_x1 = force? DF_x;
    checkMissing(DF_x1);
    r55 = `/`(r51, DF_x1);
    st `V.x` = r55;
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L114() else L115();
  L138():
    r72 = dyn stop2("not enough 'x' observations");
    check L139() else D38();
  L141():
    y12 = force? y11;
    checkMissing(y12);
    c55 = `is.object`(y12);
    if c55 then L142() else L143(y12);
  L168():
    DF_x5 = force? DF_x4;
    checkMissing(DF_x5);
    DF_y4 = ld `DF.y`;
    check L169() else D56();
  L171():
    p8 = prom<V +>{
      STATISTIC = ld STATISTIC;
      STATISTIC1 = force? STATISTIC;
      checkMissing(STATISTIC1);
      return STATISTIC1;
    };
    p9 = prom<V +>{
      DF_x6 = ld `DF.x`;
      DF_x7 = force? DF_x6;
      checkMissing(DF_x7);
      return DF_x7;
    };
    p10 = prom<V +>{
      DF_y6 = ld `DF.y`;
      DF_y7 = force? DF_y6;
      checkMissing(DF_y7);
      return DF_y7;
    };
    r97 = dyn pf(p8, p9, p10);
    check L172() else D59();
  D38():
    deopt 146 [r72];
  D56():
    deopt 203 [DF_y4];
  D59():
    deopt 214 [r97];
  L22(r57):
    DF_y = ld `DF.y`;
    check L122() else D30();
  L29(dx11):
    st y = dx11;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L149() else L150();
  L108(dx5):
    r53 = `^`(dx5, 2.0);
    sum = ldf sum in base;
    r54 = dyn sum(r53);
    check L112() else D26();
  L109():
    dr4 = tryDispatchBuiltin.1("$", x8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L111() else L110(dr4);
  L110(x10):
    r52 = `$`(x10, <sym residuals>);
    goto L108(r52);
  L114():
    y7 = ld y;
    check L116() else D28();
  L115():
    r56 = dyn base10(<lang `^`(`$`(y, residuals), 2.0)>);
    goto L22(r56);
  L139():
    goto L28();
  L142():
    dr10 = tryDispatchBuiltin.1("[", y12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L144() else L143(dr10);
  L143(y14):
    sym13 = ldf `is.finite`;
    base13 = ldf `is.finite` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L145() else L146();
  L169():
    DF_y5 = force? DF_y4;
    checkMissing(DF_y5);
    c57 = ldf c in base;
    r93 = dyn c57(DF_x5, DF_y5);
    check L170() else D57();
  L172():
    st PVAL = r97;
    alternative3 = ld alternative;
    check L173() else D60();
  D26():
    deopt 104 [r54];
  D28():
    deopt 110 [y7];
  D30():
    deopt 116 [r57, DF_y];
  D57():
    deopt 207 [r93];
  D60():
    deopt 216 [alternative3];
  L30(y17, r75):
    __1 = ldf `[` in base;
    r77 = dyn __1(y17, r75);
    goto L29(r77);
  L31(r79):
    r81 = `-`(r79, 1);
    st `DF.y` = r81;
    DF_y2 = ld `DF.y`;
    check L153() else D44();
  L111():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L108(dx4);
  L112():
    goto L21(r54);
  L116():
    y8 = force? y7;
    checkMissing(y8);
    c52 = `is.object`(y8);
    if c52 then L118() else L119(y8);
  L122():
    DF_y1 = force? DF_y;
    checkMissing(DF_y1);
    r61 = `/`(r57, DF_y1);
    st `V.y` = r61;
    goto L23();
  L144():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L29(dx10);
  L145():
    y18 = ld y;
    check L147() else D40();
  L146():
    r74 = dyn base13(<sym y>);
    goto L30(y14, r74);
  L149():
    y20 = ld y;
    check L151() else D42();
  L150():
    r78 = dyn base14(<sym y>);
    goto L31(r78);
  L170():
    goto L34(r93);
  L173():
    alternative4 = force? alternative3;
    checkMissing(alternative4);
    r98 = `==`(alternative4, "two.sided");
    c58 = `as.logical`(r98);
    if c58 then L174() else L35();
  D40():
    deopt 153 [y14, y18];
  D42():
    deopt 161 [y20];
  D44():
    deopt 168 [DF_y2];
  L35():
    alternative5 = ld alternative;
    check L191() else D72();
  L38():
    l = ld STATISTIC;
    names__ = ldf `names<-`;
    check L207() else D82();
  L117(dx7):
    r59 = `^`(dx7, 2.0);
    sum1 = ldf sum in base;
    r60 = dyn sum1(r59);
    check L121() else D29();
  L118():
    dr6 = tryDispatchBuiltin.1("$", y8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L120() else L119(dr6);
  L119(y10):
    r58 = `$`(y10, <sym residuals>);
    goto L117(r58);
  L147():
    y19 = force? y18;
    checkMissing(y19);
    is_finite3 = ldf `is.finite` in base;
    r76 = dyn is_finite3(y19);
    check L148() else D41();
  L151():
    y21 = force? y20;
    checkMissing(y21);
    length3 = ldf length in base;
    r80 = dyn length3(y21);
    check L152() else D43();
  L153():
    DF_y3 = force? DF_y2;
    checkMissing(DF_y3);
    r82 = `<`(DF_y3, 1);
    c56 = `as.logical`(r82);
    if c56 then L154() else L32();
  L174():
    sym16 = ldf min;
    base16 = ldf min in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L175() else L176();
  D29():
    deopt 116 [r60];
  D41():
    deopt 156 [y14, r76];
  D43():
    deopt 164 [r80];
  D72():
    deopt 261 [alternative5];
  D82():
    deopt 301 ["F", l, "F"];
  L32():
    goto L33();
  L33():
    var = ldf var;
    check L158() else D47();
  L36(r102, r103):
    r106 = `*`(r102, r103);
    st PVAL = r106;
    conf_level9 = ld `conf.level`;
    check L180() else D64();
  L120():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L117(dx6);
  L121():
    goto L22(r60);
  L148():
    goto L30(y14, r76);
  L152():
    goto L31(r80);
  L154():
    stop3 = ldf stop;
    check L155() else D45();
  L175():
    PVAL = ld PVAL;
    check L177() else D61();
  L176():
    r101 = dyn base16(<sym PVAL>, <lang `-`(1.0, PVAL)>);
    goto L36(2.0, r101);
  L191():
    alternative6 = force? alternative5;
    checkMissing(alternative6);
    r124 = `==`(alternative6, "greater");
    c60 = `as.logical`(r124);
    if c60 then L192() else L39();
  L207():
    r143 = dyn names__(l, NULL, "F");
    check L208() else D83();
  D45():
    deopt 173 [];
  D47():
    deopt 179 [];
  D61():
    deopt 223 [2.0, PVAL];
  D64():
    deopt 234 [1.0, conf_level9];
  D83():
    deopt 303 ["F", r143];
  L39():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L201() else L202();
  L155():
    r83 = dyn stop3("not enough 'y' observations");
    check L156() else D46();
  L158():
    p6 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    r86 = dyn var(p6);
    check L159() else D48();
  L177():
    PVAL1 = force? PVAL;
    checkMissing(PVAL1);
    PVAL2 = ld PVAL;
    check L178() else D62();
  L180():
    conf_level10 = force? conf_level9;
    checkMissing(conf_level10);
    r107 = `-`(1.0, conf_level10);
    r108 = `/`(r107, 2.0);
    st BETA = r108;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L181() else L182();
  L192():
    PVAL4 = ld PVAL;
    check L193() else D73();
  L208():
    st STATISTIC = r143;
    l1 = ld ratio;
    names__1 = ldf `names<-`;
    check L209() else D84();
  D46():
    deopt 175 [r83];
  D48():
    deopt 181 [r86];
  D62():
    deopt 226 [2.0, 1.0, PVAL2];
  D73():
    deopt 266 [1.0, PVAL4];
  D84():
    deopt 308 ["ratio of variances", l1, "ratio of variances"];
  L37(r110):
    st CINT = r110;
    goto L38();
  L41(r135):
    st CINT = r135;
    goto L38();
  L156():
    goto L33();
  L159():
    st `V.x` = r86;
    var1 = ldf var;
    check L160() else D49();
  L178():
    PVAL3 = force? PVAL2;
    checkMissing(PVAL3);
    r104 = `-`(1.0, PVAL3);
    min = ldf min in base;
    r105 = dyn min(PVAL1, r104);
    check L179() else D63();
  L181():
    ESTIMATE2 = ld ESTIMATE;
    check L183() else D65();
  L182():
    r109 = dyn base17(<lang `/`(ESTIMATE, qf(`-`(1.0, BETA), DF.x, DF.y))>, <lang `/`(ESTIMATE, qf(BETA, DF.x, DF.y))>);
    goto L37(r109);
  L193():
    PVAL5 = force? PVAL4;
    checkMissing(PVAL5);
    r125 = `-`(1.0, PVAL5);
    st PVAL = r125;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L194() else L195();
  L201():
    ESTIMATE8 = ld ESTIMATE;
    check L203() else D78();
  L202():
    r134 = dyn base19(0.0, <lang `/`(ESTIMATE, qf(`-`(1.0, conf.level), DF.x, DF.y))>);
    goto L41(r134);
  L209():
    r144 = dyn names__1(l1, NULL, "ratio of variances");
    check L210() else D85();
  D49():
    deopt 184 [];
  D63():
    deopt 230 [2.0, r105];
  D65():
    deopt 242 [ESTIMATE2];
  D78():
    deopt 287 [ESTIMATE8];
  D85():
    deopt 310 ["ratio of variances", r144];
  L40(r127):
    st CINT = r127;
    goto L38();
  L160():
    p7 = prom<V +>{
      y22 = ld y;
      y23 = force? y22;
      checkMissing(y23);
      return y23;
    };
    r88 = dyn var1(p7);
    check L161() else D50();
  L179():
    goto L36(2.0, r105);
  L183():
    ESTIMATE3 = force? ESTIMATE2;
    checkMissing(ESTIMATE3);
    qf = ldf qf;
    check L184() else D66();
  L194():
    ESTIMATE6 = ld ESTIMATE;
    check L196() else D74();
  L195():
    r126 = dyn base18(<lang `/`(ESTIMATE, qf(conf.level, DF.x, DF.y))>, +Infinity);
    goto L40(r126);
  L203():
    ESTIMATE9 = force? ESTIMATE8;
    checkMissing(ESTIMATE9);
    qf3 = ldf qf;
    check L204() else D79();
  L210():
    st ratio = r144;
    l2 = ld ESTIMATE;
    names__2 = ldf `names<-`;
    check L211() else D86();
  D50():
    deopt 186 [r88];
  D66():
    deopt 244 [ESTIMATE3];
  D74():
    deopt 272 [ESTIMATE6];
  D79():
    deopt 289 [ESTIMATE9];
  D86():
    deopt 313 ["ratio of variances", l2, "ratio of variances"];
  L161():
    st `V.y` = r88;
    goto L23();
  L184():
    p11 = prom<V +>{
      BETA = ld BETA;
      BETA1 = force? BETA;
      checkMissing(BETA1);
      r111 = `-`(1.0, BETA1);
      return r111;
    };
    p12 = prom<V +>{
      DF_x8 = ld `DF.x`;
      DF_x9 = force? DF_x8;
      checkMissing(DF_x9);
      return DF_x9;
    };
    p13 = prom<V +>{
      DF_y8 = ld `DF.y`;
      DF_y9 = force? DF_y8;
      checkMissing(DF_y9);
      return DF_y9;
    };
    r115 = dyn qf(p11, p12, p13);
    check L185() else D67();
  L196():
    ESTIMATE7 = force? ESTIMATE6;
    checkMissing(ESTIMATE7);
    qf2 = ldf qf;
    check L197() else D75();
  L204():
    p20 = prom<V +>{
      conf_level13 = ld `conf.level`;
      conf_level14 = force? conf_level13;
      checkMissing(conf_level14);
      r136 = `-`(1.0, conf_level14);
      return r136;
    };
    p21 = prom<V +>{
      DF_x14 = ld `DF.x`;
      DF_x15 = force? DF_x14;
      checkMissing(DF_x15);
      return DF_x15;
    };
    p22 = prom<V +>{
      DF_y14 = ld `DF.y`;
      DF_y15 = force? DF_y14;
      checkMissing(DF_y15);
      return DF_y15;
    };
    r140 = dyn qf3(p20, p21, p22);
    check L205() else D80();
  L211():
    r145 = dyn names__2(l2, NULL, "ratio of variances");
    check L212() else D87();
  D67():
    deopt 248 [ESTIMATE3, r115];
  D75():
    deopt 274 [ESTIMATE7];
  D80():
    deopt 293 [ESTIMATE9, r140];
  D87():
    deopt 315 ["ratio of variances", r145];
  L185():
    r116 = `/`(ESTIMATE3, r115);
    ESTIMATE4 = ld ESTIMATE;
    check L186() else D68();
  L197():
    p17 = prom<V +>{
      conf_level11 = ld `conf.level`;
      conf_level12 = force? conf_level11;
      checkMissing(conf_level12);
      return conf_level12;
    };
    p18 = prom<V +>{
      DF_x12 = ld `DF.x`;
      DF_x13 = force? DF_x12;
      checkMissing(DF_x13);
      return DF_x13;
    };
    p19 = prom<V +>{
      DF_y12 = ld `DF.y`;
      DF_y13 = force? DF_y12;
      checkMissing(DF_y13);
      return DF_y13;
    };
    r131 = dyn qf2(p17, p18, p19);
    check L198() else D76();
  L205():
    r141 = `/`(ESTIMATE9, r140);
    c62 = ldf c in base;
    r142 = dyn c62(0.0, r141);
    check L206() else D81();
  L212():
    st ESTIMATE = r145;
    conf_level15 = ld `conf.level`;
    check L213() else D88();
  D68():
    deopt 250 [ESTIMATE4];
  D76():
    deopt 278 [ESTIMATE7, r131];
  D81():
    deopt 296 [r142];
  D88():
    deopt 317 [conf_level15];
  L186():
    ESTIMATE5 = force? ESTIMATE4;
    checkMissing(ESTIMATE5);
    qf1 = ldf qf;
    check L187() else D69();
  L198():
    r132 = `/`(ESTIMATE7, r131);
    c61 = ldf c in base;
    r133 = dyn c61(r132, +Infinity);
    check L199() else D77();
  L206():
    goto L41(r142);
  L213():
    conf_level16 = force? conf_level15;
    checkMissing(conf_level16);
    l3 = ld CINT;
    attr__ = ldf `attr<-`;
    check L214() else D89();
  D69():
    deopt 252 [ESTIMATE5];
  D77():
    deopt 282 [r133];
  D89():
    deopt 320 [conf_level16, l3, conf_level16];
  L187():
    p14 = prom<V +>{
      BETA2 = ld BETA;
      BETA3 = force? BETA2;
      checkMissing(BETA3);
      return BETA3;
    };
    p15 = prom<V +>{
      DF_x10 = ld `DF.x`;
      DF_x11 = force? DF_x10;
      checkMissing(DF_x11);
      return DF_x11;
    };
    p16 = prom<V +>{
      DF_y10 = ld `DF.y`;
      DF_y11 = force? DF_y10;
      checkMissing(DF_y11);
      return DF_y11;
    };
    r120 = dyn qf1(p14, p15, p16);
    check L188() else D70();
  L199():
    goto L40(r133);
  L214():
    r146 = dyn attr__(l3, NULL, "conf.level", conf_level16);
    check L215() else D90();
  D70():
    deopt 256 [ESTIMATE5, r120];
  D90():
    deopt 323 [conf_level16, r146];
  L188():
    r121 = `/`(ESTIMATE5, r120);
    c59 = ldf c in base;
    r122 = dyn c59(r116, r121);
    check L189() else D71();
  L215():
    st CINT = r146;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L216() else L217();
  D71():
    deopt 259 [r122];
  L42(r148):
    st RVAL = r148;
    l4 = ld RVAL;
    attr__1 = ldf `attr<-`;
    check L227() else D100();
  L189():
    goto L37(r122);
  L216():
    STATISTIC2 = ld STATISTIC;
    check L218() else D91();
  L217():
    r147 = dyn base20[statistic, parameter, `p.value`, `conf.int`, estimate, `null.value`, alternative, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym CINT>, <sym ESTIMATE>, <sym ratio>, <sym alternative>, "F test to compare two variances", <sym DNAME>);
    goto L42(r147);
  D91():
    deopt 327 [STATISTIC2];
  D100():
    deopt 359 ["htest", l4, "htest"];
  L218():
    STATISTIC3 = force? STATISTIC2;
    checkMissing(STATISTIC3);
    PARAMETER = ld PARAMETER;
    check L219() else D92();
  L227():
    r150 = dyn attr__1(l4, NULL, "class", "htest");
    check L228() else D101();
  D92():
    deopt 330 [PARAMETER];
  D101():
    deopt 362 ["htest", r150];
  L219():
    PARAMETER1 = force? PARAMETER;
    checkMissing(PARAMETER1);
    PVAL6 = ld PVAL;
    check L220() else D93();
  L228():
    st RVAL = r150;
    RVAL = ld RVAL;
    check L229() else D102();
  D93():
    deopt 333 [PVAL6];
  D102():
    deopt 364 [RVAL];
  L220():
    PVAL7 = force? PVAL6;
    checkMissing(PVAL7);
    CINT = ld CINT;
    check L221() else D94();
  L229():
    RVAL1 = force? RVAL;
    checkMissing(RVAL1);
    popenv;
    return RVAL1;
  D94():
    deopt 336 [CINT];
  L221():
    CINT1 = force? CINT;
    checkMissing(CINT1);
    ESTIMATE10 = ld ESTIMATE;
    check L222() else D95();
  D95():
    deopt 339 [ESTIMATE10];
  L222():
    ESTIMATE11 = force? ESTIMATE10;
    checkMissing(ESTIMATE11);
    ratio9 = ld ratio;
    check L223() else D96();
  D96():
    deopt 342 [ratio9];
  L223():
    ratio10 = force? ratio9;
    checkMissing(ratio10);
    alternative7 = ld alternative;
    check L224() else D97();
  D97():
    deopt 345 [alternative7];
  L224():
    alternative8 = force? alternative7;
    checkMissing(alternative8);
    DNAME = ld DNAME;
    check L225() else D98();
  D98():
    deopt 350 [DNAME];
  L225():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    list = ldf list in base;
    r149 = dyn list(STATISTIC3, PARAMETER1, PVAL7, CINT1, ESTIMATE11, ratio10, alternative8, "F test to compare two variances", DNAME1);
    check L226() else D99();
  D99():
    deopt 354 [r149];
  L226():
    goto L42(r149);
  }
}