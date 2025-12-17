fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg p:p(V +), reg r2:V, reg marginSums:cls, reg m:*, reg m1:V, reg p1:p(V +), reg r4:V, reg marginSums1:cls, reg m2:*, reg m3:V, reg p2:p(V +), reg r6:V, reg as_data_frame:cls, reg UCBAdmissions:*, reg UCBAdmissions1:V, reg p3:p(V +), reg r8:V, reg xtabs:cls, reg __:cls, reg r9:V, reg p4:p(V +), reg DF:*, reg DF1:V, reg p5:p(V +), reg r12:V, reg tbl:*, reg tbl1:V, reg marginSums2:cls, reg tbl2:*, reg tbl3:V, reg p6:p(V +), reg r14:V, reg rowSums:cls, reg tbl4:*, reg tbl5:V, reg p7:p(V +), reg r16:V |
    mkenv;
    r = clos inner3787028234;
    st marginSums = r;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r2 = dyn matrix(p, 2.0);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    st m = r2;
    marginSums = ldf marginSums;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r4 = dyn marginSums(p1, 1.0);
    check L3() else D3();
  D3():
    deopt 13 [r4];
  L3():
    marginSums1 = ldf marginSums;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p2 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r6 = dyn marginSums1(p2, 2.0);
    check L5() else D5();
  D5():
    deopt 18 [r6];
  L5():
    as_data_frame = ldf `as.data.frame`;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p3 = prom<V +>{
      UCBAdmissions = ld UCBAdmissions;
      UCBAdmissions1 = force? UCBAdmissions;
      checkMissing(UCBAdmissions1);
      return UCBAdmissions1;
    };
    r8 = dyn as_data_frame(p3);
    check L7() else D7();
  D7():
    deopt 22 [r8];
  L7():
    st DF = r8;
    xtabs = ldf xtabs;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p4 = prom<V +>{
      __ = ldf `~` in base;
      r9 = dyn __(<sym Freq>, <lang `+`(Gender, Admit)>);
      return r9;
    };
    p5 = prom<V +>{
      DF = ld DF;
      DF1 = force? DF;
      checkMissing(DF1);
      return DF1;
    };
    r12 = dyn xtabs(p4, p5);
    check L9() else D9();
  D9():
    deopt 28 [r12];
  L9():
    st tbl = r12;
    tbl = ld tbl;
    check L10() else D10();
  D10():
    deopt 30 [tbl];
  L10():
    tbl1 = force? tbl;
    checkMissing(tbl1);
    marginSums2 = ldf marginSums;
    check L11() else D11();
  D11():
    deopt 33 [];
  L11():
    p6 = prom<V +>{
      tbl2 = ld tbl;
      tbl3 = force? tbl2;
      checkMissing(tbl3);
      return tbl3;
    };
    r14 = dyn marginSums2(p6, "Gender");
    check L12() else D12();
  D12():
    deopt 36 [r14];
  L12():
    rowSums = ldf rowSums;
    check L13() else D13();
  D13():
    deopt 38 [];
  L13():
    p7 = prom<V +>{
      tbl4 = ld tbl;
      tbl5 = force? tbl4;
      checkMissing(tbl5);
      return tbl5;
    };
    r16 = dyn rowSums(p7);
    check L14() else D14();
  D14():
    deopt 40 [r16];
  L14():
    popenv;
    return r16;
  }
}
fun inner3787028234(x, margin) {
  (reg x:*, reg margin:*) -+> V { var x:*, var margin:*, reg margin_isMissing:L, reg margin_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_array:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r6:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg length:cls, reg r9:V, reg l:*, reg dim__:cls, reg r10:V, reg r11:V, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg margin1:*, reg margin2:V, reg length1:cls, reg r16:V, reg c2:L, reg apply:cls, reg x7:*, reg x8:V, reg p:p(V +), reg margin3:*, reg margin4:V, reg p1:p(V +), reg sum:*, reg sum1:V, reg p2:p(V +), reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg z:*, reg z1:V, reg is_array1:cls, reg r23:V, reg r24:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg margin5:*, reg margin6:V, reg c4:L, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg margin7:*, reg margin8:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg x9:*, reg x10:V, reg dimnames:cls, reg r33:V, reg names:cls, reg r34:V, reg match:cls, reg r35:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg x11:*, reg x12:V, reg dim:cls, reg r39:V, reg c6:L, reg r41:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg margin9:*, reg margin10:V, reg __:cls, reg r42:V, reg l1:*, reg dim__1:cls, reg r43:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r44:V, reg r45:V, reg x13:*, reg x14:V, reg dimnames1:cls, reg r46:V, reg c7:L, reg r48:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg margin11:*, reg margin12:V, reg __1:cls, reg r49:V, reg l2:*, reg dimnames__:cls, reg r50:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg x15:*, reg x16:V, reg oldClass:cls, reg r53:V, reg l3:*, reg class__:cls, reg r54:V, reg z2:*, reg z3:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r55:V, reg r56:V, reg x17:*, reg x18:V, reg sum2:cls, reg r57:V |
    mkenv;
    st x = x;
    margin_isMissing = missing.0(margin);
    if margin_isMissing then L0(NULL) else L0(margin);
  L0(margin_orDefault):
    st margin = margin_orDefault;
    sym = ldf `is.array`;
    base = ldf `is.array` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L29() else L2();
  L25():
    x1 = ld x;
    check L27() else D0();
  L26():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    goto L7();
  L7():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L27():
    x2 = force? x1;
    checkMissing(x2);
    is_array = ldf `is.array` in base;
    r2 = dyn is_array(x2);
    check L28() else D1();
  L29():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  D1():
    deopt 5 [r2];
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L34() else L4();
  L8(r15):
    c2 = `as.logical`(r15);
    if c2 then L49() else L9();
  L28():
    goto L1(r2);
  L30():
    x3 = ld x;
    check L32() else D2();
  L31():
    r4 = dyn base1(<sym x>);
    goto L3(r4);
  L45():
    margin1 = ld margin;
    check L47() else D10();
  L46():
    r14 = dyn base3(<sym margin>);
    goto L8(r14);
  D2():
    deopt 9 [x3];
  D10():
    deopt 32 [margin1];
  L4():
    stop = ldf stop;
    check L42() else D8();
  L6(r11):
    goto L7();
  L9():
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L102() else L103();
  L32():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(x4);
    check L33() else D3();
  L34():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L47():
    margin2 = force? margin1;
    checkMissing(margin2);
    length1 = ldf length in base;
    r16 = dyn length1(margin2);
    check L48() else D11();
  L49():
    apply = ldf apply;
    check L50() else D12();
  D3():
    deopt 12 [r6];
  D8():
    deopt 25 [];
  D11():
    deopt 35 [r16];
  D12():
    deopt 37 [];
  L5(r8):
    l = ld x;
    dim__ = ldf `dim<-`;
    check L39() else D6();
  L24(r56):
    popenv;
    return r56;
  L33():
    goto L3(r6);
  L35():
    x5 = ld x;
    check L37() else D4();
  L36():
    r7 = dyn base2(<sym x>);
    goto L5(r7);
  L42():
    r12 = dyn stop("'x' is not an array");
    check L43() else D9();
  L48():
    goto L8(r16);
  L50():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p1 = prom<V +>{
      margin3 = ld margin;
      margin4 = force? margin3;
      checkMissing(margin4);
      return margin4;
    };
    p2 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    r20 = dyn apply(p, p1, p2);
    check L51() else D13();
  L102():
    x17 = ld x;
    check L104() else D37();
  L103():
    r55 = dyn base12(<sym x>);
    goto L24(r55);
  D4():
    deopt 15 [x5];
  D6():
    deopt 20 [r8, l, r8];
  D9():
    deopt 27 [r12];
  D13():
    deopt 41 [r20];
  D37():
    deopt 120 [x17];
  L37():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r9 = dyn length(x6);
    check L38() else D5();
  L39():
    r10 = dyn dim__(l, NULL, r8);
    check L40() else D7();
  L43():
    goto L6(r12);
  L51():
    st z = r20;
    sym4 = ldf `is.array`;
    base4 = ldf `is.array` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L104():
    x18 = force? x17;
    checkMissing(x18);
    sum2 = ldf sum in base;
    r57 = dyn sum2(x18);
    check L105() else D38();
  D5():
    deopt 18 [r9];
  D7():
    deopt 22 [r8, r10];
  D38():
    deopt 123 [r57];
  L10(r22):
    r24 = `!`(r22);
    c3 = `as.logical`(r24);
    if c3 then L56() else L11();
  L38():
    goto L5(r9);
  L40():
    st x = r10;
    goto L6(r8);
  L52():
    z = ld z;
    check L54() else D14();
  L53():
    r21 = dyn base4(<sym z>);
    goto L10(r21);
  L105():
    goto L24(r57);
  D14():
    deopt 45 [z];
  L11():
    goto L22();
  L22():
    sym11 = ldf oldClass;
    base11 = ldf oldClass in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L94() else L95();
  L54():
    z1 = force? z;
    checkMissing(z1);
    is_array1 = ldf `is.array` in base;
    r23 = dyn is_array1(z1);
    check L55() else D15();
  L56():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  D15():
    deopt 48 [r23];
  L12(r26):
    c5 = `as.logical`(r26);
    if c5 then L60() else L13();
  L23(r52):
    l3 = ld z;
    class__ = ldf `class<-`;
    check L98() else D34();
  L55():
    goto L10(r23);
  L57():
    margin5 = ld margin;
    check L59() else D16();
  L58():
    r25 = dyn base5(<sym margin>);
    goto L12(r25);
  L94():
    x15 = ld x;
    check L96() else D32();
  L95():
    r51 = dyn base11(<sym x>);
    goto L23(r51);
  D16():
    deopt 51 [margin5];
  D32():
    deopt 107 [x15];
  D34():
    deopt 112 [r52, l3, r52];
  L13():
    goto L17();
  L17():
    sym9 = ldf dim;
    base9 = ldf dim in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L73() else L74();
  L59():
    margin6 = force? margin5;
    checkMissing(margin6);
    c4 = `is.character`(margin6);
    goto L12(c4);
  L60():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L96():
    x16 = force? x15;
    checkMissing(x16);
    oldClass = ldf oldClass in base;
    r53 = dyn oldClass(x16);
    check L97() else D33();
  L98():
    r54 = dyn class__(l3, NULL, r52);
    check L99() else D35();
  D33():
    deopt 110 [r53];
  D35():
    deopt 114 [r52, r54];
  L14(r28):
    st margin = r28;
    goto L17();
  L18(r38):
    c6 = `is.object`(r38);
    if c6 then L77() else L78(r38);
  L61():
    margin7 = ld margin;
    check L63() else D17();
  L62():
    r27 = dyn base6(<sym margin>, <lang names(dimnames(x))>);
    goto L14(r27);
  L73():
    x11 = ld x;
    check L75() else D22();
  L74():
    r37 = dyn base9(<sym x>);
    goto L18(r37);
  L97():
    goto L23(r53);
  L99():
    st z = r54;
    z2 = ld z;
    check L100() else D36();
  D17():
    deopt 56 [margin7];
  D22():
    deopt 77 [x11];
  D36():
    deopt 116 [z2];
  L19(dx1):
    l1 = ld z;
    dim__1 = ldf `dim<-`;
    check L81() else D25();
  L63():
    margin8 = force? margin7;
    checkMissing(margin8);
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  L75():
    x12 = force? x11;
    checkMissing(x12);
    dim = ldf dim in base;
    r39 = dyn dim(x12);
    check L76() else D23();
  L77():
    dr = tryDispatchBuiltin.1("[", r38);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L79() else L78(dr);
  L78(r41):
    margin9 = ld margin;
    check L80() else D24();
  L100():
    z3 = force? z2;
    checkMissing(z3);
    popenv;
    return z3;
  D23():
    deopt 80 [r39];
  D24():
    deopt 81 [r41, margin9];
  D25():
    deopt 85 [dx1, l1, dx1];
  L15(r30):
    match = ldf match in base;
    r35 = dyn match(margin8, r30, NA_INT, NULL);
    check L71() else D21();
  L64():
    sym8 = ldf dimnames;
    base8 = ldf dimnames in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L66() else L67();
  L65():
    r29 = dyn base7(<lang dimnames(x)>);
    goto L15(r29);
  L76():
    goto L18(r39);
  L79():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L80():
    margin10 = force? margin9;
    __ = ldf `[` in base;
    r42 = dyn __(r41, margin10);
    goto L19(r42);
  L81():
    r43 = dyn dim__1(l1, NULL, dx1);
    check L82() else D26();
  D21():
    deopt 71 [r35];
  D26():
    deopt 87 [dx1, r43];
  L16(r32):
    names = ldf names in base;
    r34 = dyn names(r32);
    check L70() else D20();
  L66():
    x9 = ld x;
    check L68() else D18();
  L67():
    r31 = dyn base8(<sym x>);
    goto L16(r31);
  L71():
    goto L14(r35);
  L82():
    st z = r43;
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L83() else L84();
  D18():
    deopt 62 [x9];
  D20():
    deopt 67 [r34];
  L20(r45):
    c7 = `is.object`(r45);
    if c7 then L87() else L88(r45);
  L68():
    x10 = force? x9;
    checkMissing(x10);
    dimnames = ldf dimnames in base;
    r33 = dyn dimnames(x10);
    check L69() else D19();
  L70():
    goto L15(r34);
  L83():
    x13 = ld x;
    check L85() else D27();
  L84():
    r44 = dyn base10(<sym x>);
    goto L20(r44);
  D19():
    deopt 65 [r33];
  D27():
    deopt 91 [x13];
  L21(dx3):
    l2 = ld z;
    dimnames__ = ldf `dimnames<-`;
    check L91() else D30();
  L69():
    goto L16(r33);
  L85():
    x14 = force? x13;
    checkMissing(x14);
    dimnames1 = ldf dimnames in base;
    r46 = dyn dimnames1(x14);
    check L86() else D28();
  L87():
    dr2 = tryDispatchBuiltin.1("[", r45);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L89() else L88(dr2);
  L88(r48):
    margin11 = ld margin;
    check L90() else D29();
  D28():
    deopt 94 [r46];
  D29():
    deopt 95 [r48, margin11];
  D30():
    deopt 99 [dx3, l2, dx3];
  L86():
    goto L20(r46);
  L89():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L90():
    margin12 = force? margin11;
    __1 = ldf `[` in base;
    r49 = dyn __1(r48, margin12);
    goto L21(r49);
  L91():
    r50 = dyn dimnames__(l2, NULL, dx3);
    check L92() else D31();
  D31():
    deopt 101 [dx3, r50];
  L92():
    st z = r50;
    goto L22();
  }
}