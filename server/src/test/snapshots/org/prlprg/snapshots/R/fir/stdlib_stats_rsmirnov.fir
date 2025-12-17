fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1183323468;
    st rsmirnov = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1183323468(n, sizes, z, alternative) {
  (reg n:*, reg sizes:*, reg z:*, reg alternative:*) -+> V { var n:*, var sizes:*, var z:*, reg z_isMissing:L, reg z_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg alternative1:*, reg alternative2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg n1:*, reg n2:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg c2:V, reg n3:*, reg n4:V, reg r10:V, reg c4:L, reg c5:V, reg c7:L, reg numeric:cls, reg r11:V, reg n5:*, reg n6:V, reg r14:V, reg c8:L, reg stop:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg n7:*, reg n8:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg sizes1:*, reg sizes2:V, reg length1:cls, reg r22:V, reg r23:V, reg c9:L, reg stop1:cls, reg r24:V, reg sizes3:*, reg sizes4:V, reg c10:L, reg sizes6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r26:V, reg sizes7:*, reg sizes8:V, reg c11:L, reg sizes10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r27:V, reg n_x:*, reg n_x1:V, reg r28:V, reg c12:L, reg stop2:cls, reg r29:V, reg n_y:*, reg n_y1:V, reg r31:V, reg c13:L, reg stop3:cls, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg n_x2:*, reg n_x3:V, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg n_y2:*, reg n_y3:V, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg z1:*, reg z2:V, reg c14:V, reg c15:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg n_x4:*, reg n_x5:V, reg n_y4:*, reg n_y5:V, reg r44:V, reg rep_int:cls, reg r45:V, reg r46:V, reg table:cls, reg z3:*, reg z4:V, reg p2:p(V +), reg r48:V, reg alternative3:*, reg alternative4:V, reg r49:V, reg alternative5:*, reg alternative6:V, reg r50:V, reg c16:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg n_y6:*, reg n_y7:V, reg n_x6:*, reg n_x7:V, reg c17:cls, reg r53:V, reg r54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg n_x8:*, reg n_x9:V, reg n_y8:*, reg n_y9:V, reg c18:cls, reg r56:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg C_Smirnov_sim:*, reg C_Smirnov_sim1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg C_Smirnov_sim4:V, reg r60:V, reg rt:*, reg rt1:V, reg as_integer:cls, reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg C_Smirnov_sim7:V, reg r65:V, reg r66:V, reg sizes11:*, reg sizes12:V, reg as_integer1:cls, reg r67:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg C_Smirnov_sim10:V, reg r73:V, reg r74:V, reg r75:V, reg n9:*, reg n10:V, reg as_integer2:cls, reg r76:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg C_Smirnov_sim13:V, reg r84:V, reg r85:V, reg r86:V, reg r87:V, reg two_sided:*, reg two_sided1:V, reg as_integer3:cls, reg r88:V, reg vargs:dots, reg r89:V |
    mkenv;
    st n = n;
    st sizes = sizes;
    z_isMissing = missing.0(z);
    if z_isMissing then L0(NULL) else L0(z);
  L0(z_orDefault):
    st z = z_orDefault;
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
    match_arg = ldf `match.arg`;
    check L33() else D0();
  D0():
    deopt 1 [];
  L33():
    p1 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r5 = dyn match_arg(p1);
    check L34() else D1();
  D1():
    deopt 3 [r5];
  L34():
    st alternative = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L3(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L4(c1) else L39();
  L35():
    n1 = ld n;
    check L37() else D2();
  L36():
    r6 = dyn base1(<sym n>);
    goto L3(r6);
  D2():
    deopt 7 [n1];
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L42() else L5();
  L37():
    n2 = force? n1;
    checkMissing(n2);
    length = ldf length in base;
    r8 = dyn length(n2);
    check L38() else D3();
  L39():
    n3 = ld n;
    check L40() else D4();
  D3():
    deopt 10 [r8];
  D4():
    deopt 12 [c1, n3];
  L5():
    n5 = ld n;
    check L47() else D7();
  L38():
    goto L3(r8);
  L40():
    n4 = force? n3;
    checkMissing(n4);
    r10 = `==`(n4, 0);
    c4 = `as.logical`(r10);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L42():
    numeric = ldf numeric;
    check L43() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 24 [n5];
  L43():
    r11 = dyn numeric(0);
    check L44() else D6();
  L47():
    n6 = force? n5;
    checkMissing(n6);
    r14 = `<`(n6, 0.0);
    c8 = `as.logical`(r14);
    if c8 then L48() else L7();
  D6():
    deopt 20 [r11];
  L7():
    goto L8();
  L8():
    sym2 = ldf floor;
    base2 = ldf floor in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L44():
    popenv;
    return r11;
  L48():
    stop = ldf stop;
    check L49() else D8();
  D8():
    deopt 29 [];
  L9(r18):
    st n = r18;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L49():
    r15 = dyn stop("invalid arguments");
    check L50() else D9();
  L52():
    n7 = ld n;
    check L54() else D10();
  L53():
    r17 = dyn base2(<sym n>);
    goto L9(r17);
  D9():
    deopt 31 [r15];
  D10():
    deopt 35 [n7];
  L10(r21):
    r23 = `!=`(r21, 2);
    c9 = `as.logical`(r23);
    if c9 then L59() else L11();
  L50():
    goto L8();
  L54():
    n8 = force? n7;
    checkMissing(n8);
    r19 = floor(n8);
    goto L9(r19);
  L55():
    sizes1 = ld sizes;
    check L57() else D11();
  L56():
    r20 = dyn base3(<sym sizes>);
    goto L10(r20);
  D11():
    deopt 41 [sizes1];
  L11():
    goto L12();
  L12():
    sizes3 = ld sizes;
    check L63() else D15();
  L57():
    sizes2 = force? sizes1;
    checkMissing(sizes2);
    length1 = ldf length in base;
    r22 = dyn length1(sizes2);
    check L58() else D12();
  L59():
    stop1 = ldf stop;
    check L60() else D13();
  D12():
    deopt 44 [r22];
  D13():
    deopt 48 [];
  D15():
    deopt 53 [sizes3];
  L58():
    goto L10(r22);
  L60():
    r24 = dyn stop1("argument 'sizes' must be a vector of length 2");
    check L61() else D14();
  L63():
    sizes4 = force? sizes3;
    checkMissing(sizes4);
    c10 = `is.object`(sizes4);
    if c10 then L64() else L65(sizes4);
  D14():
    deopt 50 [r24];
  L13(dx1):
    st `n.x` = dx1;
    sizes7 = ld sizes;
    check L67() else D16();
  L61():
    goto L12();
  L64():
    dr = tryDispatchBuiltin.1("[", sizes4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L66() else L65(dr);
  L65(sizes6):
    __ = ldf `[` in base;
    r26 = dyn __(sizes6, 1);
    goto L13(r26);
  D16():
    deopt 59 [sizes7];
  L66():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L67():
    sizes8 = force? sizes7;
    checkMissing(sizes8);
    c11 = `is.object`(sizes8);
    if c11 then L68() else L69(sizes8);
  L14(dx3):
    st `n.y` = dx3;
    n_x = ld `n.x`;
    check L71() else D17();
  L68():
    dr2 = tryDispatchBuiltin.1("[", sizes8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(dr2);
  L69(sizes10):
    __1 = ldf `[` in base;
    r27 = dyn __1(sizes10, 2);
    goto L14(r27);
  D17():
    deopt 65 [n_x];
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L71():
    n_x1 = force? n_x;
    checkMissing(n_x1);
    r28 = `<`(n_x1, 1.0);
    c12 = `as.logical`(r28);
    if c12 then L72() else L15();
  L15():
    goto L16();
  L16():
    n_y = ld `n.y`;
    check L76() else D20();
  L72():
    stop2 = ldf stop;
    check L73() else D18();
  D18():
    deopt 70 [];
  D20():
    deopt 75 [n_y];
  L73():
    r29 = dyn stop2("not enough 'x' data");
    check L74() else D19();
  L76():
    n_y1 = force? n_y;
    checkMissing(n_y1);
    r31 = `<`(n_y1, 1.0);
    c13 = `as.logical`(r31);
    if c13 then L77() else L17();
  D19():
    deopt 72 [r29];
  L17():
    goto L18();
  L18():
    sym4 = ldf floor;
    base4 = ldf floor in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L74():
    goto L16();
  L77():
    stop3 = ldf stop;
    check L78() else D21();
  D21():
    deopt 80 [];
  L19(r35):
    st `n.x` = r35;
    sym5 = ldf floor;
    base5 = ldf floor in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L84() else L85();
  L78():
    r32 = dyn stop3("not enough 'y' data");
    check L79() else D22();
  L81():
    n_x2 = ld `n.x`;
    check L83() else D23();
  L82():
    r34 = dyn base4(<sym n.x>);
    goto L19(r34);
  D22():
    deopt 82 [r32];
  D23():
    deopt 86 [n_x2];
  L20(r38):
    st `n.y` = r38;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  L79():
    goto L18();
  L83():
    n_x3 = force? n_x2;
    checkMissing(n_x3);
    r36 = floor(n_x3);
    goto L19(r36);
  L84():
    n_y2 = ld `n.y`;
    check L86() else D24();
  L85():
    r37 = dyn base5(<sym n.y>);
    goto L20(r37);
  D24():
    deopt 91 [n_y2];
  L21(r41):
    c15 = `as.logical`(r41);
    if c15 then L90() else L22();
  L86():
    n_y3 = force? n_y2;
    checkMissing(n_y3);
    r39 = floor(n_y3);
    goto L20(r39);
  L87():
    z1 = ld z;
    check L89() else D25();
  L88():
    r40 = dyn base6(<sym z>);
    goto L21(r40);
  D25():
    deopt 96 [z1];
  L22():
    table = ldf table;
    check L97() else D29();
  L24(r46):
    st rt = r46;
    alternative3 = ld alternative;
    check L99() else D31();
  L89():
    z2 = force? z1;
    checkMissing(z2);
    c14 = `==`(z2, NULL);
    goto L21(c14);
  L90():
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  D29():
    deopt 109 [];
  D31():
    deopt 113 [alternative3];
  L23(r43):
    goto L24(r43);
  L91():
    n_x4 = ld `n.x`;
    check L93() else D26();
  L92():
    r42 = dyn base7(1, <lang `+`(n.x, n.y)>);
    goto L23(r42);
  L97():
    p2 = prom<V +>{
      z3 = ld z;
      z4 = force? z3;
      checkMissing(z4);
      return z4;
    };
    r48 = dyn table(p2);
    check L98() else D30();
  L99():
    alternative4 = force? alternative3;
    checkMissing(alternative4);
    r49 = `==`(alternative4, "two.sided");
    st `two.sided` = r49;
    alternative5 = ld alternative;
    check L100() else D32();
  D26():
    deopt 102 [n_x4];
  D30():
    deopt 111 [r48];
  D32():
    deopt 118 [alternative5];
  L93():
    n_x5 = force? n_x4;
    checkMissing(n_x5);
    n_y4 = ld `n.y`;
    check L94() else D27();
  L98():
    goto L24(r48);
  L100():
    alternative6 = force? alternative5;
    checkMissing(alternative6);
    r50 = `==`(alternative6, "less");
    c16 = `as.logical`(r50);
    if c16 then L101() else L25();
  D27():
    deopt 103 [n_x5, n_y4];
  L25():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  L27(r54):
    st sizes = r54;
    sym10 = ldf `.Call`;
    base10 = ldf `.Call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  L94():
    n_y5 = force? n_y4;
    checkMissing(n_y5);
    r44 = `+`(n_x5, n_y5);
    rep_int = ldf `rep.int` in base;
    r45 = dyn rep_int(1, r44);
    check L95() else D28();
  L101():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  D28():
    deopt 107 [r45];
  L26(r52):
    goto L27(r52);
  L28(r58):
    popenv;
    return r58;
  L95():
    goto L23(r45);
  L102():
    n_y6 = ld `n.y`;
    check L104() else D33();
  L103():
    r51 = dyn base8(<sym n.y>, <sym n.x>);
    goto L26(r51);
  L108():
    n_x8 = ld `n.x`;
    check L110() else D36();
  L109():
    r55 = dyn base9(<sym n.x>, <sym n.y>);
    goto L27(r55);
  L113():
    C_Smirnov_sim = ld C_Smirnov_sim;
    check L115() else D39();
  L114():
    r57 = dyn base10(<sym C_Smirnov_sim>, <lang as.integer(rt)>, <lang as.integer(sizes)>, <lang as.integer(n)>, <lang as.integer(two.sided)>);
    goto L28(r57);
  D33():
    deopt 124 [n_y6];
  D36():
    deopt 132 [n_x8];
  D39():
    deopt 140 [C_Smirnov_sim];
  L104():
    n_y7 = force? n_y6;
    checkMissing(n_y7);
    n_x6 = ld `n.x`;
    check L105() else D34();
  L110():
    n_x9 = force? n_x8;
    checkMissing(n_x9);
    n_y8 = ld `n.y`;
    check L111() else D37();
  L115():
    C_Smirnov_sim1 = force? C_Smirnov_sim;
    checkMissing(C_Smirnov_sim1);
    sym11 = ldf `as.integer`;
    base11 = ldf `as.integer` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L116() else L117();
  D34():
    deopt 126 [n_x6];
  D37():
    deopt 134 [n_y8];
  L29(C_Smirnov_sim4, r60):
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L120() else L121();
  L105():
    n_x7 = force? n_x6;
    checkMissing(n_x7);
    c17 = ldf c in base;
    r53 = dyn c17(n_y7, n_x7);
    check L106() else D35();
  L111():
    n_y9 = force? n_y8;
    checkMissing(n_y9);
    c18 = ldf c in base;
    r56 = dyn c18(n_x9, n_y9);
    check L112() else D38();
  L116():
    rt = ld rt;
    check L118() else D40();
  L117():
    r59 = dyn base11(<sym rt>);
    goto L29(C_Smirnov_sim1, r59);
  D35():
    deopt 129 [r53];
  D38():
    deopt 137 [r56];
  D40():
    deopt 143 [C_Smirnov_sim1, rt];
  L30(C_Smirnov_sim7, r65, r66):
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L124() else L125();
  L106():
    goto L26(r53);
  L112():
    goto L27(r56);
  L118():
    rt1 = force? rt;
    checkMissing(rt1);
    as_integer = ldf `as.integer` in base;
    r61 = dyn as_integer(rt1);
    check L119() else D41();
  L120():
    sizes11 = ld sizes;
    check L122() else D42();
  L121():
    r64 = dyn base12(<sym sizes>);
    goto L30(C_Smirnov_sim4, r60, r64);
  D41():
    deopt 146 [C_Smirnov_sim1, r61];
  D42():
    deopt 148 [C_Smirnov_sim4, r60, sizes11];
  L31(C_Smirnov_sim10, r73, r74, r75):
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L128() else L129();
  L119():
    goto L29(C_Smirnov_sim1, r61);
  L122():
    sizes12 = force? sizes11;
    checkMissing(sizes12);
    as_integer1 = ldf `as.integer` in base;
    r67 = dyn as_integer1(sizes12);
    check L123() else D43();
  L124():
    n9 = ld n;
    check L126() else D44();
  L125():
    r72 = dyn base13(<sym n>);
    goto L31(C_Smirnov_sim7, r65, r66, r72);
  D43():
    deopt 151 [C_Smirnov_sim4, r60, r67];
  D44():
    deopt 153 [C_Smirnov_sim7, r65, r66, n9];
  L32(C_Smirnov_sim13, r84, r85, r86, r87):
    vargs = dots[r84, r85, r86, r87];
    r89 = `.Call`(C_Smirnov_sim13, vargs, <missing>);
    goto L28(r89);
  L123():
    goto L30(C_Smirnov_sim4, r60, r67);
  L126():
    n10 = force? n9;
    checkMissing(n10);
    as_integer2 = ldf `as.integer` in base;
    r76 = dyn as_integer2(n10);
    check L127() else D45();
  L128():
    two_sided = ld `two.sided`;
    check L130() else D46();
  L129():
    r83 = dyn base14(<sym two.sided>);
    goto L32(C_Smirnov_sim10, r73, r74, r75, r83);
  D45():
    deopt 156 [C_Smirnov_sim7, r65, r66, r76];
  D46():
    deopt 158 [C_Smirnov_sim10, r73, r74, r75, two_sided];
  L127():
    goto L31(C_Smirnov_sim7, r65, r66, r76);
  L130():
    two_sided1 = force? two_sided;
    checkMissing(two_sided1);
    as_integer3 = ldf `as.integer` in base;
    r88 = dyn as_integer3(two_sided1);
    check L131() else D47();
  D47():
    deopt 161 [C_Smirnov_sim10, r73, r74, r75, r88];
  L131():
    goto L32(C_Smirnov_sim10, r73, r74, r75, r88);
  }
}