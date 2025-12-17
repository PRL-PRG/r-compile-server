fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner826517612;
    st cov = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner826517612(x, y, use, method) {
  (reg x:*, reg y:*, reg use:*, reg method:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var use:*, reg use_isMissing:L, reg use_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg pmatch:cls, reg use1:*, reg use2:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg na_method:*, reg na_method1:V, reg is_na:cls, reg r12:V, reg c2:L, reg stop:cls, reg r13:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p3:p(V +), reg r16:V, reg is_data_frame:cls, reg y1:*, reg y2:V, reg p4:p(V +), reg r18:V, reg c3:L, reg as_matrix:cls, reg y3:*, reg y4:V, reg p5:p(V +), reg r20:V, reg is_data_frame1:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg r23:V, reg c4:L, reg as_matrix1:cls, reg x3:*, reg x4:V, reg p7:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r29:V, reg r30:V, reg c5:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg c10:L, reg r32:V, reg y5:*, reg y6:V, reg c11:V, reg c12:L, reg c13:V, reg c15:L, reg stop1:cls, reg r33:V, reg stopifnot:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg x7:*, reg x8:V, reg is_numeric:cls, reg r37:V, reg c16:L, reg c17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg c21:L, reg r39:V, reg x9:*, reg x10:V, reg c22:L, reg c23:L, reg c24:V, reg p8:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg x11:*, reg x12:V, reg is_atomic:cls, reg r43:V, reg p9:p(V +), reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg y7:*, reg y8:V, reg c26:V, reg r48:V, reg c27:L, reg stopifnot1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg y9:*, reg y10:V, reg is_numeric1:cls, reg r51:V, reg c28:L, reg c29:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg c33:L, reg r53:V, reg y11:*, reg y12:V, reg c34:L, reg c35:L, reg c36:V, reg p10:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r55:V, reg r56:V, reg y13:*, reg y14:V, reg is_atomic1:cls, reg r57:V, reg p11:p(V +), reg r59:V, reg r61:cls, reg method3:*, reg method4:V, reg r62:V, reg c38:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg C_cov:*, reg C_cov1:V, reg x13:*, reg x14:V, reg y15:*, reg y16:V, reg na_method2:*, reg na_method3:V, reg method5:*, reg method6:V, reg r65:V, reg vargs:dots, reg r66:V, reg _in_:cls, reg na_method4:*, reg na_method5:V, reg p12:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg c39:cls, reg r70:V, reg p13:p(V +), reg r72:V, reg c40:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg r74:V, reg y17:*, reg y18:V, reg c41:V, reg c42:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r75:V, reg r76:V, reg C_cov2:*, reg C_cov3:V, reg Rank:cls, reg na_omit:cls, reg x15:*, reg x16:V, reg p14:p(V +), reg r78:V, reg p15:p(V +), reg r80:V, reg na_method6:*, reg na_method7:V, reg method7:*, reg method8:V, reg r81:V, reg vargs1:dots, reg r82:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r83:V, reg r84:V, reg na_omit1:cls, reg cbind:cls, reg x17:*, reg x18:V, reg p16:p(V +), reg y19:*, reg y20:V, reg p17:p(V +), reg r87:V, reg p18:p(V +), reg r89:V, reg attr:cls, reg r90:V, reg r91:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r92:V, reg r93:V, reg C_cov4:*, reg C_cov5:V, reg Rank1:cls, reg dropNA:cls, reg x19:*, reg x20:V, reg p19:p(V +), reg nas:*, reg nas1:V, reg p20:p(V +), reg r96:V, reg p21:p(V +), reg r98:V, reg Rank2:cls, reg dropNA1:cls, reg y21:*, reg y22:V, reg p22:p(V +), reg nas2:*, reg nas3:V, reg p23:p(V +), reg r101:V, reg p24:p(V +), reg r103:V, reg na_method8:*, reg na_method9:V, reg method9:*, reg method10:V, reg r104:V, reg vargs2:dots, reg r105:V, reg na_method10:*, reg na_method11:V, reg r106:V, reg c43:L, reg Rank3:cls, reg x21:*, reg x22:V, reg p25:p(V +), reg r108:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r109:V, reg r110:V, reg y23:*, reg y24:V, reg c44:V, reg r111:V, reg c45:L, reg Rank4:cls, reg y25:*, reg y26:V, reg p26:p(V +), reg r113:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r115:V, reg r116:V, reg C_cov6:*, reg C_cov7:V, reg x23:*, reg x24:V, reg y27:*, reg y28:V, reg na_method12:*, reg na_method13:V, reg method11:*, reg method12:V, reg r117:V, reg vargs3:dots, reg r118:V, reg stop2:cls, reg r119:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    use_isMissing = missing.0(use);
    if use_isMissing then L1("everything") else L1(use);
  L1(use_orDefault):
    st use = use_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L2() else L3(method);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("pearson", "kendall", "spearman");
      goto L0(r2);
    L2():
      r = dyn base("pearson", "kendall", "spearman");
      goto L0(r);
    };
    goto L3(p);
  L3(method_orDefault):
    st method = method_orDefault;
    pmatch = ldf pmatch;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p1 = prom<V +>{
      use1 = ld use;
      use2 = force? use1;
      checkMissing(use2);
      return use2;
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1("all.obs", "complete.obs", "pairwise.complete.obs", "everything", "na.or.complete");
      goto L0(r7);
    L2():
      r5 = dyn base1("all.obs", "complete.obs", "pairwise.complete.obs", "everything", "na.or.complete");
      goto L0(r5);
    };
    r9 = dyn pmatch(p1, p2);
    check L33() else D1();
  D1():
    deopt 4 [r9];
  L33():
    st `na.method` = r9;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L4(r11):
    c2 = `as.logical`(r11);
    if c2 then L38() else L5();
  L34():
    na_method = ld `na.method`;
    check L36() else D2();
  L35():
    r10 = dyn base2(<sym na.method>);
    goto L4(r10);
  D2():
    deopt 8 [na_method];
  L5():
    goto L6();
  L6():
    match_arg = ldf `match.arg`;
    check L42() else D6();
  L36():
    na_method1 = force? na_method;
    checkMissing(na_method1);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(na_method1);
    check L37() else D3();
  L38():
    stop = ldf stop;
    check L39() else D4();
  D3():
    deopt 11 [r12];
  D4():
    deopt 13 [];
  D6():
    deopt 19 [];
  L37():
    goto L4(r12);
  L39():
    r13 = dyn stop("invalid 'use' argument");
    check L40() else D5();
  L42():
    p3 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r16 = dyn match_arg(p3);
    check L43() else D7();
  D5():
    deopt 15 [r13];
  D7():
    deopt 21 [r16];
  L40():
    goto L6();
  L43():
    st method = r16;
    is_data_frame = ldf `is.data.frame`;
    check L44() else D8();
  D8():
    deopt 24 [];
  L44():
    p4 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r18 = dyn is_data_frame(p4);
    check L45() else D9();
  D9():
    deopt 26 [r18];
  L45():
    c3 = `as.logical`(r18);
    if c3 then L46() else L7();
  L7():
    goto L8();
  L8():
    is_data_frame1 = ldf `is.data.frame`;
    check L50() else D12();
  L46():
    as_matrix = ldf `as.matrix`;
    check L47() else D10();
  D10():
    deopt 28 [];
  D12():
    deopt 35 [];
  L47():
    p5 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r20 = dyn as_matrix(p5);
    check L48() else D11();
  L50():
    p6 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r23 = dyn is_data_frame1(p6);
    check L51() else D13();
  D11():
    deopt 30 [r20];
  D13():
    deopt 37 [r23];
  L48():
    st y = r20;
    goto L8();
  L51():
    c4 = `as.logical`(r23);
    if c4 then L52() else L9();
  L9():
    goto L10();
  L10():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L52():
    as_matrix1 = ldf `as.matrix`;
    check L53() else D14();
  D14():
    deopt 39 [];
  L11(r28):
    r30 = `!`(r28);
    c5 = `as.logical`(r30);
    if c5 then L60() else L12(c5);
  L53():
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r25 = dyn as_matrix1(p7);
    check L54() else D15();
  L56():
    x5 = ld x;
    check L58() else D16();
  L57():
    r27 = dyn base3(<sym x>);
    goto L11(r27);
  D15():
    deopt 41 [r25];
  D16():
    deopt 47 [x5];
  L12(c7):
    c15 = `as.logical`(c7);
    if c15 then L65() else L14();
  L54():
    st x = r25;
    goto L10();
  L58():
    x6 = force? x5;
    checkMissing(x6);
    is_matrix = ldf `is.matrix` in base;
    r29 = dyn is_matrix(x6);
    check L59() else D17();
  L60():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  D17():
    deopt 50 [r29];
  L13(c10, r32):
    c12 = `as.logical`(r32);
    c13 = `&&`(c10, c12);
    goto L12(c13);
  L14():
    goto L15();
  L15():
    stopifnot = ldf stopifnot;
    check L69() else D21();
  L59():
    goto L11(r29);
  L61():
    y5 = ld y;
    check L63() else D18();
  L62():
    r31 = dyn base4(<sym y>);
    goto L13(c5, r31);
  L65():
    stop1 = ldf stop;
    check L66() else D19();
  D18():
    deopt 53 [c5, y5];
  D19():
    deopt 58 [];
  D21():
    deopt 64 [];
  L63():
    y6 = force? y5;
    checkMissing(y6);
    c11 = `==`(y6, NULL);
    goto L13(c5, c11);
  L66():
    r33 = dyn stop1("supply both 'x' and 'y' or a matrix-like 'x'");
    check L67() else D20();
  L69():
    p8 = prom<V +>{
      sym5 = ldf `is.numeric`;
      base5 = ldf `is.numeric` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r36):
      c16 = `as.logical`(r36);
      if c16 then L1(c16) else L5();
    L3():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      is_numeric = ldf `is.numeric` in base;
      r37 = dyn is_numeric(x8);
      goto L0(r37);
    L4():
      r35 = dyn base5(<sym x>);
      goto L0(r35);
    L1(c17):
      return c17;
    L5():
      sym6 = ldf `is.logical`;
      base6 = ldf `is.logical` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L6() else L7();
    L2(c21, r39):
      c23 = `as.logical`(r39);
      c24 = `||`(c21, c23);
      goto L1(c24);
    L6():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c22 = `is.logical`(x10);
      goto L2(c16, c22);
    L7():
      r38 = dyn base6(<sym x>);
      goto L2(c16, r38);
    };
    p9 = prom<V +>{
      sym7 = ldf `is.atomic`;
      base7 = ldf `is.atomic` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      is_atomic = ldf `is.atomic` in base;
      r43 = dyn is_atomic(x12);
      goto L0(r43);
    L2():
      r41 = dyn base7(<sym x>);
      goto L0(r41);
    };
    r45 = dyn stopifnot(p8, p9);
    check L70() else D22();
  D20():
    deopt 60 [r33];
  D22():
    deopt 67 [r45];
  L67():
    goto L15();
  L70():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L71() else L72();
  L16(r47):
    r48 = `!`(r47);
    c27 = `as.logical`(r48);
    if c27 then L74() else L17();
  L71():
    y7 = ld y;
    check L73() else D23();
  L72():
    r46 = dyn base8(<sym y>);
    goto L16(r46);
  D23():
    deopt 69 [y7];
  L17():
    goto L18();
  L18():
    r61 = clos inner883694641;
    st Rank = r61;
    method3 = ld method;
    check L78() else D26();
  L73():
    y8 = force? y7;
    checkMissing(y8);
    c26 = `==`(y8, NULL);
    goto L16(c26);
  L74():
    stopifnot1 = ldf stopifnot;
    check L75() else D24();
  D24():
    deopt 74 [];
  D26():
    deopt 83 [method3];
  L75():
    p10 = prom<V +>{
      sym9 = ldf `is.numeric`;
      base9 = ldf `is.numeric` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L3() else L4();
    L0(r50):
      c28 = `as.logical`(r50);
      if c28 then L1(c28) else L5();
    L3():
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      is_numeric1 = ldf `is.numeric` in base;
      r51 = dyn is_numeric1(y10);
      goto L0(r51);
    L4():
      r49 = dyn base9(<sym y>);
      goto L0(r49);
    L1(c29):
      return c29;
    L5():
      sym10 = ldf `is.logical`;
      base10 = ldf `is.logical` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L6() else L7();
    L2(c33, r53):
      c35 = `as.logical`(r53);
      c36 = `||`(c33, c35);
      goto L1(c36);
    L6():
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      c34 = `is.logical`(y12);
      goto L2(c28, c34);
    L7():
      r52 = dyn base10(<sym y>);
      goto L2(c28, r52);
    };
    p11 = prom<V +>{
      sym11 = ldf `is.atomic`;
      base11 = ldf `is.atomic` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      is_atomic1 = ldf `is.atomic` in base;
      r57 = dyn is_atomic1(y14);
      goto L0(r57);
    L2():
      r55 = dyn base11(<sym y>);
      goto L0(r55);
    };
    r59 = dyn stopifnot1(p10, p11);
    check L76() else D25();
  L78():
    method4 = force? method3;
    checkMissing(method4);
    r62 = `==`(method4, "pearson");
    c38 = `as.logical`(r62);
    if c38 then L79() else L19();
  D25():
    deopt 77 [r59];
  L19():
    _in_ = ldf `%in%`;
    check L88() else D32();
  L76():
    goto L18();
  L79():
    sym12 = ldf `.Call`;
    base12 = ldf `.Call` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L80() else L81();
  D32():
    deopt 98 [];
  L20(r64):
    popenv;
    return r64;
  L80():
    C_cov = ld C_cov;
    check L82() else D27();
  L81():
    r63 = dyn base12(<sym C_cov>, <sym x>, <sym y>, <sym na.method>, <lang `==`(method, "kendall")>);
    goto L20(r63);
  L88():
    p12 = prom<V +>{
      na_method4 = ld `na.method`;
      na_method5 = force? na_method4;
      checkMissing(na_method5);
      return na_method5;
    };
    p13 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      c39 = ldf c in base;
      r70 = dyn c39(2, 5);
      goto L0(r70);
    L2():
      r68 = dyn base13(2, 5);
      goto L0(r68);
    };
    r72 = dyn _in_(p12, p13);
    check L89() else D33();
  D27():
    deopt 88 [C_cov];
  D33():
    deopt 101 [r72];
  L82():
    C_cov1 = force? C_cov;
    checkMissing(C_cov1);
    x13 = ld x;
    check L83() else D28();
  L89():
    c40 = `as.logical`(r72);
    if c40 then L90() else L21();
  D28():
    deopt 89 [C_cov1, x13];
  L21():
    na_method10 = ld `na.method`;
    check L118() else D50();
  L83():
    x14 = force? x13;
    checkMissing(x14);
    y15 = ld y;
    check L84() else D29();
  L90():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L91() else L92();
  D29():
    deopt 90 [C_cov1, x14, y15];
  D50():
    deopt 145 [na_method10];
  L22(r74):
    c42 = `as.logical`(r74);
    if c42 then L94() else L23();
  L84():
    y16 = force? y15;
    checkMissing(y16);
    na_method2 = ld `na.method`;
    check L85() else D30();
  L91():
    y17 = ld y;
    check L93() else D34();
  L92():
    r73 = dyn base14(<sym y>);
    goto L22(r73);
  L118():
    na_method11 = force? na_method10;
    checkMissing(na_method11);
    r106 = `!=`(na_method11, 3);
    c43 = `as.logical`(r106);
    if c43 then L119() else L27();
  D30():
    deopt 91 [C_cov1, x14, y16, na_method2];
  D34():
    deopt 103 [y17];
  L23():
    sym16 = ldf attr;
    base16 = ldf attr in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L103() else L104();
  L27():
    stop2 = ldf stop;
    check L137() else D61();
  L85():
    na_method3 = force? na_method2;
    checkMissing(na_method3);
    method5 = ld method;
    check L86() else D31();
  L93():
    y18 = force? y17;
    checkMissing(y18);
    c41 = `==`(y18, NULL);
    goto L22(c41);
  L94():
    sym15 = ldf `.Call`;
    base15 = ldf `.Call` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L95() else L96();
  L119():
    Rank3 = ldf Rank;
    check L120() else D51();
  D31():
    deopt 92 [C_cov1, x14, y16, na_method3, method5];
  D51():
    deopt 150 [];
  D61():
    deopt 177 [];
  L24(r76):
    popenv;
    return r76;
  L25(r84):
    st nas = r84;
    r91 = clos inner2307688020;
    st dropNA = r91;
    sym17 = ldf `.Call`;
    base17 = ldf `.Call` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L108() else L109();
  L86():
    method6 = force? method5;
    checkMissing(method6);
    r65 = `==`(method6, "kendall");
    vargs = dots[x14, y16, na_method3, r65];
    r66 = `.Call`(C_cov1, vargs, <missing>);
    goto L20(r66);
  L95():
    C_cov2 = ld C_cov;
    check L97() else D35();
  L96():
    r75 = dyn base15(<sym C_cov>, <lang Rank(na.omit(x))>, NULL, <sym na.method>, <lang `==`(method, "kendall")>);
    goto L24(r75);
  L103():
    na_omit1 = ldf `na.omit`;
    check L105() else D40();
  L104():
    r83 = dyn base16(<lang na.omit(cbind(x, y))>, "na.action");
    goto L25(r83);
  L120():
    p25 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r108 = dyn Rank3(p25);
    check L121() else D52();
  L137():
    r119 = dyn stop2("cannot handle 'pairwise.complete.obs'");
    check L138() else D62();
  D35():
    deopt 107 [C_cov2];
  D40():
    deopt 121 [];
  D52():
    deopt 152 [r108];
  D62():
    deopt 179 [r119];
  L26(r93):
    popenv;
    return r93;
  L97():
    C_cov3 = force? C_cov2;
    checkMissing(C_cov3);
    Rank = ldf Rank;
    check L98() else D36();
  L105():
    p18 = prom<V +>{
      cbind = ldf cbind;
      p16 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      p17 = prom<V +>{
        y19 = ld y;
        y20 = force? y19;
        checkMissing(y20);
        return y20;
      };
      r87 = dyn cbind(p16, p17);
      return r87;
    };
    r89 = dyn na_omit1(p18);
    check L106() else D41();
  L108():
    C_cov4 = ld C_cov;
    check L110() else D43();
  L109():
    r92 = dyn base17(<sym C_cov>, <lang Rank(dropNA(x, nas))>, <lang Rank(dropNA(y, nas))>, <sym na.method>, <lang `==`(method, "kendall")>);
    goto L26(r92);
  L121():
    st x = r108;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L122() else L123();
  L138():
    popenv;
    return r119;
  D36():
    deopt 109 [C_cov3];
  D41():
    deopt 123 [r89];
  D43():
    deopt 132 [C_cov4];
  L28(r110):
    r111 = `!`(r110);
    c45 = `as.logical`(r111);
    if c45 then L125() else L29();
  L98():
    p15 = prom<V +>{
      na_omit = ldf `na.omit`;
      p14 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r78 = dyn na_omit(p14);
      return r78;
    };
    r80 = dyn Rank(p15);
    check L99() else D37();
  L106():
    attr = ldf attr in base;
    r90 = dyn attr(r89, "na.action");
    check L107() else D42();
  L110():
    C_cov5 = force? C_cov4;
    checkMissing(C_cov5);
    Rank1 = ldf Rank;
    check L111() else D44();
  L122():
    y23 = ld y;
    check L124() else D53();
  L123():
    r109 = dyn base18(<sym y>);
    goto L28(r109);
  D37():
    deopt 111 [C_cov3, r80];
  D42():
    deopt 126 [r90];
  D44():
    deopt 134 [C_cov5];
  D53():
    deopt 155 [y23];
  L29():
    goto L30();
  L30():
    sym19 = ldf `.Call`;
    base19 = ldf `.Call` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L129() else L130();
  L99():
    na_method6 = ld `na.method`;
    check L100() else D38();
  L107():
    goto L25(r90);
  L111():
    p21 = prom<V +>{
      dropNA = ldf dropNA;
      p19 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      p20 = prom<V +>{
        nas = ld nas;
        nas1 = force? nas;
        checkMissing(nas1);
        return nas1;
      };
      r96 = dyn dropNA(p19, p20);
      return r96;
    };
    r98 = dyn Rank1(p21);
    check L112() else D45();
  L124():
    y24 = force? y23;
    checkMissing(y24);
    c44 = `==`(y24, NULL);
    goto L28(c44);
  L125():
    Rank4 = ldf Rank;
    check L126() else D54();
  D38():
    deopt 112 [C_cov3, r80, NULL, na_method6];
  D45():
    deopt 136 [C_cov5, r98];
  D54():
    deopt 160 [];
  L31(r116):
    popenv;
    return r116;
  L100():
    na_method7 = force? na_method6;
    checkMissing(na_method7);
    method7 = ld method;
    check L101() else D39();
  L112():
    Rank2 = ldf Rank;
    check L113() else D46();
  L126():
    p26 = prom<V +>{
      y25 = ld y;
      y26 = force? y25;
      checkMissing(y26);
      return y26;
    };
    r113 = dyn Rank4(p26);
    check L127() else D55();
  L129():
    C_cov6 = ld C_cov;
    check L131() else D56();
  L130():
    r115 = dyn base19(<sym C_cov>, <sym x>, <sym y>, <sym na.method>, <lang `==`(method, "kendall")>);
    goto L31(r115);
  D39():
    deopt 113 [C_cov3, r80, NULL, na_method7, method7];
  D46():
    deopt 137 [C_cov5, r98];
  D55():
    deopt 162 [r113];
  D56():
    deopt 167 [C_cov6];
  L101():
    method8 = force? method7;
    checkMissing(method8);
    r81 = `==`(method8, "kendall");
    vargs1 = dots[r80, NULL, na_method7, r81];
    r82 = `.Call`(C_cov3, vargs1, <missing>);
    goto L24(r82);
  L113():
    p24 = prom<V +>{
      dropNA1 = ldf dropNA;
      p22 = prom<V +>{
        y21 = ld y;
        y22 = force? y21;
        checkMissing(y22);
        return y22;
      };
      p23 = prom<V +>{
        nas2 = ld nas;
        nas3 = force? nas2;
        checkMissing(nas3);
        return nas3;
      };
      r101 = dyn dropNA1(p22, p23);
      return r101;
    };
    r103 = dyn Rank2(p24);
    check L114() else D47();
  L127():
    st y = r113;
    goto L30();
  L131():
    C_cov7 = force? C_cov6;
    checkMissing(C_cov7);
    x23 = ld x;
    check L132() else D57();
  D47():
    deopt 139 [C_cov5, r98, r103];
  D57():
    deopt 168 [C_cov7, x23];
  L114():
    na_method8 = ld `na.method`;
    check L115() else D48();
  L132():
    x24 = force? x23;
    checkMissing(x24);
    y27 = ld y;
    check L133() else D58();
  D48():
    deopt 139 [C_cov5, r98, r103, na_method8];
  D58():
    deopt 169 [C_cov7, x24, y27];
  L115():
    na_method9 = force? na_method8;
    checkMissing(na_method9);
    method9 = ld method;
    check L116() else D49();
  L133():
    y28 = force? y27;
    checkMissing(y28);
    na_method12 = ld `na.method`;
    check L134() else D59();
  D49():
    deopt 140 [C_cov5, r98, r103, na_method9, method9];
  D59():
    deopt 170 [C_cov7, x24, y28, na_method12];
  L116():
    method10 = force? method9;
    checkMissing(method10);
    r104 = `==`(method10, "kendall");
    vargs2 = dots[r98, r103, na_method9, r104];
    r105 = `.Call`(C_cov5, vargs2, <missing>);
    goto L26(r105);
  L134():
    na_method13 = force? na_method12;
    checkMissing(na_method13);
    method11 = ld method;
    check L135() else D60();
  D60():
    deopt 171 [C_cov7, x24, y28, na_method13, method11];
  L135():
    method12 = force? method11;
    checkMissing(method12);
    r117 = `==`(method12, "kendall");
    vargs3 = dots[x24, y28, na_method13, r117];
    r118 = `.Call`(C_cov7, vargs3, <missing>);
    goto L31(r118);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg u1:*, reg u2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg u3:*, reg u4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg u5:*, reg u6:V, reg is_matrix:cls, reg r6:V, reg c1:L, reg nrow:cls, reg u7:*, reg u8:V, reg p:p(V +), reg r8:V, reg r9:V, reg c2:L, reg apply:cls, reg u9:*, reg u10:V, reg p1:p(V +), reg rank:*, reg rank1:V, reg p2:p(V +), reg r12:V, reg row:cls, reg u11:*, reg u12:V, reg p3:p(V +), reg r14:V, reg rank2:cls, reg u13:*, reg u14:V, reg p4:p(V +), reg r16:V |
    mkenv;
    st u = u;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    u1 = ld u;
    check L7() else D0();
  L6():
    r = dyn base(<sym u>);
    goto L0(r);
  D0():
    deopt 2 [u1];
  L1():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    u2 = force? u1;
    checkMissing(u2);
    length = ldf length in base;
    r2 = dyn length(u2);
    check L8() else D1();
  L9():
    u3 = ld u;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [u3];
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L16() else L3();
  L8():
    goto L0(r2);
  L10():
    u4 = force? u3;
    checkMissing(u4);
    popenv;
    return u4;
  L12():
    u5 = ld u;
    check L14() else D3();
  L13():
    r4 = dyn base1(<sym u>);
    goto L2(r4);
  D3():
    deopt 12 [u5];
  L3():
    rank2 = ldf rank;
    check L26() else D11();
  L14():
    u6 = force? u5;
    checkMissing(u6);
    is_matrix = ldf `is.matrix` in base;
    r6 = dyn is_matrix(u6);
    check L15() else D4();
  L16():
    nrow = ldf nrow;
    check L17() else D5();
  D4():
    deopt 15 [r6];
  D5():
    deopt 17 [];
  D11():
    deopt 35 [];
  L15():
    goto L2(r6);
  L17():
    p = prom<V +>{
      u7 = ld u;
      u8 = force? u7;
      checkMissing(u8);
      return u8;
    };
    r8 = dyn nrow(p);
    check L18() else D6();
  L26():
    p4 = prom<V +>{
      u13 = ld u;
      u14 = force? u13;
      checkMissing(u14);
      return u14;
    };
    r16 = dyn rank2[, `na.last`](p4, "keep");
    check L27() else D12();
  D6():
    deopt 19 [r8];
  D12():
    deopt 39 [r16];
  L18():
    r9 = `>`(r8, 1);
    c2 = `as.logical`(r9);
    if c2 then L19() else L4();
  L27():
    popenv;
    return r16;
  L4():
    row = ldf row;
    check L23() else D9();
  L19():
    apply = ldf apply;
    check L20() else D7();
  D7():
    deopt 23 [];
  D9():
    deopt 31 [];
  L20():
    p1 = prom<V +>{
      u9 = ld u;
      u10 = force? u9;
      checkMissing(u10);
      return u10;
    };
    p2 = prom<V +>{
      rank = ld rank;
      rank1 = force? rank;
      checkMissing(rank1);
      return rank1;
    };
    r12 = dyn apply[, , , `na.last`](p1, 2, p2, "keep");
    check L21() else D8();
  L23():
    p3 = prom<V +>{
      u11 = ld u;
      u12 = force? u11;
      checkMissing(u12);
      return u12;
    };
    r14 = dyn row(p3);
    check L24() else D10();
  D8():
    deopt 29 [r12];
  D10():
    deopt 33 [r14];
  L21():
    popenv;
    return r12;
  L24():
    popenv;
    return r14;
  }
}
fun inner2307688020(x, nas) {
  (reg x:*, reg nas:*) -+> V { var x:*, var nas:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nas1:*, reg nas2:V, reg length:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r5:V, reg c1:L, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nas3:*, reg nas4:V, reg r6:V, reg __:cls, reg r7:V, reg x7:*, reg x8:V, reg c3:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nas5:*, reg nas6:V, reg r8:V, reg __1:cls, reg r9:V, reg x11:*, reg x12:V |
    mkenv;
    st x = x;
    st nas = nas;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1();
  L6():
    nas1 = ld nas;
    check L8() else D0();
  L7():
    r = dyn base(<sym nas>);
    goto L0(r);
  D0():
    deopt 2 [nas1];
  L1():
    x11 = ld x;
    check L28() else D8();
  L8():
    nas2 = force? nas1;
    checkMissing(nas2);
    length = ldf length in base;
    r2 = dyn length(nas2);
    check L9() else D1();
  L10():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D1():
    deopt 5 [r2];
  D8():
    deopt 28 [x11];
  L2(r4):
    c1 = `as.logical`(r4);
    if c1 then L15() else L3();
  L9():
    goto L0(r2);
  L11():
    x1 = ld x;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L28():
    x12 = force? x11;
    checkMissing(x12);
    popenv;
    return x12;
  D2():
    deopt 8 [x1];
  L3():
    x7 = ld x;
    check L22() else D6();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r5 = dyn is_matrix(x2);
    check L14() else D3();
  L15():
    x3 = ld x;
    check L16() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 12 [x3];
  D6():
    deopt 22 [x7];
  L14():
    goto L2(r5);
  L16():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L17() else L18(x4);
  L22():
    x8 = force? x7;
    checkMissing(x8);
    c3 = `is.object`(x8);
    if c3 then L23() else L24(x8);
  L4(dx1):
    popenv;
    return dx1;
  L5(dx3):
    popenv;
    return dx3;
  L17():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(x6):
    nas3 = ld nas;
    check L20() else D5();
  L23():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(x10):
    nas5 = ld nas;
    check L26() else D7();
  D5():
    deopt 14 [x6, nas3];
  D7():
    deopt 24 [x10, nas5];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L20():
    nas4 = force? nas3;
    checkMissing(nas4);
    r6 = `-`(<missing>, nas4);
    __ = ldf `[` in base;
    r7 = dyn __(x4, r6, <missing>, FALSE);
    goto L4(r7);
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L26():
    nas6 = force? nas5;
    checkMissing(nas6);
    r8 = `-`(<missing>, nas6);
    __1 = ldf `[` in base;
    r9 = dyn __1(x10, r8);
    goto L5(r9);
  }
}