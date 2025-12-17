fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3833187206;
    st `all.equal.envRefClass` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3833187206(target, current, `...`) {
  (reg target:*, reg current:*, reg ddd:dots) -+> V { var target:*, var current:*, var `...`:dots?, reg __:cls, reg r:V, reg r1:cls, reg target1:*, reg target2:V, reg p:p(V +), reg r3:V, reg r4:V, reg c:L, reg __1:cls, reg r7:V, reg r8:cls, reg current1:*, reg current2:V, reg p1:p(V +), reg r10:V, reg r11:V, reg c1:L, reg isTRUE:cls, reg all_equal:cls, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg target3:*, reg target4:V, reg class:cls, reg r16:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg current3:*, reg current4:V, reg class1:cls, reg r20:V, reg p3:p(V +), reg ddd1:dots?, reg r22:V, reg p4:p(V +), reg r24:V, reg r25:V, reg c2:L, reg sprintf:cls, reg paste:cls, reg ae:*, reg ae1:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg r29:V, reg r32:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg getCl:cls, reg target5:*, reg target6:V, reg p7:p(V +), reg r36:V, reg getCl1:cls, reg current5:*, reg current6:V, reg p8:p(V +), reg r38:V, reg identical:cls, reg r39:V, reg r40:V, reg c3:L, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg ___names:cls, reg r43:V, reg p9:p(V +), reg r45:V, reg hasCA:*, reg hasCA1:V, reg c4:L, reg all_equal1:cls, reg cld:*, reg cld1:V, reg p10:p(V +), reg c5:*, reg c6:V, reg p11:p(V +), reg ddd2:dots?, reg r48:V, reg r49:V, reg all_equal2:cls, reg cld2:*, reg cld3:V, reg p12:p(V +), reg c7:*, reg c8:V, reg p13:p(V +), reg ddd3:dots?, reg r52:V, reg isTRUE1:cls, reg ae2:*, reg ae3:V, reg p14:p(V +), reg r54:V, reg c9:L, reg c11:V, reg hasCA2:*, reg hasCA3:V, reg r55:V, reg c12:L, reg c13:V, reg c15:L, reg all_equal3:cls, reg cld4:*, reg cld5:V, reg p15:p(V +), reg c16:*, reg c17:V, reg p16:p(V +), reg ddd4:dots?, reg r58:V, reg sprintf1:cls, reg isTRUE2:cls, reg ae4:*, reg ae5:V, reg p17:p(V +), reg r61:V, reg c18:L, reg paste1:cls, reg ae6:*, reg ae7:V, reg p18:p(V +), reg r63:V, reg p19:p(V +), reg r65:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r68:V, reg r69:V, reg cld6:*, reg cld7:V, reg isS4:cls, reg r70:V, reg r71:V, reg c19:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r72:V, reg r73:V, reg target7:*, reg target8:V, reg current7:*, reg current8:V, reg identical1:cls, reg r74:V, reg c20:L, reg r75:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r78:V, reg r79:V, reg __2:cls, reg r80:V, reg names:cls, reg r81:V, reg r82:cls, reg all_equal_list:cls, reg asL:cls, reg target9:*, reg target10:V, reg p20:p(V +), reg r84:V, reg p21:p(V +), reg asL1:cls, reg current9:*, reg current10:V, reg p22:p(V +), reg r87:V, reg p23:p(V +), reg ddd5:dots?, reg r89:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r90:V, reg r91:V, reg __3:cls, reg r92:V, reg names1:cls, reg r93:V, reg sns:*, reg sns1:V, reg c21:L, reg sns3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sns4:*, reg sns5:V, reg r94:V, reg __4:cls, reg r95:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r96:V, reg r97:V, reg sns6:*, reg sns7:V, reg length:cls, reg r98:V, reg c22:L, reg lapply:cls, reg sns8:*, reg sns9:V, reg p24:p(V +), reg r100:cls, reg p25:p(V +), reg r102:V, reg unlist:cls, reg L:*, reg L1:V, reg c23:L, reg L3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg vapply:cls, reg L4:*, reg L5:V, reg p26:p(V +), reg is_character:*, reg is_character1:V, reg p27:p(V +), reg r105:V, reg __5:cls, reg r106:V, reg p28:p(V +), reg r108:V, reg r109:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r110:V, reg r111:V, reg n:*, reg n1:V, reg c24:L, reg c25:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r112:V, reg r113:V, reg msg:*, reg msg1:V, reg n2:*, reg n3:V, reg c26:cls, reg r114:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r116:V, reg r117:V, reg msg2:*, reg msg3:V, reg c27:V, reg c28:L, reg msg4:*, reg msg5:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    __ = ldf `::`;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    r = dyn __("methods", "is");
    check L33() else D1();
  D1():
    deopt 4 [r];
  L33():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    r3 = dyn r1(p, "envRefClass");
    check L34() else D2();
  D2():
    deopt 8 [r3];
  L34():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L35() else L0();
  L0():
    __1 = ldf `::`;
    check L38() else D3();
  L35():
    popenv;
    return "'target' is not an envRefClass";
  D3():
    deopt 16 [];
  L38():
    r7 = dyn __1("methods", "is");
    check L39() else D4();
  D4():
    deopt 19 [r7];
  L39():
    checkFun.0(r7);
    r8 = r7 as cls;
    p1 = prom<V +>{
      current1 = ld current;
      current2 = force? current1;
      checkMissing(current2);
      return current2;
    };
    r10 = dyn r8(p1, "envRefClass");
    check L40() else D5();
  D5():
    deopt 23 [r10];
  L40():
    r11 = `!`(r10);
    c1 = `as.logical`(r11);
    if c1 then L41() else L2();
  L2():
    isTRUE = ldf isTRUE;
    check L44() else D6();
  L41():
    popenv;
    return "'current' is not an envRefClass";
  D6():
    deopt 31 [];
  L44():
    p4 = prom<V +>{
      all_equal = ldf `all.equal`;
      p2 = prom<V +>{
        sym = ldf class;
        base = ldf class in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r15):
        return r15;
      L1():
        target3 = ld target;
        target4 = force? target3;
        checkMissing(target4);
        class = ldf class in base;
        r16 = dyn class(target4);
        goto L0(r16);
      L2():
        r14 = dyn base(<sym target>);
        goto L0(r14);
      };
      p3 = prom<V +>{
        sym1 = ldf class;
        base1 = ldf class in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r19):
        return r19;
      L1():
        current3 = ld current;
        current4 = force? current3;
        checkMissing(current4);
        class1 = ldf class in base;
        r20 = dyn class1(current4);
        goto L0(r20);
      L2():
        r18 = dyn base1(<sym current>);
        goto L0(r18);
      };
      ddd1 = ld `...`;
      r22 = dyn all_equal[, , `...`](p2, p3, ddd1);
      st ae = r22;
      setInvisible.0();
      return r22;
    };
    r24 = dyn isTRUE(p4);
    check L45() else D7();
  D7():
    deopt 33 [r24];
  L45():
    r25 = `!`(r24);
    c2 = `as.logical`(r25);
    if c2 then L46() else L4();
  L4():
    r32 = clos inner2501545716;
    st getCl = r32;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L46():
    sprintf = ldf sprintf;
    check L47() else D8();
  D8():
    deopt 36 [];
  L6(r34):
    r40 = `!`(r34);
    c3 = `as.logical`(r40);
    if c3 then L58() else L7();
  L47():
    p6 = prom<V +>{
      paste = ldf paste;
      p5 = prom<V +>{
        ae = ld ae;
        ae1 = force? ae;
        checkMissing(ae1);
        return ae1;
      };
      r27 = dyn paste[, collapse](p5, " ");
      return r27;
    };
    r29 = dyn sprintf("Classes differ: %s", p6);
    check L48() else D9();
  L51():
    getCl = ldf getCl;
    check L53() else D10();
  L52():
    r33 = dyn base2(<lang `<-`(cld, getCl(target))>, <lang `<-`(c2, getCl(current))>);
    goto L6(r33);
  D9():
    deopt 39 [r29];
  D10():
    deopt 49 [];
  L7():
    sym4 = ldf isS4;
    base4 = ldf isS4 in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L48():
    popenv;
    return r29;
  L53():
    p7 = prom<V +>{
      target5 = ld target;
      target6 = force? target5;
      checkMissing(target6);
      return target6;
    };
    r36 = dyn getCl(p7);
    check L54() else D11();
  L58():
    _in_ = ldf `%in%`;
    check L59() else D15();
  D11():
    deopt 51 [r36];
  D15():
    deopt 69 [];
  L14(r69):
    r71 = `!`(r69);
    c19 = `as.logical`(r71);
    if c19 then L85() else L15();
  L54():
    st cld = r36;
    getCl1 = ldf getCl;
    check L55() else D12();
  L59():
    p9 = prom<V +>{
      sym3 = ldf `...names`;
      base3 = ldf `...names` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      ___names = ldf `...names` in base;
      r43 = dyn ___names();
      goto L0(r43);
    L2():
      r41 = dyn base3();
      goto L0(r41);
    };
    r45 = dyn _in_("check.attributes", p9);
    check L60() else D16();
  L81():
    cld6 = ld cld;
    check L83() else D29();
  L82():
    r68 = dyn base4(<sym cld>);
    goto L14(r68);
  D12():
    deopt 54 [];
  D16():
    deopt 72 [r45];
  D29():
    deopt 118 [cld6];
  L15():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  L55():
    p8 = prom<V +>{
      current5 = ld current;
      current6 = force? current5;
      checkMissing(current6);
      return current6;
    };
    r38 = dyn getCl1(p8);
    check L56() else D13();
  L60():
    st hasCA = r45;
    hasCA = ld hasCA;
    check L61() else D17();
  L83():
    cld7 = force? cld6;
    checkMissing(cld7);
    isS4 = ldf isS4 in base;
    r70 = dyn isS4(cld7);
    check L84() else D30();
  L85():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L86() else L87();
  D13():
    deopt 56 [r38];
  D17():
    deopt 74 [hasCA];
  D30():
    deopt 121 [r70];
  L16(r73):
    c20 = `as.logical`(r73);
    if c20 then L91() else L17();
  L20(r79):
    st flds = r79;
    r82 = clos inner3297406603;
    st asL = r82;
    all_equal_list = ldf `all.equal.list`;
    check L98() else D35();
  L56():
    st c2 = r38;
    identical = ldf identical in base;
    r39 = dyn identical(r36, r38, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L57() else D14();
  L61():
    hasCA1 = force? hasCA;
    checkMissing(hasCA1);
    c4 = `as.logical`(hasCA1);
    if c4 then L62() else L8();
  L84():
    goto L14(r70);
  L86():
    target7 = ld target;
    check L88() else D31();
  L87():
    r72 = dyn base5(<sym target>, <sym current>);
    goto L16(r72);
  L95():
    __2 = ldf `@` in base;
    r80 = dyn __2(<sym cld>, <sym fieldClasses>);
    names = ldf names in base;
    r81 = dyn names(r80);
    check L97() else D34();
  L96():
    r78 = dyn base6(<lang `@`(cld, fieldClasses)>);
    goto L20(r78);
  D14():
    deopt 66 [r39];
  D31():
    deopt 125 [target7];
  D34():
    deopt 150 [r81];
  D35():
    deopt 156 [];
  L8():
    all_equal2 = ldf `all.equal`;
    check L66() else D20();
  L9(r49):
    st ae = r49;
    isTRUE1 = ldf isTRUE;
    check L68() else D22();
  L17():
    goto L18("different prototypical 'envRefClass' objects");
  L18(r75):
    popenv;
    return r75;
  L57():
    goto L6(r39);
  L62():
    all_equal1 = ldf `all.equal`;
    check L63() else D18();
  L88():
    target8 = force? target7;
    checkMissing(target8);
    current7 = ld current;
    check L89() else D32();
  L91():
    goto L18(TRUE);
  L97():
    goto L20(r81);
  L98():
    p21 = prom<V +>{
      asL = ldf asL;
      p20 = prom<V +>{
        target9 = ld target;
        target10 = force? target9;
        checkMissing(target10);
        return target10;
      };
      r84 = dyn asL(p20);
      return r84;
    };
    p23 = prom<V +>{
      asL1 = ldf asL;
      p22 = prom<V +>{
        current9 = ld current;
        current10 = force? current9;
        checkMissing(current10);
        return current10;
      };
      r87 = dyn asL1(p22);
      return r87;
    };
    ddd5 = ld `...`;
    r89 = dyn all_equal_list[, , `...`](p21, p23, ddd5);
    check L99() else D36();
  D18():
    deopt 77 [];
  D20():
    deopt 83 [];
  D22():
    deopt 92 [];
  D32():
    deopt 127 [current7];
  D36():
    deopt 160 [r89];
  L63():
    p10 = prom<V +>{
      cld = ld cld;
      cld1 = force? cld;
      checkMissing(cld1);
      return cld1;
    };
    p11 = prom<V +>{
      c5 = ld c2;
      c6 = force? c5;
      checkMissing(c6);
      return c6;
    };
    ddd2 = ld `...`;
    r48 = dyn all_equal1[, , `...`](p10, p11, ddd2);
    check L64() else D19();
  L66():
    p12 = prom<V +>{
      cld2 = ld cld;
      cld3 = force? cld2;
      checkMissing(cld3);
      return cld3;
    };
    p13 = prom<V +>{
      c7 = ld c2;
      c8 = force? c7;
      checkMissing(c8);
      return c8;
    };
    ddd3 = ld `...`;
    r52 = dyn all_equal2[, , `check.attributes`, `...`](p12, p13, FALSE, ddd3);
    check L67() else D21();
  L68():
    p14 = prom<V +>{
      ae2 = ld ae;
      ae3 = force? ae2;
      checkMissing(ae3);
      return ae3;
    };
    r54 = dyn isTRUE1(p14);
    check L69() else D23();
  L89():
    current8 = force? current7;
    checkMissing(current8);
    identical1 = ldf identical in base;
    r74 = dyn identical1(target8, current8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L90() else D33();
  L99():
    st n = r89;
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  D19():
    deopt 81 [r48];
  D21():
    deopt 89 [r52];
  D23():
    deopt 94 [r54];
  D33():
    deopt 137 [r74];
  L21(r91):
    st sns = r91;
    sns = ld sns;
    check L103() else D38();
  L64():
    goto L9(r48);
  L67():
    goto L9(r52);
  L69():
    c9 = `as.logical`(r54);
    if c9 then L70() else L10(c9);
  L90():
    goto L16(r74);
  L100():
    __3 = ldf `@` in base;
    r92 = dyn __3(<sym cld>, <sym slots>);
    names1 = ldf names in base;
    r93 = dyn names1(r92);
    check L102() else D37();
  L101():
    r90 = dyn base7(<lang `@`(cld, slots)>);
    goto L21(r90);
  D37():
    deopt 167 [r93];
  D38():
    deopt 169 [sns];
  L10(c11):
    c15 = `as.logical`(c11);
    if c15 then L73() else L11();
  L70():
    hasCA2 = ld hasCA;
    check L71() else D24();
  L102():
    goto L21(r93);
  L103():
    sns1 = force? sns;
    checkMissing(sns1);
    c21 = `is.object`(sns1);
    if c21 then L104() else L105(sns1);
  D24():
    deopt 95 [c9, hasCA2];
  L11():
    goto L12();
  L12():
    sprintf1 = ldf sprintf;
    check L77() else D27();
  L22(dx1):
    st sns = dx1;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L108() else L109();
  L71():
    hasCA3 = force? hasCA2;
    checkMissing(hasCA3);
    r55 = `!`(hasCA3);
    c12 = `as.logical`(r55);
    c13 = `&&`(c9, c12);
    goto L10(c13);
  L73():
    all_equal3 = ldf `all.equal`;
    check L74() else D25();
  L104():
    dr = tryDispatchBuiltin.1("[", sns1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L106() else L105(dr);
  L105(sns3):
    sns4 = ld sns;
    check L107() else D39();
  D25():
    deopt 100 [];
  D27():
    deopt 109 [];
  D39():
    deopt 171 [sns3, sns4];
  L23(r97):
    c22 = `as.logical`(r97);
    if c22 then L112() else L24();
  L74():
    p15 = prom<V +>{
      cld4 = ld cld;
      cld5 = force? cld4;
      checkMissing(cld5);
      return cld5;
    };
    p16 = prom<V +>{
      c16 = ld c2;
      c17 = force? c16;
      checkMissing(c17);
      return c17;
    };
    ddd4 = ld `...`;
    r58 = dyn all_equal3[, , `...`](p15, p16, ddd4);
    check L75() else D26();
  L77():
    p19 = prom<V +>{
      isTRUE2 = ldf isTRUE;
      p17 = prom<V +>{
        ae4 = ld ae;
        ae5 = force? ae4;
        checkMissing(ae5);
        return ae5;
      };
      r61 = dyn isTRUE2(p17);
      c18 = `as.logical`(r61);
      if c18 then L1() else L0();
    L0():
      paste1 = ldf paste;
      p18 = prom<V +>{
        ae6 = ld ae;
        ae7 = force? ae6;
        checkMissing(ae7);
        return ae7;
      };
      r63 = dyn paste1[, , collapse](":", p18, " ");
      return r63;
    L1():
      return "";
    };
    r65 = dyn sprintf1("Class definitions are not identical%s", p19);
    check L78() else D28();
  L106():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L107():
    sns5 = force? sns4;
    checkMissing(sns5);
    r94 = `!=`(sns5, ".xData");
    __4 = ldf `[` in base;
    r95 = dyn __4(sns3, r94);
    goto L22(r95);
  L108():
    sns6 = ld sns;
    check L110() else D40();
  L109():
    r96 = dyn base8(<sym sns>);
    goto L23(r96);
  D26():
    deopt 104 [r58];
  D28():
    deopt 112 [r65];
  D40():
    deopt 179 [sns6];
  L24():
    goto L25(NULL);
  L25(r109):
    st msg = r109;
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L118() else L119();
  L75():
    st ae = r58;
    goto L12();
  L78():
    popenv;
    return r65;
  L110():
    sns7 = force? sns6;
    checkMissing(sns7);
    length = ldf length in base;
    r98 = dyn length(sns7);
    check L111() else D41();
  L112():
    lapply = ldf lapply;
    check L113() else D42();
  D41():
    deopt 182 [r98];
  D42():
    deopt 184 [];
  L26(r111):
    c25 = `as.logical`(r111);
    if c25 then L121() else L27();
  L111():
    goto L23(r98);
  L113():
    p24 = prom<V +>{
      sns8 = ld sns;
      sns9 = force? sns8;
      checkMissing(sns9);
      return sns9;
    };
    p25 = prom<V +>{
      r100 = clos inner1598457787;
      return r100;
    };
    r102 = dyn lapply(p24, p25);
    check L114() else D43();
  L118():
    n = ld n;
    check L120() else D46();
  L119():
    r110 = dyn base9(<sym n>);
    goto L26(r110);
  D43():
    deopt 187 [r102];
  D46():
    deopt 197 [n];
  L27():
    goto L29();
  L29():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L128() else L129();
  L114():
    st L = r102;
    unlist = ldf unlist;
    check L115() else D44();
  L120():
    n1 = force? n;
    checkMissing(n1);
    c24 = `is.character`(n1);
    goto L26(c24);
  L121():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L122() else L123();
  D44():
    deopt 190 [];
  L28(r113):
    st msg = r113;
    goto L29();
  L30(r117):
    c28 = `as.logical`(r117);
    if c28 then L131() else L31();
  L115():
    p28 = prom<V +>{
      L = ld L;
      L1 = force? L;
      checkMissing(L1);
      c23 = `is.object`(L1);
      if c23 then L1() else L2(L1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", L1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(L3):
      vapply = ldf vapply;
      p26 = prom<V +>{
        L4 = ld L;
        L5 = force? L4;
        checkMissing(L5);
        return L5;
      };
      p27 = prom<V +>{
        is_character = ld `is.character`;
        is_character1 = force? is_character;
        checkMissing(is_character1);
        return is_character1;
      };
      r105 = dyn vapply(p26, p27, NA_LGL);
      __5 = ldf `[` in base;
      r106 = dyn __5(L3, r105);
      goto L0(r106);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r108 = dyn unlist(p28);
    check L116() else D45();
  L122():
    msg = ld msg;
    check L124() else D47();
  L123():
    r112 = dyn base10(<sym msg>, <sym n>);
    goto L28(r112);
  L128():
    msg2 = ld msg;
    check L130() else D50();
  L129():
    r116 = dyn base11(<sym msg>);
    goto L30(r116);
  D45():
    deopt 192 [r108];
  D47():
    deopt 202 [msg];
  D50():
    deopt 212 [msg2];
  L31():
    msg4 = ld msg;
    check L133() else D51();
  L116():
    goto L25(r108);
  L124():
    msg1 = force? msg;
    checkMissing(msg1);
    n2 = ld n;
    check L125() else D48();
  L130():
    msg3 = force? msg2;
    checkMissing(msg3);
    c27 = `==`(msg3, NULL);
    goto L30(c27);
  L131():
    popenv;
    return TRUE;
  D48():
    deopt 204 [n2];
  D51():
    deopt 217 [msg4];
  L125():
    n3 = force? n2;
    checkMissing(n3);
    c26 = ldf c in base;
    r114 = dyn c26(msg1, n3);
    check L126() else D49();
  L133():
    msg5 = force? msg4;
    checkMissing(msg5);
    popenv;
    return msg5;
  D49():
    deopt 207 [r114];
  L126():
    goto L28(r114);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg tryCatch:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg dx2:cls, reg r1:V, reg p:p(V +), reg r3:cls, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg cl:*, reg cl1:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg class:cls, reg r10:V, reg cl2:*, reg cl3:V |
    mkenv;
    st x = x;
    tryCatch = ldf tryCatch;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      checkFun.0(dx1);
      dx2 = dx1 as cls;
      r1 = dyn dx2();
      return r1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r = `$`(x4, <sym getClass>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      r3 = clos inner3708401697;
      return r3;
    };
    r5 = dyn tryCatch[, error](p, p1);
    check L4() else D1();
  D1():
    deopt 5 [r5];
  L4():
    st cl = r5;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r7):
    c2 = `as.logical`(r7);
    if c2 then L8() else L1();
  L5():
    cl = ld cl;
    check L7() else D2();
  L6():
    r6 = dyn base(<sym cl>);
    goto L0(r6);
  D2():
    deopt 8 [cl];
  L1():
    cl2 = ld cl;
    check L14() else D5();
  L7():
    cl1 = force? cl;
    checkMissing(cl1);
    c1 = `==`(cl1, NULL);
    goto L0(c1);
  L8():
    sym1 = ldf class;
    base1 = ldf class in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D5():
    deopt 17 [cl2];
  L2(r9):
    popenv;
    return r9;
  L9():
    x5 = ld x;
    check L11() else D3();
  L10():
    r8 = dyn base1(<sym x>);
    goto L2(r8);
  L14():
    cl3 = force? cl2;
    checkMissing(cl3);
    popenv;
    return cl3;
  D3():
    deopt 13 [x5];
  L11():
    x6 = force? x5;
    checkMissing(x6);
    class = ldf class in base;
    r10 = dyn class(x6);
    check L12() else D4();
  D4():
    deopt 16 [r10];
  L12():
    goto L2(r10);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}
fun inner3297406603(O) {
  (reg O:*) -+> V { var O:*, reg sapply:cls, reg flds:*, reg flds1:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st O = O;
    sapply = ldf sapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      flds = ld flds;
      flds1 = force? flds;
      checkMissing(flds1);
      return flds1;
    };
    p1 = prom<V +>{
      r1 = clos inner29328453;
      return r1;
    };
    r3 = dyn sapply[, , simplify](p, p1, FALSE);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner29328453(ch) {
  (reg ch:*) -+> V { var ch:*, reg O:*, reg O1:V, reg c:L, reg O3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ch1:*, reg ch2:V, reg __:cls, reg r:V |
    mkenv;
    st ch = ch;
    O = ld O;
    check L1() else D0();
  D0():
    deopt 0 [O];
  L1():
    O1 = force? O;
    checkMissing(O1);
    c = `is.object`(O1);
    if c then L2() else L3(O1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[[", O1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(O3):
    ch1 = ld ch;
    check L5() else D1();
  D1():
    deopt 2 [O3, ch1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    ch2 = force? ch1;
    __ = ldf `[[` in base;
    r = dyn __(O3, ch2);
    goto L0(r);
  }
}
fun inner1598457787(sn) {
  (reg sn:*) -+> V { var sn:*, reg all_equal:cls, reg __:cls, reg r:V, reg r1:cls, reg target:*, reg target1:V, reg p:p(V +), reg sn1:*, reg sn2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg __1:cls, reg r6:V, reg r7:cls, reg current:*, reg current1:V, reg p3:p(V +), reg sn3:*, reg sn4:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg ddd:*, reg r12:V |
    mkenv;
    st sn = sn;
    all_equal = ldf `all.equal`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("methods", "slot");
      checkFun.0(r);
      r1 = r as cls;
      p = prom<V +>{
        target = ld target;
        target1 = force? target;
        checkMissing(target1);
        return target1;
      };
      p1 = prom<V +>{
        sn1 = ld sn;
        sn2 = force? sn1;
        checkMissing(sn2);
        return sn2;
      };
      r4 = dyn r1(p, p1);
      return r4;
    };
    p5 = prom<V +>{
      __1 = ldf `::`;
      r6 = dyn __1("methods", "slot");
      checkFun.0(r6);
      r7 = r6 as cls;
      p3 = prom<V +>{
        current = ld current;
        current1 = force? current;
        checkMissing(current1);
        return current1;
      };
      p4 = prom<V +>{
        sn3 = ld sn;
        sn4 = force? sn3;
        checkMissing(sn4);
        return sn4;
      };
      r10 = dyn r7(p3, p4);
      return r10;
    };
    ddd = ld `...`;
    r12 = dyn all_equal[, , `...`](p2, p5, ddd);
    check L1() else D1();
  D1():
    deopt 5 [r12];
  L1():
    popenv;
    return r12;
  }
}