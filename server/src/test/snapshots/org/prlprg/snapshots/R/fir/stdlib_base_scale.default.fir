fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner305472191;
    st `scale.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner305472191(x, center, scale) {
  (reg x:*, reg center:*, reg scale:*) -+> V { var x:*, var center:*, reg center_isMissing:L, reg center_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg ncol:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg center1:*, reg center2:V, reg c:L, reg c1:L, reg center3:*, reg center4:V, reg c2:L, reg colMeans:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r7:V, reg sweep:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg center5:*, reg center6:V, reg p4:p(V +), reg r10:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg center7:*, reg center8:V, reg is_numeric:cls, reg r15:V, reg r16:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg center9:*, reg center10:V, reg as_numeric:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg center11:*, reg center12:V, reg length:cls, reg r23:V, reg nc:*, reg nc1:V, reg r24:V, reg c4:L, reg sweep1:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg center13:*, reg center14:V, reg p6:p(V +), reg r27:V, reg stop:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg scale1:*, reg scale2:V, reg c5:L, reg c6:L, reg scale3:*, reg scale4:V, reg c7:L, reg r31:cls, reg apply:cls, reg x11:*, reg x12:V, reg p7:p(V +), reg f:*, reg f1:V, reg p8:p(V +), reg r34:V, reg sweep2:cls, reg x13:*, reg x14:V, reg p9:p(V +), reg scale5:*, reg scale6:V, reg p10:p(V +), reg __:*, reg __1:V, reg p11:p(V +), reg r38:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg scale7:*, reg scale8:V, reg is_numeric1:cls, reg r43:V, reg r44:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg scale9:*, reg scale10:V, reg as_numeric1:cls, reg r47:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg scale11:*, reg scale12:V, reg length1:cls, reg r51:V, reg nc2:*, reg nc3:V, reg r52:V, reg c9:L, reg sweep3:cls, reg x15:*, reg x16:V, reg p12:p(V +), reg scale13:*, reg scale14:V, reg p13:p(V +), reg __2:*, reg __3:V, reg p14:p(V +), reg r56:V, reg stop1:cls, reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg center15:*, reg center16:V, reg is_numeric2:cls, reg r60:V, reg c10:L, reg center17:*, reg center18:V, reg l:*, reg attr__:cls, reg r61:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg scale15:*, reg scale16:V, reg is_numeric3:cls, reg r64:V, reg c11:L, reg scale17:*, reg scale18:V, reg l1:*, reg attr__1:cls, reg r65:V, reg x17:*, reg x18:V |
    mkenv;
    st x = x;
    center_isMissing = missing.0(center);
    if center_isMissing then L0(TRUE) else L0(center);
  L0(center_orDefault):
    st center = center_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(TRUE) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
    as_matrix = ldf `as.matrix`;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_matrix(p);
    check L31() else D1();
  D1():
    deopt 3 [r1];
  L31():
    st x = r1;
    ncol = ldf ncol;
    check L32() else D2();
  D2():
    deopt 6 [];
  L32():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn ncol(p1);
    check L33() else D3();
  D3():
    deopt 8 [r3];
  L33():
    st nc = r3;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L37() else L3();
  L34():
    center1 = ld center;
    check L36() else D4();
  L35():
    r4 = dyn base(<sym center>);
    goto L2(r4);
  D4():
    deopt 11 [center1];
  L3():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L6():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L36():
    center2 = force? center1;
    checkMissing(center2);
    c = `is.logical`(center2);
    goto L2(c);
  L37():
    center3 = ld center;
    check L38() else D5();
  D5():
    deopt 14 [center3];
  L7(r14):
    r16 = `!`(r14);
    c3 = `as.logical`(r16);
    if c3 then L50() else L8();
  L13(r30):
    c6 = `as.logical`(r30);
    if c6 then L70() else L14();
  L38():
    center4 = force? center3;
    checkMissing(center4);
    c2 = `as.logical`(center4);
    if c2 then L39() else L4();
  L46():
    center7 = ld center;
    check L48() else D10();
  L47():
    r13 = dyn base1(<sym center>);
    goto L7(r13);
  L67():
    scale1 = ld scale;
    check L69() else D21();
  L68():
    r29 = dyn base4(<sym scale>);
    goto L13(r29);
  D10():
    deopt 36 [center7];
  D21():
    deopt 72 [scale1];
  L4():
    goto L5(NULL);
  L5(r11):
    goto L6();
  L8():
    goto L10();
  L10():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L14():
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L17():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L100() else L101();
  L39():
    colMeans = ldf colMeans;
    check L40() else D6();
  L48():
    center8 = force? center7;
    checkMissing(center8);
    is_numeric = ldf `is.numeric` in base;
    r15 = dyn is_numeric(center8);
    check L49() else D11();
  L50():
    sym2 = ldf `as.numeric`;
    base2 = ldf `as.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L69():
    scale2 = force? scale1;
    checkMissing(scale2);
    c5 = `is.logical`(scale2);
    goto L13(c5);
  L70():
    scale3 = ld scale;
    check L71() else D22();
  D6():
    deopt 17 [];
  D11():
    deopt 39 [r15];
  D22():
    deopt 75 [scale3];
  L9(r18):
    st center = r18;
    goto L10();
  L11(r22):
    nc = ld nc;
    check L60() else D16();
  L18(r42):
    r44 = `!`(r42);
    c8 = `as.logical`(r44);
    if c8 then L83() else L19();
  L24(r59):
    c10 = `as.logical`(r59);
    if c10 then L104() else L25();
  L40():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r7 = dyn colMeans[, `na.rm`](p2, TRUE);
    check L41() else D7();
  L49():
    goto L7(r15);
  L51():
    center9 = ld center;
    check L53() else D12();
  L52():
    r17 = dyn base2(<sym center>);
    goto L9(r17);
  L56():
    center11 = ld center;
    check L58() else D14();
  L57():
    r21 = dyn base3(<sym center>);
    goto L11(r21);
  L71():
    scale4 = force? scale3;
    checkMissing(scale4);
    c7 = `as.logical`(scale4);
    if c7 then L72() else L15();
  L79():
    scale7 = ld scale;
    check L81() else D27();
  L80():
    r41 = dyn base5(<sym scale>);
    goto L18(r41);
  L100():
    center15 = ld center;
    check L102() else D38();
  L101():
    r58 = dyn base8(<sym center>);
    goto L24(r58);
  D7():
    deopt 21 [r7];
  D12():
    deopt 43 [center9];
  D14():
    deopt 52 [center11];
  D16():
    deopt 55 [r22, nc];
  D27():
    deopt 101 [scale7];
  D38():
    deopt 139 [center15];
  L15():
    goto L16(NULL);
  L16(r39):
    goto L17();
  L19():
    goto L21();
  L21():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L25():
    goto L26();
  L26():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L41():
    st center = r7;
    sweep = ldf sweep;
    check L42() else D8();
  L53():
    center10 = force? center9;
    checkMissing(center10);
    as_numeric = ldf `as.numeric` in base;
    r19 = dyn as_numeric(center10);
    check L54() else D13();
  L58():
    center12 = force? center11;
    checkMissing(center12);
    length = ldf length in base;
    r23 = dyn length(center12);
    check L59() else D15();
  L60():
    nc1 = force? nc;
    checkMissing(nc1);
    r24 = `==`(r22, nc1);
    c4 = `as.logical`(r24);
    if c4 then L61() else L12();
  L72():
    r31 = clos inner2854634098;
    st f = r31;
    apply = ldf apply;
    check L73() else D23();
  L81():
    scale8 = force? scale7;
    checkMissing(scale8);
    is_numeric1 = ldf `is.numeric` in base;
    r43 = dyn is_numeric1(scale8);
    check L82() else D28();
  L83():
    sym6 = ldf `as.numeric`;
    base6 = ldf `as.numeric` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L102():
    center16 = force? center15;
    checkMissing(center16);
    is_numeric2 = ldf `is.numeric` in base;
    r60 = dyn is_numeric2(center16);
    check L103() else D39();
  L104():
    center17 = ld center;
    check L105() else D40();
  D8():
    deopt 24 [];
  D13():
    deopt 46 [r19];
  D15():
    deopt 55 [r23];
  D23():
    deopt 81 [];
  D28():
    deopt 104 [r43];
  D39():
    deopt 142 [r60];
  D40():
    deopt 143 [center17];
  L12():
    stop = ldf stop;
    check L65() else D19();
  L20(r46):
    st scale = r46;
    goto L21();
  L22(r50):
    nc2 = ld nc;
    check L93() else D33();
  L27(r63):
    c11 = `as.logical`(r63);
    if c11 then L113() else L28();
  L42():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      center5 = ld center;
      center6 = force? center5;
      checkMissing(center6);
      return center6;
    };
    r10 = dyn sweep[, , , `check.margin`](p3, 2, p4, FALSE);
    check L43() else D9();
  L54():
    goto L9(r19);
  L59():
    goto L11(r23);
  L61():
    sweep1 = ldf sweep;
    check L62() else D17();
  L73():
    p7 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p8 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r34 = dyn apply(p7, 2, p8);
    check L74() else D24();
  L82():
    goto L18(r43);
  L84():
    scale9 = ld scale;
    check L86() else D29();
  L85():
    r45 = dyn base6(<sym scale>);
    goto L20(r45);
  L89():
    scale11 = ld scale;
    check L91() else D31();
  L90():
    r49 = dyn base7(<sym scale>);
    goto L22(r49);
  L103():
    goto L24(r60);
  L105():
    center18 = force? center17;
    checkMissing(center18);
    l = ld x;
    attr__ = ldf `attr<-`;
    check L106() else D41();
  L109():
    scale15 = ld scale;
    check L111() else D43();
  L110():
    r62 = dyn base9(<sym scale>);
    goto L27(r62);
  D9():
    deopt 30 [r10];
  D17():
    deopt 59 [];
  D19():
    deopt 68 [];
  D24():
    deopt 85 [r34];
  D29():
    deopt 108 [scale9];
  D31():
    deopt 117 [scale11];
  D33():
    deopt 120 [r50, nc2];
  D41():
    deopt 146 [center18, l, center18];
  D43():
    deopt 155 [scale15];
  L28():
    goto L29();
  L29():
    x17 = ld x;
    check L118() else D48();
  L43():
    st x = r10;
    goto L5(r10);
  L62():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p6 = prom<V +>{
      center13 = ld center;
      center14 = force? center13;
      checkMissing(center14);
      return center14;
    };
    r27 = dyn sweep1[, , , `check.margin`](p5, 2, p6, FALSE);
    check L63() else D18();
  L65():
    r28 = dyn stop("length of 'center' must equal the number of columns of 'x'");
    check L66() else D20();
  L74():
    st scale = r34;
    sweep2 = ldf sweep;
    check L75() else D25();
  L86():
    scale10 = force? scale9;
    checkMissing(scale10);
    as_numeric1 = ldf `as.numeric` in base;
    r47 = dyn as_numeric1(scale10);
    check L87() else D30();
  L91():
    scale12 = force? scale11;
    checkMissing(scale12);
    length1 = ldf length in base;
    r51 = dyn length1(scale12);
    check L92() else D32();
  L93():
    nc3 = force? nc2;
    checkMissing(nc3);
    r52 = `==`(r50, nc3);
    c9 = `as.logical`(r52);
    if c9 then L94() else L23();
  L106():
    r61 = dyn attr__(l, NULL, "scaled:center", center18);
    check L107() else D42();
  L111():
    scale16 = force? scale15;
    checkMissing(scale16);
    is_numeric3 = ldf `is.numeric` in base;
    r64 = dyn is_numeric3(scale16);
    check L112() else D44();
  L113():
    scale17 = ld scale;
    check L114() else D45();
  D18():
    deopt 65 [r27];
  D20():
    deopt 70 [r28];
  D25():
    deopt 88 [];
  D30():
    deopt 111 [r47];
  D32():
    deopt 120 [r51];
  D42():
    deopt 149 [center18, r61];
  D44():
    deopt 158 [r64];
  D45():
    deopt 159 [scale17];
  D48():
    deopt 169 [x17];
  L23():
    stop1 = ldf stop;
    check L98() else D36();
  L63():
    st x = r27;
    goto L6();
  L66():
    goto L6();
  L75():
    p9 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p10 = prom<V +>{
      scale5 = ld scale;
      scale6 = force? scale5;
      checkMissing(scale6);
      return scale6;
    };
    p11 = prom<V +>{
      __ = ld `/`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r38 = dyn sweep2[, , , , `check.margin`](p9, 2, p10, p11, FALSE);
    check L76() else D26();
  L87():
    goto L20(r47);
  L92():
    goto L22(r51);
  L94():
    sweep3 = ldf sweep;
    check L95() else D34();
  L107():
    st x = r61;
    goto L26();
  L112():
    goto L27(r64);
  L114():
    scale18 = force? scale17;
    checkMissing(scale18);
    l1 = ld x;
    attr__1 = ldf `attr<-`;
    check L115() else D46();
  L118():
    x18 = force? x17;
    checkMissing(x18);
    popenv;
    return x18;
  D26():
    deopt 95 [r38];
  D34():
    deopt 124 [];
  D36():
    deopt 134 [];
  D46():
    deopt 162 [scale18, l1, scale18];
  L76():
    st x = r38;
    goto L16(r38);
  L95():
    p12 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p13 = prom<V +>{
      scale13 = ld scale;
      scale14 = force? scale13;
      checkMissing(scale14);
      return scale14;
    };
    p14 = prom<V +>{
      __2 = ld `/`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r56 = dyn sweep3[, , , , `check.margin`](p12, 2, p13, p14, FALSE);
    check L96() else D35();
  L98():
    r57 = dyn stop1("length of 'scale' must equal the number of columns of 'x'");
    check L99() else D37();
  L115():
    r65 = dyn attr__1(l1, NULL, "scaled:scale", scale18);
    check L116() else D47();
  D35():
    deopt 131 [r56];
  D37():
    deopt 136 [r57];
  D47():
    deopt 165 [scale18, r65];
  L96():
    st x = r56;
    goto L17();
  L99():
    goto L17();
  L116():
    st x = r65;
    goto L29();
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg v1:*, reg v2:V, reg c:L, reg v4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg v7:V, reg r1:V, reg v8:*, reg v9:V, reg is_na:cls, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg v10:*, reg v11:V, reg r9:V, reg sum:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg r20:V, reg v12:*, reg v13:V, reg length:cls, reg r21:V, reg r22:V, reg max:cls, reg r23:V, reg r24:V, reg r25:V |
    mkenv;
    st v = v;
    v1 = ld v;
    check L6() else D0();
  D0():
    deopt 0 [v1];
  L6():
    v2 = force? v1;
    checkMissing(v2);
    c = `is.object`(v2);
    if c then L7() else L8(v2);
  L0(dx1):
    st v = dx1;
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L7():
    dr = tryDispatchBuiltin.1("[", v2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(v4):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(v7, r1):
    r3 = `!`(r1);
    __ = ldf `[` in base;
    r4 = dyn __(v7, r3);
    goto L0(r4);
  L2(r6):
    popenv;
    return r6;
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    v8 = ld v;
    check L12() else D1();
  L11():
    r = dyn base(<sym v>);
    goto L1(v4, r);
  L14():
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r5 = dyn base1(<lang `/`(sum(`^`(v, 2.0)), max(1.0, `-`(length(v), 1)))>);
    goto L2(r5);
  D1():
    deopt 4 [v4, v8];
  L3(r8):
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L12():
    v9 = force? v8;
    checkMissing(v9);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(v9);
    check L13() else D2();
  L16():
    v10 = ld v;
    check L18() else D3();
  L17():
    r7 = dyn base2(<lang `^`(v, 2.0)>);
    goto L3(r7);
  D2():
    deopt 7 [v4, r2];
  D3():
    deopt 14 [v10];
  L4(r14, r15):
    r24 = `/`(r14, r15);
    r25 = sqrt(r24);
    goto L2(r25);
  L13():
    goto L1(v4, r2);
  L18():
    v11 = force? v10;
    checkMissing(v11);
    r9 = `^`(v11, 2.0);
    sum = ldf sum in base;
    r10 = dyn sum(r9);
    check L19() else D4();
  L20():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L22() else L23();
  L21():
    r13 = dyn base3(1.0, <lang `-`(length(v), 1)>);
    goto L4(r8, r13);
  D4():
    deopt 19 [r10];
  L5(r19, r20):
    r22 = `-`(r20, 1);
    max = ldf max in base;
    r23 = dyn max(1.0, r22);
    check L26() else D7();
  L19():
    goto L3(r10);
  L22():
    v12 = ld v;
    check L24() else D5();
  L23():
    r18 = dyn base4(<sym v>);
    goto L5(r8, r18);
  D5():
    deopt 24 [r8, v12];
  D7():
    deopt 31 [r19, r23];
  L24():
    v13 = force? v12;
    checkMissing(v13);
    length = ldf length in base;
    r21 = dyn length(v13);
    check L25() else D6();
  L26():
    goto L4(r19, r23);
  D6():
    deopt 27 [r8, r21];
  L25():
    goto L5(r8, r21);
  }
}