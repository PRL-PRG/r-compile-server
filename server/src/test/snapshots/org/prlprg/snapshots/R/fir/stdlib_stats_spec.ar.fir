fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg spec_ar:cls, reg lh:*, reg lh1:V, reg p1:p(V +), reg r6:V, reg spec_ar1:cls, reg ldeaths:*, reg ldeaths1:V, reg p2:p(V +), reg r8:V, reg spec_ar2:cls, reg ldeaths2:*, reg ldeaths3:V, reg p3:p(V +), reg r10:V, reg spec_ar3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg lynx:*, reg lynx1:V, reg r13:V, reg p4:p(V +), reg r15:V, reg spec_ar4:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg lynx2:*, reg lynx3:V, reg r18:V, reg p5:p(V +), reg r20:V, reg spec_ar5:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg lynx4:*, reg lynx5:V, reg r23:V, reg p6:p(V +), reg r25:V, reg spec_ar6:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg lynx6:*, reg lynx7:V, reg r28:V, reg p7:p(V +), reg r30:V |
    mkenv;
    r = clos inner881778619;
    st `spec.ar` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    spec_ar = ldf `spec.ar`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      lh = ld lh;
      lh1 = force? lh;
      checkMissing(lh1);
      return lh1;
    };
    r6 = dyn spec_ar(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    spec_ar1 = ldf `spec.ar`;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      ldeaths = ld ldeaths;
      ldeaths1 = force? ldeaths;
      checkMissing(ldeaths1);
      return ldeaths1;
    };
    r8 = dyn spec_ar1(p2);
    check L8() else D5();
  D5():
    deopt 15 [r8];
  L8():
    spec_ar2 = ldf `spec.ar`;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    p3 = prom<V +>{
      ldeaths2 = ld ldeaths;
      ldeaths3 = force? ldeaths2;
      checkMissing(ldeaths3);
      return ldeaths3;
    };
    r10 = dyn spec_ar2[, method](p3, "burg");
    check L10() else D7();
  D7():
    deopt 21 [r10];
  L10():
    spec_ar3 = ldf `spec.ar`;
    check L11() else D8();
  D8():
    deopt 23 [];
  L11():
    p4 = prom<V +>{
      sym1 = ldf log;
      base1 = ldf log in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      lynx = ld lynx;
      lynx1 = force? lynx;
      checkMissing(lynx1);
      r13 = log(lynx1, 2.718281828459045);
      goto L0(r13);
    L2():
      r11 = dyn base1(<sym lynx>);
      goto L0(r11);
    };
    r15 = dyn spec_ar3(p4);
    check L12() else D9();
  D9():
    deopt 25 [r15];
  L12():
    spec_ar4 = ldf `spec.ar`;
    check L13() else D10();
  D10():
    deopt 27 [];
  L13():
    p5 = prom<V +>{
      sym2 = ldf log;
      base2 = ldf log in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      lynx2 = ld lynx;
      lynx3 = force? lynx2;
      checkMissing(lynx3);
      r18 = log(lynx3, 2.718281828459045);
      goto L0(r18);
    L2():
      r16 = dyn base2(<sym lynx>);
      goto L0(r16);
    };
    r20 = dyn spec_ar4[, method, add, col](p5, "burg", TRUE, "purple");
    check L14() else D11();
  D11():
    deopt 35 [r20];
  L14():
    spec_ar5 = ldf `spec.ar`;
    check L15() else D12();
  D12():
    deopt 37 [];
  L15():
    p6 = prom<V +>{
      sym3 = ldf log;
      base3 = ldf log in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      lynx4 = ld lynx;
      lynx5 = force? lynx4;
      checkMissing(lynx5);
      r23 = log(lynx5, 2.718281828459045);
      goto L0(r23);
    L2():
      r21 = dyn base3(<sym lynx>);
      goto L0(r21);
    };
    r25 = dyn spec_ar5[, method, add, col](p6, "mle", TRUE, "forest green");
    check L16() else D13();
  D13():
    deopt 45 [r25];
  L16():
    spec_ar6 = ldf `spec.ar`;
    check L17() else D14();
  D14():
    deopt 47 [];
  L17():
    p7 = prom<V +>{
      sym4 = ldf log;
      base4 = ldf log in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      lynx6 = ld lynx;
      lynx7 = force? lynx6;
      checkMissing(lynx7);
      r28 = log(lynx7, 2.718281828459045);
      goto L0(r28);
    L2():
      r26 = dyn base4(<sym lynx>);
      goto L0(r26);
    };
    r30 = dyn spec_ar6[, method, add, col](p7, "ols", TRUE, "blue");
    check L18() else D15();
  D15():
    deopt 55 [r30];
  L18():
    popenv;
    return r30;
  }
}
fun inner881778619(x, `n.freq`, order, plot, `na.action`, method, `...`) {
  (reg x:*, reg n_freq:*, reg order:*, reg plot:*, reg na_action:*, reg method:*, reg ddd:dots) -+> V { var x:*, var `n.freq`:*, var order:*, reg order_isMissing:L, reg order_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var method:*, reg method_isMissing:L, reg method_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg is_list:cls, reg r3:V, reg r4:V, reg c:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg na_action1:cls, reg as_ts:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg frequency:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r15:V, reg NCOL:cls, reg x7:*, reg x8:V, reg p5:p(V +), reg r17:V, reg ar:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg order1:*, reg order2:V, reg c1:V, reg p7:p(V +), reg order3:*, reg order4:V, reg p8:p(V +), reg na_action2:*, reg na_action3:V, reg p9:p(V +), reg method1:*, reg method2:V, reg p10:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg c2:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg x11:*, reg x12:V, reg names:cls, reg r34:V, reg match:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg cn:*, reg cn1:V, reg anyNA:cls, reg r38:V, reg c3:L, reg stop:cls, reg r39:V, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r41:V, reg x17:*, reg x18:V, reg c5:L, reg x20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg x21:*, reg x22:V, reg c6:L, reg x24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r45:V, reg is_array:cls, reg r46:V, reg c7:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg x25:*, reg x26:V, reg c8:L, reg x28:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r49:V, reg dim:cls, reg r50:V, reg c9:L, reg r52:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r53:V, reg x29:*, reg x30:V, reg c10:L, reg x32:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg missing:cls, reg r57:V, reg c11:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg n_freq1:*, reg n_freq2:V, reg seq_int:cls, reg r61:V, reg nser:*, reg nser1:V, reg r62:V, reg c12:L, reg as_vector:cls, reg x33:*, reg x34:V, reg c13:L, reg x36:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r63:V, reg p11:p(V +), reg r65:V, reg order5:*, reg order6:V, reg r66:V, reg c14:L, reg outer:cls, reg freq:*, reg freq1:V, reg p12:p(V +), reg order7:*, reg order8:V, reg r68:V, reg p13:p(V +), reg r70:cls, reg p14:p(V +), reg r72:V, reg x37:*, reg x38:V, reg c15:L, reg x40:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r73:V, reg ___:cls, reg r74:V, reg outer1:cls, reg freq2:*, reg freq3:V, reg p15:p(V +), reg order9:*, reg order10:V, reg r76:V, reg p16:p(V +), reg r78:cls, reg p17:p(V +), reg r80:V, reg x41:*, reg x42:V, reg c16:L, reg x44:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r81:V, reg ___1:cls, reg r82:V, reg var_p:*, reg var_p1:V, reg xfreq:*, reg xfreq1:V, reg cs:*, reg cs1:V, reg r83:V, reg r84:V, reg sn:*, reg sn1:V, reg r85:V, reg r86:V, reg r87:V, reg r88:V, reg r89:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg var_p2:*, reg var_p3:V, reg xfreq2:*, reg xfreq3:V, reg r91:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r92:V, reg r93:V, reg freq4:*, reg freq5:V, reg length:cls, reg r94:V, reg rep_int:cls, reg r95:V, reg _NotYetImplemented:cls, reg r97:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg r99:V, reg freq6:*, reg freq7:V, reg xfreq4:*, reg xfreq5:V, reg r100:V, reg spec:*, reg spec1:V, reg coh:*, reg coh1:V, reg phase:*, reg phase1:V, reg nrow:cls, reg x45:*, reg x46:V, reg p18:p(V +), reg r102:V, reg series:*, reg series1:V, reg paste0:cls, reg order11:*, reg order12:V, reg p19:p(V +), reg r104:V, reg list:cls, reg r105:V, reg l:*, reg class__:cls, reg r106:V, reg plot1:*, reg plot2:V, reg c17:L, reg plot3:cls, reg spg_out:*, reg spg_out1:V, reg p20:p(V +), reg ddd1:dots?, reg r108:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r109:V, reg r110:V, reg spg_out2:*, reg spg_out3:V, reg invisible:cls, reg r111:V, reg spg_out4:*, reg spg_out5:V |
    mkenv;
    st x = x;
    st `n.freq` = n_freq;
    order_isMissing = missing.0(order);
    if order_isMissing then L0(NULL) else L0(order);
  L0(order_orDefault):
    st order = order_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L1(TRUE) else L1(plot);
  L1(plot_orDefault):
    st plot = plot_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L2() else L3(na_action);
  L2():
    p = prom<V +>{
      na_fail = ld `na.fail`;
      na_fail1 = force? na_fail;
      checkMissing(na_fail1);
      return na_fail1;
    };
    goto L3(p);
  L3(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L4("yule-walker") else L4(method);
  L4(method_orDefault):
    st method = method_orDefault;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L5(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L34() else L6();
  L30():
    x1 = ld x;
    check L32() else D0();
  L31():
    r1 = dyn base(<sym x>);
    goto L5(r1);
  D0():
    deopt 2 [x1];
  L6():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L7():
    x29 = ld x;
    check L95() else D26();
  L32():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(x2);
    check L33() else D1();
  L34():
    deparse1 = ldf deparse1;
    check L35() else D2();
  D1():
    deopt 5 [r3];
  D2():
    deopt 8 [];
  D26():
    deopt 99 [x29];
  L8(r28):
    st cn = r28;
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  L33():
    goto L5(r3);
  L35():
    p1 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      substitute = ldf substitute in base;
      r7 = dyn substitute(<sym x>);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym x>);
      goto L0(r5);
    };
    r9 = dyn deparse1(p1);
    check L36() else D3();
  L46():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L47():
    r27 = dyn base3(<lang c("ar", "var.pred", "order")>, <lang names(x)>);
    goto L8(r27);
  L95():
    x30 = force? x29;
    checkMissing(x30);
    c10 = `is.object`(x30);
    if c10 then L97() else L98(x30);
  D3():
    deopt 10 [r9];
  L9(r30):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L11(r37):
    c3 = `as.logical`(r37);
    if c3 then L60() else L12();
  L36():
    st series = r9;
    na_action1 = ldf `na.action`;
    check L37() else D4();
  L48():
    c2 = ldf c in base;
    r31 = dyn c2("ar", "var.pred", "order");
    check L50() else D12();
  L49():
    r29 = dyn base4("ar", "var.pred", "order");
    goto L9(r29);
  L56():
    cn = ld cn;
    check L58() else D16();
  L57():
    r36 = dyn base6(<sym cn>);
    goto L11(r36);
  L96(dx11):
    st order = dx11;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L100() else L101();
  L97():
    dr10 = tryDispatchBuiltin.1("$", x30);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L99() else L98(dr10);
  L98(x32):
    r54 = `$`(x32, <sym order>);
    goto L96(r54);
  D4():
    deopt 13 [];
  D12():
    deopt 46 [r31];
  D16():
    deopt 60 [cn];
  L10(r33):
    match = ldf match in base;
    r35 = dyn match(r30, r33, NA_INT, NULL);
    check L55() else D15();
  L12():
    goto L13();
  L13():
    x13 = ld x;
    check L64() else D20();
  L18(r56):
    c11 = `as.logical`(r56);
    if c11 then L102() else L19();
  L37():
    p3 = prom<V +>{
      as_ts = ldf `as.ts`;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r11 = dyn as_ts(p2);
      return r11;
    };
    r13 = dyn na_action1(p3);
    check L38() else D5();
  L50():
    goto L9(r31);
  L51():
    x11 = ld x;
    check L53() else D13();
  L52():
    r32 = dyn base5(<sym x>);
    goto L10(r32);
  L58():
    cn1 = force? cn;
    checkMissing(cn1);
    anyNA = ldf anyNA in base;
    r38 = dyn anyNA(cn1);
    check L59() else D17();
  L60():
    stop = ldf stop;
    check L61() else D18();
  L99():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L96(dx10);
  L100():
    missing = ldf missing in base;
    r57 = dyn missing(<sym n.freq>);
    goto L18(r57);
  L101():
    r55 = dyn base9(<sym n.freq>);
    goto L18(r55);
  D5():
    deopt 15 [r13];
  D13():
    deopt 49 [x11];
  D15():
    deopt 56 [r35];
  D17():
    deopt 63 [r38];
  D18():
    deopt 65 [];
  D20():
    deopt 70 [x13];
  L19():
    goto L20();
  L20():
    sym10 = ldf `seq.int`;
    base10 = ldf `seq.int` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L104() else L105();
  L38():
    st x = r13;
    frequency = ldf frequency;
    check L39() else D6();
  L53():
    x12 = force? x11;
    checkMissing(x12);
    names = ldf names in base;
    r34 = dyn names(x12);
    check L54() else D14();
  L55():
    goto L8(r35);
  L59():
    goto L11(r38);
  L61():
    r39 = dyn stop("'x' must be a time series or an ar() fit");
    check L62() else D19();
  L64():
    x14 = force? x13;
    checkMissing(x14);
    c4 = `is.object`(x14);
    if c4 then L66() else L67(x14);
  L102():
    st `n.freq` = 500.0;
    goto L20();
  D6():
    deopt 18 [];
  D14():
    deopt 52 [r34];
  D19():
    deopt 67 [r39];
  L21(r60):
    st freq = r60;
    nser = ld nser;
    check L108() else D29();
  L39():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r15 = dyn frequency(p4);
    check L40() else D7();
  L54():
    goto L10(r34);
  L62():
    goto L13();
  L65(dx1):
    st series = dx1;
    x17 = ld x;
    check L69() else D21();
  L66():
    dr = tryDispatchBuiltin.1("$", x14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(dr);
  L67(x16):
    r41 = `$`(x16, <sym series>);
    goto L65(r41);
  L104():
    n_freq1 = ld `n.freq`;
    check L106() else D27();
  L105():
    r59 = dyn base10[, , `length.out`](0.0, 0.5, <sym n.freq>);
    goto L21(r59);
  D7():
    deopt 20 [r15];
  D21():
    deopt 74 [x17];
  D27():
    deopt 115 [n_freq1];
  D29():
    deopt 121 [nser];
  L40():
    st xfreq = r15;
    NCOL = ldf NCOL;
    check L41() else D8();
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L65(dx);
  L69():
    x18 = force? x17;
    checkMissing(x18);
    c5 = `is.object`(x18);
    if c5 then L71() else L72(x18);
  L106():
    n_freq2 = force? n_freq1;
    checkMissing(n_freq2);
    seq_int = ldf `seq.int` in base;
    r61 = dyn seq_int(0.0, 0.5, n_freq2);
    check L107() else D28();
  L108():
    nser1 = force? nser;
    checkMissing(nser1);
    r62 = `==`(nser1, 1.0);
    c12 = `as.logical`(r62);
    if c12 then L109() else L22();
  D8():
    deopt 23 [];
  D28():
    deopt 119 [r61];
  L22():
    _NotYetImplemented = ldf `.NotYetImplemented`;
    check L145() else D50();
  L26():
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  L41():
    p5 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r17 = dyn NCOL(p5);
    check L42() else D9();
  L70(dx3):
    st xfreq = dx3;
    sym7 = ldf `is.array`;
    base7 = ldf `is.array` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L71():
    dr2 = tryDispatchBuiltin.1("$", x18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(x20):
    r42 = `$`(x20, <sym frequency>);
    goto L70(r42);
  L107():
    goto L21(r61);
  L109():
    st phase = NULL;
    st coh = NULL;
    as_vector = ldf `as.vector`;
    check L110() else D30();
  D9():
    deopt 25 [r17];
  D30():
    deopt 130 [];
  D50():
    deopt 194 [];
  L14(r44):
    c7 = `as.logical`(r44);
    if c7 then L82() else L15();
  L27(r99):
    st `spg.out` = r99;
    l = ld `spg.out`;
    class__ = ldf `class<-`;
    check L160() else D63();
  L42():
    st nser = r17;
    ar = ldf ar;
    check L43() else D10();
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L70(dx2);
  L74():
    x21 = ld x;
    check L76() else D22();
  L75():
    r43 = dyn base7(<lang `$`(x, ar)>);
    goto L14(r43);
  L110():
    p11 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c13 = `is.object`(x34);
      if c13 then L1() else L2(x34);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x34);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x36):
      r63 = `$`(x36, <sym var.pred>);
      goto L0(r63);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r65 = dyn as_vector(p11);
    check L111() else D31();
  L145():
    r97 = dyn _NotYetImplemented();
    check L146() else D51();
  L147():
    freq6 = ld freq;
    check L149() else D52();
  L148():
    r98 = dyn base13[freq, spec, coh, phase, `n.used`, series, method](<lang `*`(freq, xfreq)>, <sym spec>, <sym coh>, <sym phase>, <lang nrow(x)>, <sym series>, <lang paste0("AR (", order, ") spectrum ")>);
    goto L27(r98);
  D10():
    deopt 28 [];
  D22():
    deopt 80 [x21];
  D31():
    deopt 132 [r65];
  D51():
    deopt 195 [r97];
  D52():
    deopt 198 [freq6];
  D63():
    deopt 233 ["spec", l, "spec"];
  L15():
    st nser = 1.0;
    goto L7();
  L43():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p7 = prom<V +>{
      sym2 = ldf `is.null`;
      base2 = ldf `is.null` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      order1 = ld order;
      order2 = force? order1;
      checkMissing(order2);
      c1 = `==`(order2, NULL);
      goto L0(c1);
    L2():
      r19 = dyn base2(<sym order>);
      goto L0(r19);
    };
    p8 = prom<V +>{
      order3 = ld order;
      order4 = force? order3;
      checkMissing(order4);
      return order4;
    };
    p9 = prom<V +>{
      na_action2 = ld `na.action`;
      na_action3 = force? na_action2;
      checkMissing(na_action3);
      return na_action3;
    };
    p10 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r25 = dyn ar[, , , `na.action`, method](p6, p7, p8, p9, p10);
    check L44() else D11();
  L76():
    x22 = force? x21;
    checkMissing(x22);
    c6 = `is.object`(x22);
    if c6 then L78() else L79(x22);
  L82():
    sym8 = ldf dim;
    base8 = ldf dim in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L111():
    st `var.p` = r65;
    order5 = ld order;
    check L112() else D32();
  L146():
    goto L26();
  L149():
    freq7 = force? freq6;
    checkMissing(freq7);
    xfreq4 = ld xfreq;
    check L150() else D53();
  L160():
    r106 = dyn class__(l, NULL, "spec");
    check L161() else D64();
  D11():
    deopt 36 [r25];
  D32():
    deopt 134 [order5];
  D53():
    deopt 199 [freq7, xfreq4];
  D64():
    deopt 235 ["spec", r106];
  L16(r48):
    c9 = `is.object`(r48);
    if c9 then L91() else L92(r48);
  L44():
    st x = r25;
    goto L7();
  L77(dx5):
    is_array = ldf `is.array` in base;
    r46 = dyn is_array(dx5);
    check L81() else D23();
  L78():
    dr4 = tryDispatchBuiltin.1("$", x22);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L80() else L79(dr4);
  L79(x24):
    r45 = `$`(x24, <sym ar>);
    goto L77(r45);
  L83():
    x25 = ld x;
    check L85() else D24();
  L84():
    r47 = dyn base8(<lang `$`(x, ar)>);
    goto L16(r47);
  L112():
    order6 = force? order5;
    checkMissing(order6);
    r66 = `>=`(order6, 1.0);
    c14 = `as.logical`(r66);
    if c14 then L113() else L23();
  L150():
    xfreq5 = force? xfreq4;
    checkMissing(xfreq5);
    r100 = `*`(freq7, xfreq5);
    spec = ld spec;
    check L151() else D54();
  L161():
    st `spg.out` = r106;
    plot1 = ld plot;
    check L162() else D65();
  D23():
    deopt 84 [r46];
  D24():
    deopt 87 [x25];
  D54():
    deopt 203 [spec];
  D65():
    deopt 237 [plot1];
  L17(dx9):
    st nser = dx9;
    goto L7();
  L23():
    sym11 = ldf `rep.int`;
    base11 = ldf `rep.int` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L135() else L136();
  L24(r89):
    st spec = r89;
    goto L26();
  L80():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L77(dx4);
  L81():
    goto L14(r46);
  L85():
    x26 = force? x25;
    checkMissing(x26);
    c8 = `is.object`(x26);
    if c8 then L87() else L88(x26);
  L91():
    dr8 = tryDispatchBuiltin.1("[", r48);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(dr8);
  L92(r52):
    __ = ldf `[` in base;
    r53 = dyn __(r52, 2);
    goto L17(r53);
  L113():
    outer = ldf outer;
    check L114() else D33();
  L151():
    spec1 = force? spec;
    checkMissing(spec1);
    coh = ld coh;
    check L152() else D55();
  L162():
    plot2 = force? plot1;
    checkMissing(plot2);
    c17 = `as.logical`(plot2);
    if c17 then L163() else L28();
  D33():
    deopt 140 [];
  D55():
    deopt 206 [coh];
  L28():
    spg_out4 = ld `spg.out`;
    check L171() else D70();
  L86(dx7):
    dim = ldf dim in base;
    r50 = dyn dim(dx7);
    check L90() else D25();
  L87():
    dr6 = tryDispatchBuiltin.1("$", x26);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88(dr6);
  L88(x28):
    r49 = `$`(x28, <sym ar>);
    goto L86(r49);
  L93():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx8);
  L114():
    p12 = prom<V +>{
      freq = ld freq;
      freq1 = force? freq;
      checkMissing(freq1);
      return freq1;
    };
    p13 = prom<V +>{
      order7 = ld order;
      order8 = force? order7;
      checkMissing(order8);
      r68 = `:`(1, order8);
      return r68;
    };
    p14 = prom<V +>{
      r70 = clos inner799576941;
      return r70;
    };
    r72 = dyn outer(p12, p13, p14);
    check L115() else D34();
  L135():
    var_p2 = ld `var.p`;
    check L137() else D45();
  L136():
    r90 = dyn base11(<lang `/`(var.p, xfreq)>, <lang length(freq)>);
    goto L24(r90);
  L152():
    coh1 = force? coh;
    checkMissing(coh1);
    phase = ld phase;
    check L153() else D56();
  L163():
    plot3 = ldf plot;
    check L164() else D66();
  D25():
    deopt 91 [r50];
  D34():
    deopt 144 [r72];
  D45():
    deopt 180 [var_p2];
  D56():
    deopt 209 [phase];
  D66():
    deopt 240 [];
  D70():
    deopt 252 [spg_out4];
  L89():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L86(dx6);
  L90():
    goto L16(r50);
  L115():
    x37 = ld x;
    check L116() else D35();
  L137():
    var_p3 = force? var_p2;
    checkMissing(var_p3);
    xfreq2 = ld xfreq;
    check L138() else D46();
  L153():
    phase1 = force? phase;
    checkMissing(phase1);
    nrow = ldf nrow;
    check L154() else D57();
  L164():
    p20 = prom<V +>{
      spg_out = ld `spg.out`;
      spg_out1 = force? spg_out;
      checkMissing(spg_out1);
      return spg_out1;
    };
    ddd1 = ld `...`;
    r108 = dyn plot3[, ci, `...`](p20, 0.0, ddd1);
    check L165() else D67();
  L171():
    spg_out5 = force? spg_out4;
    checkMissing(spg_out5);
    popenv;
    return spg_out5;
  D35():
    deopt 145 [x37];
  D46():
    deopt 181 [var_p3, xfreq2];
  D57():
    deopt 213 [];
  D67():
    deopt 245 [r108];
  L116():
    x38 = force? x37;
    checkMissing(x38);
    c15 = `is.object`(x38);
    if c15 then L118() else L119(x38);
  L138():
    xfreq3 = force? xfreq2;
    checkMissing(xfreq3);
    r91 = `/`(var_p3, xfreq3);
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L139() else L140();
  L154():
    p18 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      return x46;
    };
    r102 = dyn nrow(p18);
    check L155() else D58();
  L165():
    sym14 = ldf invisible;
    base14 = ldf invisible in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L166() else L167();
  D58():
    deopt 215 [r102];
  L25(r93):
    rep_int = ldf `rep.int` in base;
    r95 = dyn rep_int(r91, r93);
    check L143() else D49();
  L29(r110):
    popenv;
    return r110;
  L117(dx15):
    ___ = ldf `%*%` in base;
    r74 = dyn ___(r72, dx15);
    check L121() else D36();
  L118():
    dr14 = tryDispatchBuiltin.1("$", x38);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L120() else L119(dr14);
  L119(x40):
    r73 = `$`(x40, <sym ar>);
    goto L117(r73);
  L139():
    freq4 = ld freq;
    check L141() else D47();
  L140():
    r92 = dyn base12(<sym freq>);
    goto L25(r92);
  L155():
    series = ld series;
    check L156() else D59();
  L166():
    spg_out2 = ld `spg.out`;
    check L168() else D68();
  L167():
    r109 = dyn base14(<sym spg.out>);
    goto L29(r109);
  D36():
    deopt 149 [r74];
  D47():
    deopt 186 [freq4];
  D49():
    deopt 191 [r95];
  D59():
    deopt 217 [series];
  D68():
    deopt 248 [spg_out2];
  L120():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L117(dx14);
  L121():
    st cs = r74;
    outer1 = ldf outer;
    check L122() else D37();
  L141():
    freq5 = force? freq4;
    checkMissing(freq5);
    length = ldf length in base;
    r94 = dyn length(freq5);
    check L142() else D48();
  L143():
    goto L24(r95);
  L156():
    series1 = force? series;
    checkMissing(series1);
    paste0 = ldf paste0;
    check L157() else D60();
  L168():
    spg_out3 = force? spg_out2;
    checkMissing(spg_out3);
    invisible = ldf invisible in base;
    r111 = dyn invisible(spg_out3);
    check L169() else D69();
  D37():
    deopt 153 [];
  D48():
    deopt 189 [r94];
  D60():
    deopt 221 [];
  D69():
    deopt 251 [r111];
  L122():
    p15 = prom<V +>{
      freq2 = ld freq;
      freq3 = force? freq2;
      checkMissing(freq3);
      return freq3;
    };
    p16 = prom<V +>{
      order9 = ld order;
      order10 = force? order9;
      checkMissing(order10);
      r76 = `:`(1, order10);
      return r76;
    };
    p17 = prom<V +>{
      r78 = clos inner799576941;
      return r78;
    };
    r80 = dyn outer1(p15, p16, p17);
    check L123() else D38();
  L142():
    goto L25(r94);
  L157():
    p19 = prom<V +>{
      order11 = ld order;
      order12 = force? order11;
      checkMissing(order12);
      return order12;
    };
    r104 = dyn paste0("AR (", p19, ") spectrum ");
    check L158() else D61();
  L169():
    goto L29(r111);
  D38():
    deopt 157 [r80];
  D61():
    deopt 225 [r104];
  L123():
    x41 = ld x;
    check L124() else D39();
  L158():
    list = ldf list in base;
    r105 = dyn list(r100, spec1, coh1, phase1, r102, series1, r104);
    check L159() else D62();
  D39():
    deopt 158 [x41];
  D62():
    deopt 228 [r105];
  L124():
    x42 = force? x41;
    checkMissing(x42);
    c16 = `is.object`(x42);
    if c16 then L126() else L127(x42);
  L159():
    goto L27(r105);
  L125(dx17):
    ___1 = ldf `%*%` in base;
    r82 = dyn ___1(r80, dx17);
    check L129() else D40();
  L126():
    dr16 = tryDispatchBuiltin.1("$", x42);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L128() else L127(dr16);
  L127(x44):
    r81 = `$`(x44, <sym ar>);
    goto L125(r81);
  D40():
    deopt 162 [r82];
  L128():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L125(dx16);
  L129():
    st sn = r82;
    var_p = ld `var.p`;
    check L130() else D41();
  D41():
    deopt 164 [var_p];
  L130():
    var_p1 = force? var_p;
    checkMissing(var_p1);
    xfreq = ld xfreq;
    check L131() else D42();
  D42():
    deopt 165 [var_p1, xfreq];
  L131():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    cs = ld cs;
    check L132() else D43();
  D43():
    deopt 167 [var_p1, xfreq1, 1.0, cs];
  L132():
    cs1 = force? cs;
    checkMissing(cs1);
    r83 = `-`(1.0, cs1);
    r84 = `^`(r83, 2.0);
    sn = ld sn;
    check L133() else D44();
  D44():
    deopt 171 [var_p1, xfreq1, r84, sn];
  L133():
    sn1 = force? sn;
    checkMissing(sn1);
    r85 = `^`(sn1, 2.0);
    r86 = `+`(r84, r85);
    r87 = `*`(xfreq1, r86);
    r88 = `/`(var_p1, r87);
    goto L24(r88);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:V, reg y1:*, reg y2:V, reg r3:V, reg r4:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf cos;
    base = ldf cos in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `*`(`*`(`*`(2.0, pi), x), y)>);
    goto L0(r);
  D0():
    deopt 2 [6.283185307179586, x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `*`(6.283185307179586, x2);
    y1 = ld y;
    check L4() else D1();
  D1():
    deopt 4 [r2, y1];
  L4():
    y2 = force? y1;
    checkMissing(y2);
    r3 = `*`(r2, y2);
    r4 = cos(r3);
    goto L0(r4);
  }
}