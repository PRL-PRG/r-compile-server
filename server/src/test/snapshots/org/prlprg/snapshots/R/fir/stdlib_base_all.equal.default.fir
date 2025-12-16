fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner154393012;
    st `all.equal.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner154393012(target, current, `...`, `check.class`) {
  (reg target:*, reg current:*, reg ddd:dots, reg check_class:*) -+> V { var target:*, var current:*, var `...`:dots?, var `check.class`:*, reg check_class_isMissing:L, reg check_class_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg target1:*, reg target2:V, reg is_language:cls, reg r2:V, reg c:L, reg all_equal_language:cls, reg target3:*, reg target4:V, reg p:p(V +), reg current1:*, reg current2:V, reg p1:p(V +), reg ddd1:dots?, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg target5:*, reg target6:V, reg is_function:cls, reg r10:V, reg c1:L, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg target7:*, reg target8:V, reg _class2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg c2:L, reg _Deprecated:cls, reg r16:V, reg all_equal_function:cls, reg target9:*, reg target10:V, reg p3:p(V +), reg current3:*, reg current4:V, reg p4:p(V +), reg ddd2:dots?, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg target11:*, reg target12:V, reg is_environment:cls, reg r25:V, reg c3:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg c8:L, reg r27:V, reg current5:*, reg current6:V, reg is_environment1:cls, reg r28:V, reg c9:L, reg c10:V, reg c12:L, reg all_equal_environment:cls, reg target13:*, reg target14:V, reg p5:p(V +), reg current7:*, reg current8:V, reg p6:p(V +), reg ddd3:dots?, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg target15:*, reg target16:V, reg is_recursive:cls, reg r36:V, reg c13:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg target17:*, reg target18:V, reg typeof:cls, reg r39:V, reg r40:V, reg c14:L, reg c16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg c19:L, reg r42:V, reg current9:*, reg current10:V, reg typeof1:cls, reg r43:V, reg r44:V, reg c20:L, reg c21:V, reg c23:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg target19:*, reg target20:V, reg current11:*, reg current12:V, reg identical:cls, reg r47:V, reg c24:L, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg target21:*, reg target22:V, reg length:cls, reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg r56:V, reg current13:*, reg current14:V, reg length1:cls, reg r57:V, reg r58:V, reg c25:L, reg paste0:cls, reg lt:*, reg lt1:V, reg p7:p(V +), reg lc:*, reg lc1:V, reg p8:p(V +), reg r61:V, reg xor:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r62:V, reg r63:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg r65:V, reg target23:*, reg target24:V, reg names:cls, reg r66:V, reg c26:V, reg p9:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r70:V, reg r71:V, reg current15:*, reg current16:V, reg names1:cls, reg r72:V, reg c27:V, reg p10:p(V +), reg r74:V, reg c28:L, reg paste1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r75:V, reg r76:V, reg nt:*, reg nt1:V, reg length2:cls, reg r77:V, reg c29:L, reg p11:p(V +), reg r79:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r80:V, reg r81:V, reg nt2:*, reg nt3:V, reg c30:V, reg r82:V, reg c31:L, reg sort:cls, reg nt4:*, reg nt5:V, reg p12:p(V +), reg r84:V, reg sort1:cls, reg nc:*, reg nc1:V, reg p13:p(V +), reg r86:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r87:V, reg r88:V, reg nt6:*, reg nt7:V, reg nc2:*, reg nc3:V, reg identical1:cls, reg r89:V, reg c32:L, reg r90:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r91:V, reg all_equal_character:cls, reg nt8:*, reg nt9:V, reg p14:p(V +), reg nc4:*, reg nc5:V, reg p15:p(V +), reg ddd4:dots?, reg r94:V, reg c33:cls, reg r95:V, reg r96:V, reg all_equal_list:cls, reg target25:*, reg target26:V, reg p16:p(V +), reg current17:*, reg current18:V, reg p17:p(V +), reg ddd5:dots?, reg r99:V, reg mode:cls, reg target27:*, reg target28:V, reg p18:p(V +), reg r103:V, reg c34:L, reg c35:L, reg c36:L, reg c37:L, reg c38:L, reg c39:L, reg c40:L, reg c41:L, reg c42:L, reg c43:L, reg i_ddd:dots, reg i:V, reg c44:L, reg c45:L, reg c46:L, reg c47:L, reg c48:L, reg c49:L, reg c50:L, reg c51:L, reg stop:cls, reg r105:V, reg all_equal_numeric:cls, reg target29:*, reg target30:V, reg p19:p(V +), reg current19:*, reg current20:V, reg p20:p(V +), reg ddd6:dots?, reg r108:V, reg all_equal_character1:cls, reg target31:*, reg target32:V, reg p21:p(V +), reg current21:*, reg current22:V, reg p22:p(V +), reg ddd7:dots?, reg r111:V, reg all_equal_raw:cls, reg target33:*, reg target34:V, reg p23:p(V +), reg current23:*, reg current24:V, reg p24:p(V +), reg ddd8:dots?, reg r114:V, reg attr_all_equal:cls, reg target35:*, reg target36:V, reg p25:p(V +), reg current25:*, reg current26:V, reg p26:p(V +), reg ddd9:dots?, reg r117:V, reg check_class1:*, reg check_class2:V, reg c52:L, reg c54:V, reg data_class:cls, reg target37:*, reg target38:V, reg p27:p(V +), reg r119:V, reg data_class1:cls, reg current27:*, reg current28:V, reg p28:p(V +), reg r121:V, reg r122:V, reg c55:L, reg c56:V, reg c58:L, reg gettextf:cls, reg data_class2:cls, reg target39:*, reg target40:V, reg p29:p(V +), reg r124:V, reg p30:p(V +), reg data_class3:cls, reg current29:*, reg current30:V, reg p31:p(V +), reg r127:V, reg p32:p(V +), reg r129:V, reg r130:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r131:V, reg r132:V, reg msg:*, reg msg1:V, reg c59:V, reg c60:L, reg msg2:*, reg msg3:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    check_class_isMissing = missing.0(check_class);
    if check_class_isMissing then L0(TRUE) else L0(check_class);
  L0(check_class_orDefault):
    st `check.class` = check_class_orDefault;
    sym = ldf `is.language`;
    base = ldf `is.language` in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L1(r1):
    c = `as.logical`(r1);
    if c then L51() else L2();
  L47():
    target1 = ld target;
    check L49() else D0();
  L48():
    r = dyn base(<sym target>);
    goto L1(r);
  D0():
    deopt 2 [target1];
  L2():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L49():
    target2 = force? target1;
    checkMissing(target2);
    is_language = ldf `is.language` in base;
    r2 = dyn is_language(target2);
    check L50() else D1();
  L51():
    all_equal_language = ldf `all.equal.language`;
    check L52() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L4(r9):
    c1 = `as.logical`(r9);
    if c1 then L60() else L5();
  L50():
    goto L1(r2);
  L52():
    p = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    p1 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    ddd1 = ld `...`;
    r5 = dyn all_equal_language[, , `...`](p, p1, ddd1);
    check L53() else D3();
  L56():
    target5 = ld target;
    check L58() else D4();
  L57():
    r8 = dyn base1(<sym target>);
    goto L4(r8);
  D3():
    deopt 11 [r5];
  D4():
    deopt 17 [target5];
  L5():
    sym3 = ldf `is.environment`;
    base3 = ldf `is.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L53():
    popenv;
    return r5;
  L58():
    target6 = force? target5;
    checkMissing(target6);
    is_function = ldf `is.function` in base;
    r10 = dyn is_function(target6);
    check L59() else D5();
  L60():
    _in_ = ldf `%in%`;
    check L61() else D6();
  D5():
    deopt 20 [r10];
  D6():
    deopt 22 [];
  L9(r24):
    c3 = `as.logical`(r24);
    if c3 then L10(c3) else L75();
  L59():
    goto L4(r10);
  L61():
    p2 = prom<V +>{
      sym2 = ldf `.class2`;
      base2 = ldf `.class2` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      target7 = ld target;
      target8 = force? target7;
      checkMissing(target8);
      _class2 = ldf `.class2` in base;
      r13 = dyn _class2(target8);
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym target>);
      goto L0(r11);
    };
    r15 = dyn _in_("function", p2);
    check L62() else D7();
  L71():
    target11 = ld target;
    check L73() else D12();
  L72():
    r23 = dyn base3(<sym target>);
    goto L9(r23);
  D7():
    deopt 25 [r15];
  D12():
    deopt 45 [target11];
  L10(c4):
    c12 = `as.logical`(c4);
    if c12 then L81() else L12();
  L62():
    c2 = `as.logical`(r15);
    if c2 then L63() else L6();
  L73():
    target12 = force? target11;
    checkMissing(target12);
    is_environment = ldf `is.environment` in base;
    r25 = dyn is_environment(target12);
    check L74() else D13();
  L75():
    sym4 = ldf `is.environment`;
    base4 = ldf `is.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  D13():
    deopt 48 [r25];
  L6():
    goto L7();
  L7():
    all_equal_function = ldf `all.equal.function`;
    check L67() else D10();
  L11(c8, r27):
    c9 = `as.logical`(r27);
    c10 = `||`(c8, c9);
    goto L10(c10);
  L12():
    sym5 = ldf `is.recursive`;
    base5 = ldf `is.recursive` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L86() else L87();
  L63():
    _Deprecated = ldf `.Deprecated`;
    check L64() else D8();
  L74():
    goto L9(r25);
  L76():
    current5 = ld current;
    check L78() else D14();
  L77():
    r26 = dyn base4(<sym current>);
    goto L11(c3, r26);
  L81():
    all_equal_environment = ldf `all.equal.environment`;
    check L82() else D16();
  D8():
    deopt 27 [];
  D10():
    deopt 35 [];
  D14():
    deopt 51 [c3, current5];
  D16():
    deopt 57 [];
  L14(r35):
    c13 = `as.logical`(r35);
    if c13 then L90() else L15();
  L64():
    r16 = dyn _Deprecated[, old]("all.equal(*)", "all.equal.default(<function>)");
    check L65() else D9();
  L67():
    p3 = prom<V +>{
      target9 = ld target;
      target10 = force? target9;
      checkMissing(target10);
      return target10;
    };
    p4 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    ddd2 = ld `...`;
    r20 = dyn all_equal_function[, , `...`](p3, p4, ddd2);
    check L68() else D11();
  L78():
    current6 = force? current5;
    checkMissing(current6);
    is_environment1 = ldf `is.environment` in base;
    r28 = dyn is_environment1(current6);
    check L79() else D15();
  L82():
    p5 = prom<V +>{
      target13 = ld target;
      target14 = force? target13;
      checkMissing(target14);
      return target14;
    };
    p6 = prom<V +>{
      current7 = ld current;
      current8 = force? current7;
      checkMissing(current8);
      return current8;
    };
    ddd3 = ld `...`;
    r31 = dyn all_equal_environment[, , `...`](p5, p6, ddd3);
    check L83() else D17();
  L86():
    target15 = ld target;
    check L88() else D18();
  L87():
    r34 = dyn base5(<sym target>);
    goto L14(r34);
  D9():
    deopt 31 [r16];
  D11():
    deopt 39 [r20];
  D15():
    deopt 54 [c3, r28];
  D17():
    deopt 61 [r31];
  D18():
    deopt 67 [target15];
  L15():
    mode = ldf mode;
    check L153() else D50();
  L65():
    goto L7();
  L68():
    popenv;
    return r20;
  L79():
    goto L11(c3, r28);
  L83():
    popenv;
    return r31;
  L88():
    target16 = force? target15;
    checkMissing(target16);
    is_recursive = ldf `is.recursive` in base;
    r36 = dyn is_recursive(target16);
    check L89() else D19();
  L90():
    sym6 = ldf typeof;
    base6 = ldf typeof in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  D19():
    deopt 70 [r36];
  D50():
    deopt 192 [];
  L16(r38):
    r40 = `==`(r38, "...");
    c14 = `as.logical`(r40);
    if c14 then L95() else L17(c14);
  L89():
    goto L14(r36);
  L91():
    target17 = ld target;
    check L93() else D20();
  L92():
    r37 = dyn base6(<sym target>);
    goto L16(r37);
  L153():
    p18 = prom<V +>{
      target27 = ld target;
      target28 = force? target27;
      checkMissing(target28);
      return target28;
    };
    r103 = dyn mode(p18);
    check L154() else D51();
  D20():
    deopt 73 [target17];
  D51():
    deopt 194 [r103];
  L17(c16):
    c23 = `as.logical`(c16);
    if c23 then L101() else L19();
  L93():
    target18 = force? target17;
    checkMissing(target18);
    typeof = ldf typeof in base;
    r39 = dyn typeof(target18);
    check L94() else D21();
  L95():
    sym7 = ldf typeof;
    base7 = ldf typeof in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L96() else L97();
  L154():
    c34 = `is.vector`(r103, "any");
    if c34 then L155() else L156();
  D21():
    deopt 76 [r39];
  L18(c19, r42):
    r44 = `==`(r42, "...");
    c20 = `as.logical`(r44);
    c21 = `&&`(c19, c20);
    goto L17(c21);
  L19():
    all_equal_list = ldf `all.equal.list`;
    check L149() else D48();
  L32(r96):
    popenv;
    return r96;
  L94():
    goto L16(r39);
  L96():
    current9 = ld current;
    check L98() else D22();
  L97():
    r41 = dyn base7(<sym current>);
    goto L18(c14, r41);
  L101():
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L155():
    c35 = inherits(r103, "factor", FALSE);
    if c35 then L157() else L158();
  L156():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D22():
    deopt 81 [c14, current9];
  D48():
    deopt 183 [];
  L20(r46):
    c24 = `as.logical`(r46);
    if c24 then L107() else L21();
  L98():
    current10 = force? current9;
    checkMissing(current10);
    typeof1 = ldf typeof in base;
    r43 = dyn typeof1(current10);
    check L99() else D23();
  L102():
    target19 = ld target;
    check L104() else D24();
  L103():
    r45 = dyn base8(<sym target>, <sym current>);
    goto L20(r45);
  L149():
    p16 = prom<V +>{
      target25 = ld target;
      target26 = force? target25;
      checkMissing(target26);
      return target26;
    };
    p17 = prom<V +>{
      current17 = ld current;
      current18 = force? current17;
      checkMissing(current18);
      return current18;
    };
    ddd5 = ld `...`;
    r99 = dyn all_equal_list[, , `...`](p16, p17, ddd5);
    check L150() else D49();
  L157():
    c36 = `is.character`(r103);
    if c36 then L159() else L160();
  L158():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L157();
  D23():
    deopt 84 [c14, r43];
  D24():
    deopt 90 [target19];
  D49():
    deopt 187 [r99];
  L21():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L22(r48):
    goto L32(r48);
  L34():
    all_equal_numeric = ldf `all.equal.numeric`;
    check L178() else D53();
  L35():
    all_equal_character1 = ldf `all.equal.character`;
    check L181() else D55();
  L36():
    all_equal_raw = ldf `all.equal.raw`;
    check L184() else D57();
  L37():
    attr_all_equal = ldf `attr.all.equal`;
    check L187() else D59();
  L38():
    check_class1 = ld `check.class`;
    check L190() else D61();
  L41(r105):
    st msg = r105;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L202() else L203();
  L99():
    goto L18(c14, r43);
  L104():
    target20 = force? target19;
    checkMissing(target20);
    current11 = ld current;
    check L105() else D25();
  L107():
    goto L22(TRUE);
  L150():
    goto L32(r99);
  L159():
    c37 = `==`.6(r103, "integer");
    if c37 then L34() else L161();
  L160():
    i_ddd = dots[r103];
    i = `as.integer`(i_ddd);
    c44 = `==`.5(i, 1);
    if c44 then L39() else L168();
  D25():
    deopt 92 [current11];
  D53():
    deopt 201 [];
  D55():
    deopt 207 [];
  D57():
    deopt 213 [];
  D59():
    deopt 219 [];
  D61():
    deopt 224 [check_class1];
  L23(r50):
    st lt = r50;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  L39():
    stop = ldf stop;
    check L176() else D52();
  L40():
    goto L41(NULL);
  L45(r132):
    c60 = `as.logical`(r132);
    if c60 then L205() else L46();
  L105():
    current12 = force? current11;
    checkMissing(current12);
    identical = ldf identical in base;
    r47 = dyn identical(target20, current12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L106() else D26();
  L109():
    target21 = ld target;
    check L111() else D27();
  L110():
    r49 = dyn base9(<sym target>);
    goto L23(r49);
  L161():
    c38 = `==`.6(r103, "complex");
    if c38 then L34() else L162();
  L168():
    c45 = `==`.5(i, 2);
    if c45 then L39() else L169();
  L178():
    p19 = prom<V +>{
      target29 = ld target;
      target30 = force? target29;
      checkMissing(target30);
      return target30;
    };
    p20 = prom<V +>{
      current19 = ld current;
      current20 = force? current19;
      checkMissing(current20);
      return current20;
    };
    ddd6 = ld `...`;
    r108 = dyn all_equal_numeric[, , `...`](p19, p20, ddd6);
    check L179() else D54();
  L181():
    p21 = prom<V +>{
      target31 = ld target;
      target32 = force? target31;
      checkMissing(target32);
      return target32;
    };
    p22 = prom<V +>{
      current21 = ld current;
      current22 = force? current21;
      checkMissing(current22);
      return current22;
    };
    ddd7 = ld `...`;
    r111 = dyn all_equal_character1[, , `...`](p21, p22, ddd7);
    check L182() else D56();
  L184():
    p23 = prom<V +>{
      target33 = ld target;
      target34 = force? target33;
      checkMissing(target34);
      return target34;
    };
    p24 = prom<V +>{
      current23 = ld current;
      current24 = force? current23;
      checkMissing(current24);
      return current24;
    };
    ddd8 = ld `...`;
    r114 = dyn all_equal_raw[, , `...`](p23, p24, ddd8);
    check L185() else D58();
  L187():
    p25 = prom<V +>{
      target35 = ld target;
      target36 = force? target35;
      checkMissing(target36);
      return target36;
    };
    p26 = prom<V +>{
      current25 = ld current;
      current26 = force? current25;
      checkMissing(current26);
      return current26;
    };
    ddd9 = ld `...`;
    r117 = dyn attr_all_equal[, , `...`](p25, p26, ddd9);
    check L188() else D60();
  L190():
    check_class2 = force? check_class1;
    checkMissing(check_class2);
    c52 = `as.logical`(check_class2);
    if c52 then L191() else L42(c52);
  L202():
    msg = ld msg;
    check L204() else D68();
  L203():
    r131 = dyn base19(<sym msg>);
    goto L45(r131);
  D26():
    deopt 102 [r47];
  D27():
    deopt 107 [target21];
  D52():
    deopt 196 [];
  D54():
    deopt 205 [r108];
  D56():
    deopt 211 [r111];
  D58():
    deopt 217 [r114];
  D60():
    deopt 223 [r117];
  D68():
    deopt 246 [msg];
  L24(r55, r56):
    st lc = r56;
    r58 = `!=`(r55, r56);
    c25 = `as.logical`(r58);
    if c25 then L117() else L25();
  L42(c54):
    c58 = `as.logical`(c54);
    if c58 then L197() else L43();
  L46():
    msg2 = ld msg;
    check L207() else D69();
  L106():
    goto L20(r47);
  L111():
    target22 = force? target21;
    checkMissing(target22);
    length = ldf length in base;
    r51 = dyn length(target22);
    check L112() else D28();
  L113():
    current13 = ld current;
    check L115() else D29();
  L114():
    r54 = dyn base10(<sym current>);
    goto L24(r50, r54);
  L162():
    c39 = `==`.6(r103, "numeric");
    if c39 then L34() else L163();
  L169():
    c46 = `==`.5(i, 3);
    if c46 then L34() else L170();
  L176():
    dyn stop("empty alternative in numeric switch");
    goto L40();
  L179():
    goto L41(r108);
  L182():
    goto L41(r111);
  L185():
    goto L41(r114);
  L188():
    goto L41(r117);
  L191():
    data_class = ldf `data.class`;
    check L192() else D62();
  L204():
    msg1 = force? msg;
    checkMissing(msg1);
    c59 = `==`(msg1, NULL);
    goto L45(c59);
  L205():
    popenv;
    return TRUE;
  D28():
    deopt 110 [r51];
  D29():
    deopt 113 [r50, current13];
  D62():
    deopt 227 [c52];
  D69():
    deopt 251 [msg2];
  L25():
    xor = ldf xor;
    check L121() else D33();
  L43():
    goto L44(NULL);
  L44(r130):
    goto L41(r130);
  L112():
    goto L23(r51);
  L115():
    current14 = force? current13;
    checkMissing(current14);
    length1 = ldf length in base;
    r57 = dyn length1(current14);
    check L116() else D30();
  L117():
    paste0 = ldf paste0;
    check L118() else D31();
  L163():
    c40 = `==`.6(r103, "character");
    if c40 then L35() else L164();
  L170():
    c47 = `==`.5(i, 4);
    if c47 then L35() else L171();
  L192():
    p27 = prom<V +>{
      target37 = ld target;
      target38 = force? target37;
      checkMissing(target38);
      return target38;
    };
    r119 = dyn data_class(p27);
    check L193() else D63();
  L197():
    gettextf = ldf gettextf;
    check L198() else D66();
  L207():
    msg3 = force? msg2;
    checkMissing(msg3);
    popenv;
    return msg3;
  D30():
    deopt 116 [r50, r57];
  D31():
    deopt 120 [];
  D33():
    deopt 128 [];
  D63():
    deopt 229 [c52, r119];
  D66():
    deopt 236 [];
  L116():
    goto L24(r50, r57);
  L118():
    p7 = prom<V +>{
      lt = ld lt;
      lt1 = force? lt;
      checkMissing(lt1);
      return lt1;
    };
    p8 = prom<V +>{
      lc = ld lc;
      lc1 = force? lc;
      checkMissing(lc1);
      return lc1;
    };
    r61 = dyn paste0("\"...\"-typed\": lengths (", p7, ", ", p8, ") differ");
    check L119() else D32();
  L121():
    p9 = prom<V +>{
      sym11 = ldf `is.null`;
      base11 = ldf `is.null` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r63):
      return r63;
    L2():
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r62 = dyn base11(<lang `<-`(nt, names(target))>);
      goto L0(r62);
    L1(r65):
      st nt = r65;
      c26 = `==`(r65, NULL);
      goto L0(c26);
    L4():
      target23 = ld target;
      target24 = force? target23;
      checkMissing(target24);
      names = ldf names in base;
      r66 = dyn names(target24);
      goto L1(r66);
    L5():
      r64 = dyn base12(<sym target>);
      goto L1(r64);
    };
    p10 = prom<V +>{
      sym13 = ldf `is.null`;
      base13 = ldf `is.null` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L2() else L3();
    L0(r69):
      return r69;
    L2():
      sym14 = ldf names;
      base14 = ldf names in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L4() else L5();
    L3():
      r68 = dyn base13(<lang `<-`(nc, names(current))>);
      goto L0(r68);
    L1(r71):
      st nc = r71;
      c27 = `==`(r71, NULL);
      goto L0(c27);
    L4():
      current15 = ld current;
      current16 = force? current15;
      checkMissing(current16);
      names1 = ldf names in base;
      r72 = dyn names1(current16);
      goto L1(r72);
    L5():
      r70 = dyn base14(<sym current>);
      goto L1(r70);
    };
    r74 = dyn xor(p9, p10);
    check L122() else D34();
  L164():
    c41 = `==`.6(r103, "logical");
    if c41 then L36() else L165();
  L171():
    c48 = `==`.5(i, 5);
    if c48 then L39() else L172();
  L193():
    data_class1 = ldf `data.class`;
    check L194() else D64();
  L198():
    p30 = prom<V +>{
      data_class2 = ldf `data.class`;
      p29 = prom<V +>{
        target39 = ld target;
        target40 = force? target39;
        checkMissing(target40);
        return target40;
      };
      r124 = dyn data_class2(p29);
      return r124;
    };
    p32 = prom<V +>{
      data_class3 = ldf `data.class`;
      p31 = prom<V +>{
        current29 = ld current;
        current30 = force? current29;
        checkMissing(current30);
        return current30;
      };
      r127 = dyn data_class3(p31);
      return r127;
    };
    r129 = dyn gettextf("target is %s, current is %s", p30, p32);
    check L199() else D67();
  D32():
    deopt 126 [r61];
  D34():
    deopt 131 [r74];
  D64():
    deopt 230 [c52, r119];
  D67():
    deopt 240 [r129];
  L119():
    goto L22(r61);
  L122():
    c28 = `as.logical`(r74);
    if c28 then L123() else L26();
  L165():
    c42 = `==`.6(r103, "raw");
    if c42 then L36() else L166();
  L172():
    c49 = `==`.5(i, 6);
    if c49 then L36() else L173();
  L194():
    p28 = prom<V +>{
      current27 = ld current;
      current28 = force? current27;
      checkMissing(current28);
      return current28;
    };
    r121 = dyn data_class1(p28);
    check L195() else D65();
  L199():
    goto L44(r129);
  D65():
    deopt 232 [c52, r119, r121];
  L26():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L127() else L128();
  L123():
    paste1 = ldf paste0;
    check L124() else D35();
  L166():
    c43 = `==`.6(r103, "S4");
    if c43 then L37() else L167();
  L173():
    c50 = `==`.5(i, 7);
    if c50 then L37() else L174();
  L195():
    r122 = `!=`(r119, r121);
    c55 = `as.logical`(r122);
    c56 = `&&`(c52, c55);
    goto L42(c56);
  D35():
    deopt 133 [];
  L27(r81):
    r82 = `!`(r81);
    c31 = `as.logical`(r82);
    if c31 then L130() else L28();
  L124():
    p11 = prom<V +>{
      sym15 = ldf length;
      base15 = ldf length in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L2() else L3();
    L0(r76):
      c29 = `as.logical`(r76);
      if c29 then L4() else L1();
    L2():
      nt = ld nt;
      nt1 = force? nt;
      checkMissing(nt1);
      length2 = ldf length in base;
      r77 = dyn length2(nt1);
      goto L0(r77);
    L3():
      r75 = dyn base15(<sym nt>);
      goto L0(r75);
    L1():
      return "current but not in target";
    L4():
      return "target but not in current";
    };
    r79 = dyn paste1("\"...\"-typed: names in ", p11);
    check L125() else D36();
  L127():
    nt2 = ld nt;
    check L129() else D37();
  L128():
    r80 = dyn base16(<sym nt>);
    goto L27(r80);
  L167():
    goto L38();
  L174():
    c51 = `==`.5(i, 8);
    if c51 then L38() else L175();
  D36():
    deopt 136 [r79];
  D37():
    deopt 138 [nt2];
  L28():
    goto L22("\"...\"-types of the same length, no names, but not identical");
  L125():
    goto L22(r79);
  L129():
    nt3 = force? nt2;
    checkMissing(nt3);
    c30 = `==`(nt3, NULL);
    goto L27(c30);
  L130():
    sort = ldf sort;
    check L131() else D38();
  L175():
    goto L40();
  D38():
    deopt 143 [];
  L131():
    p12 = prom<V +>{
      nt4 = ld nt;
      nt5 = force? nt4;
      checkMissing(nt5);
      return nt5;
    };
    r84 = dyn sort(p12);
    check L132() else D39();
  D39():
    deopt 145 [r84];
  L132():
    st nt = r84;
    sort1 = ldf sort;
    check L133() else D40();
  D40():
    deopt 148 [];
  L133():
    p13 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      return nc1;
    };
    r86 = dyn sort1(p13);
    check L134() else D41();
  D41():
    deopt 150 [r86];
  L134():
    st nc = r86;
    sym17 = ldf identical;
    base17 = ldf identical in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L135() else L136();
  L29(r88):
    c32 = `as.logical`(r88);
    if c32 then L140() else L30();
  L135():
    nt6 = ld nt;
    check L137() else D42();
  L136():
    r87 = dyn base17(<sym nt>, <sym nc>);
    goto L29(r87);
  D42():
    deopt 154 [nt6];
  L30():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L142() else L143();
  L31(r90):
    goto L22(r90);
  L137():
    nt7 = force? nt6;
    checkMissing(nt7);
    nc2 = ld nc;
    check L138() else D43();
  L140():
    goto L31(TRUE);
  D43():
    deopt 156 [nc2];
  L138():
    nc3 = force? nc2;
    checkMissing(nc3);
    identical1 = ldf identical in base;
    r89 = dyn identical1(nt7, nc3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L139() else D44();
  L142():
    all_equal_character = ldf `all.equal.character`;
    check L144() else D45();
  L143():
    r91 = dyn base18("\"...\"-typed\": sorted names differ", <lang all.equal.character(nt, nc, ...)>);
    goto L31(r91);
  D44():
    deopt 166 [r89];
  D45():
    deopt 173 [];
  L139():
    goto L29(r89);
  L144():
    p14 = prom<V +>{
      nt8 = ld nt;
      nt9 = force? nt8;
      checkMissing(nt9);
      return nt9;
    };
    p15 = prom<V +>{
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      return nc5;
    };
    ddd4 = ld `...`;
    r94 = dyn all_equal_character[, , `...`](p14, p15, ddd4);
    check L145() else D46();
  D46():
    deopt 177 [r94];
  L145():
    c33 = ldf c in base;
    r95 = dyn c33("\"...\"-typed\": sorted names differ", r94);
    check L146() else D47();
  D47():
    deopt 179 [r95];
  L146():
    goto L31(r95);
  }
}