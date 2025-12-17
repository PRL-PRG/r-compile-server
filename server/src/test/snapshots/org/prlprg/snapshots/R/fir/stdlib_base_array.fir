fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg as_array:cls, reg letters:*, reg letters1:V, reg p:p(V +), reg r4:V, reg dim:cls, reg r5:V, reg array:cls, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p2:p(V +), reg r11:V |
    mkenv;
    r = clos inner648887954;
    st array = r;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    array = ldf array;
    check L6() else D3();
  L1():
    as_array = ldf `as.array`;
    check L3() else D0();
  L2():
    r1 = dyn base(<lang as.array(letters)>);
    goto L0();
  D0():
    deopt 6 [];
  D3():
    deopt 12 [];
  L3():
    p = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r4 = dyn as_array(p);
    check L4() else D1();
  L6():
    p1 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c(2.0, 4.0);
      goto L0(r9);
    L2():
      r7 = dyn base1(2.0, 4.0);
      goto L0(r7);
    };
    r11 = dyn array(p1, p2);
    check L7() else D4();
  D1():
    deopt 8 [r4];
  D4():
    deopt 15 [r11];
  L4():
    dim = ldf dim in base;
    r5 = dyn dim(r4);
    check L5() else D2();
  L7():
    popenv;
    return r11;
  D2():
    deopt 10 [r5];
  L5():
    goto L0();
  }
}
fun inner648887954(data, dim, dimnames) {
  (reg data:*, reg dim:*, reg dimnames:*) -+> V { var data:*, reg data_isMissing:L, reg data_orDefault:*, var dim:*, reg dim_isMissing:L, reg dim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg data1:*, reg data2:V, reg length:cls, reg r2:V, reg p:p(V +), var dimnames:*, reg dimnames_isMissing:L, reg dimnames_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg data3:*, reg data4:V, reg is_atomic:cls, reg r6:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg data5:*, reg data6:V, reg c6:L, reg r9:V, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg data7:*, reg data8:V, reg dim1:*, reg dim2:V, reg dimnames1:*, reg dimnames2:V, reg array:cls, reg r12:V, reg as_vector:cls, reg data9:*, reg data10:V, reg p1:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg data11:*, reg data12:V, reg c11:L, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg dim3:*, reg dim4:V, reg as_integer:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg dim5:*, reg dim6:V, reg length1:cls, reg r24:V, reg r25:V, reg c13:L, reg stop:cls, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg dim7:*, reg dim8:V, reg prod:cls, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg data13:*, reg data14:V, reg length2:cls, reg r33:V, reg vl:*, reg vl1:V, reg r34:V, reg c14:L, reg vl2:*, reg vl3:V, reg _Machine:*, reg _Machine1:V, reg c15:L, reg vl5:V, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg vl7:V, reg dx1:V, reg r35:V, reg r36:V, reg c16:L, reg stop1:cls, reg r37:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r39:V, reg r40:V, reg data15:*, reg data16:V, reg vl8:*, reg vl9:V, reg rep_len:cls, reg r41:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg dim9:*, reg dim10:V, reg length3:cls, reg r45:V, reg c17:L, reg dim11:*, reg dim12:V, reg l:*, reg dim__:cls, reg r46:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r47:V, reg r48:V, reg dimnames3:*, reg dimnames4:V, reg is_list:cls, reg r49:V, reg c18:L, reg c20:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r50:V, reg c23:L, reg r51:V, reg dimnames5:*, reg dimnames6:V, reg length4:cls, reg r52:V, reg c24:L, reg c25:V, reg c27:L, reg dimnames7:*, reg dimnames8:V, reg l1:*, reg dimnames__:cls, reg r53:V, reg data17:*, reg data18:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r54:V, reg r55:V, reg data19:*, reg data20:V, reg dim14:*, reg dim15:V, reg dimnames10:*, reg dimnames11:V, reg array1:cls, reg r56:V |
    mkenv;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NA_LGL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    dim_isMissing = missing.0(dim);
    if dim_isMissing then L1() else L2(dim);
  L1():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      length = ldf length in base;
      r2 = dyn length(data2);
      goto L0(r2);
    L2():
      r = dyn base(<sym data>);
      goto L0(r);
    };
    goto L2(p);
  L2(dim_orDefault):
    st dim = dim_orDefault;
    dimnames_isMissing = missing.0(dimnames);
    if dimnames_isMissing then L3(NULL) else L3(dimnames);
  L3(dimnames_orDefault):
    st dimnames = dimnames_orDefault;
    sym1 = ldf `is.atomic`;
    base1 = ldf `is.atomic` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L4(r5):
    c = `as.logical`(r5);
    if c then L36() else L5(c);
  L32():
    data3 = ld data;
    check L34() else D0();
  L33():
    r4 = dyn base1(<sym data>);
    goto L4(r4);
  D0():
    deopt 2 [data3];
  L5(c2):
    c10 = `as.logical`(c2);
    if c10 then L41() else L7();
  L34():
    data4 = force? data3;
    checkMissing(data4);
    is_atomic = ldf `is.atomic` in base;
    r6 = dyn is_atomic(data4);
    check L35() else D1();
  L36():
    sym2 = ldf `is.object`;
    base2 = ldf `is.object` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  D1():
    deopt 5 [r6];
  L6(c5, r8):
    r9 = `!`(r8);
    c7 = `as.logical`(r9);
    c8 = `&&`(c5, c7);
    goto L5(c8);
  L7():
    as_vector = ldf `as.vector`;
    check L50() else D7();
  L35():
    goto L4(r6);
  L37():
    data5 = ld data;
    check L39() else D2();
  L38():
    r7 = dyn base2(<sym data>);
    goto L6(c, r7);
  L41():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D2():
    deopt 7 [c, data5];
  D7():
    deopt 26 [];
  L8(r11):
    popenv;
    return r11;
  L39():
    data6 = force? data5;
    checkMissing(data6);
    c6 = `is.object`(data6);
    goto L6(c, c6);
  L42():
    data7 = ld data;
    check L44() else D3();
  L43():
    r10 = dyn base3(<lang array(data, dim, dimnames)>);
    goto L8(r10);
  L50():
    p1 = prom<V +>{
      data9 = ld data;
      data10 = force? data9;
      checkMissing(data10);
      return data10;
    };
    r16 = dyn as_vector(p1);
    check L51() else D8();
  D3():
    deopt 14 [data7];
  D8():
    deopt 28 [r16];
  L44():
    data8 = force? data7;
    checkMissing(data8);
    dim1 = ld dim;
    check L45() else D4();
  L51():
    st data = r16;
    sym4 = ldf `is.object`;
    base4 = ldf `is.object` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D4():
    deopt 16 [dim1];
  L10(r18):
    c12 = `as.logical`(r18);
    if c12 then L55() else L11();
  L45():
    dim2 = force? dim1;
    checkMissing(dim2);
    dimnames1 = ld dimnames;
    check L46() else D5();
  L52():
    data11 = ld data;
    check L54() else D9();
  L53():
    r17 = dyn base4(<sym data>);
    goto L10(r17);
  D5():
    deopt 18 [dimnames1];
  D9():
    deopt 31 [data11];
  L11():
    sym13 = ldf `.Internal`;
    base13 = ldf `.Internal` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L120() else L121();
  L46():
    dimnames2 = force? dimnames1;
    checkMissing(dimnames2);
    array = ldf array in base;
    r12 = dyn array(data8, dim2, dimnames2);
    check L47() else D6();
  L54():
    data12 = force? data11;
    checkMissing(data12);
    c11 = `is.object`(data12);
    goto L10(c11);
  L55():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  D6():
    deopt 21 [r12];
  L12(r20):
    st dim = r20;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  L31(r55):
    popenv;
    return r55;
  L47():
    goto L8(r12);
  L56():
    dim3 = ld dim;
    check L58() else D10();
  L57():
    r19 = dyn base5(<sym dim>);
    goto L12(r19);
  L120():
    data19 = ld data;
    check L122() else D41();
  L121():
    r54 = dyn base13(<lang array(data, dim, dimnames)>);
    goto L31(r54);
  D10():
    deopt 36 [dim3];
  D41():
    deopt 132 [data19];
  L13(r23):
    r25 = `!`(r23);
    c13 = `as.logical`(r25);
    if c13 then L64() else L14();
  L58():
    dim4 = force? dim3;
    checkMissing(dim4);
    as_integer = ldf `as.integer` in base;
    r21 = dyn as_integer(dim4);
    check L59() else D11();
  L60():
    dim5 = ld dim;
    check L62() else D12();
  L61():
    r22 = dyn base6(<sym dim>);
    goto L13(r22);
  L122():
    data20 = force? data19;
    checkMissing(data20);
    dim14 = ld dim;
    check L123() else D42();
  D11():
    deopt 39 [r21];
  D12():
    deopt 43 [dim5];
  D42():
    deopt 134 [dim14];
  L14():
    goto L15();
  L15():
    sym7 = ldf prod;
    base7 = ldf prod in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L59():
    goto L12(r21);
  L62():
    dim6 = force? dim5;
    checkMissing(dim6);
    length1 = ldf length in base;
    r24 = dyn length1(dim6);
    check L63() else D13();
  L64():
    stop = ldf stop;
    check L65() else D14();
  L123():
    dim15 = force? dim14;
    checkMissing(dim15);
    dimnames10 = ld dimnames;
    check L124() else D43();
  D13():
    deopt 46 [r24];
  D14():
    deopt 49 [];
  D43():
    deopt 136 [dimnames10];
  L16(r29):
    st vl = r29;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  L63():
    goto L13(r24);
  L65():
    r26 = dyn stop("'dim' cannot be of length 0");
    check L66() else D15();
  L68():
    dim7 = ld dim;
    check L70() else D16();
  L69():
    r28 = dyn base7(<sym dim>);
    goto L16(r28);
  L124():
    dimnames11 = force? dimnames10;
    checkMissing(dimnames11);
    array1 = ldf array in base;
    r56 = dyn array1(data20, dim15, dimnames11);
    check L125() else D44();
  D15():
    deopt 51 [r26];
  D16():
    deopt 56 [dim7];
  D44():
    deopt 139 [r56];
  L17(r32):
    vl = ld vl;
    check L76() else D20();
  L66():
    goto L15();
  L70():
    dim8 = force? dim7;
    checkMissing(dim8);
    prod = ldf prod in base;
    r30 = dyn prod(dim8);
    check L71() else D17();
  L72():
    data13 = ld data;
    check L74() else D18();
  L73():
    r31 = dyn base8(<sym data>);
    goto L17(r31);
  L125():
    goto L31(r56);
  D17():
    deopt 59 [r30];
  D18():
    deopt 63 [data13];
  D20():
    deopt 66 [r32, vl];
  L71():
    goto L16(r30);
  L74():
    data14 = force? data13;
    checkMissing(data14);
    length2 = ldf length in base;
    r33 = dyn length2(data14);
    check L75() else D19();
  L76():
    vl1 = force? vl;
    checkMissing(vl1);
    r34 = `!=`(r32, vl1);
    c14 = `as.logical`(r34);
    if c14 then L77() else L18();
  D19():
    deopt 66 [r33];
  L18():
    goto L22();
  L22():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L94() else L95();
  L75():
    goto L17(r33);
  L77():
    vl2 = ld vl;
    check L78() else D21();
  D21():
    deopt 69 [vl2];
  L23(r44):
    c17 = `as.logical`(r44);
    if c17 then L98() else L24();
  L78():
    vl3 = force? vl2;
    checkMissing(vl3);
    _Machine = ld `.Machine`;
    check L79() else D22();
  L94():
    dim9 = ld dim;
    check L96() else D28();
  L95():
    r43 = dyn base10(<sym dim>);
    goto L23(r43);
  D22():
    deopt 70 [vl3, _Machine];
  D28():
    deopt 93 [dim9];
  L24():
    goto L25();
  L25():
    sym11 = ldf `is.list`;
    base11 = ldf `is.list` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L103() else L104();
  L79():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c15 = `is.object`(_Machine1);
    if c15 then L81() else L82(vl3, _Machine1);
  L96():
    dim10 = force? dim9;
    checkMissing(dim10);
    length3 = ldf length in base;
    r45 = dyn length3(dim10);
    check L97() else D29();
  L98():
    dim11 = ld dim;
    check L99() else D30();
  D29():
    deopt 96 [r45];
  D30():
    deopt 97 [dim11];
  L26(r48):
    c18 = `as.logical`(r48);
    if c18 then L107() else L27(c18);
  L80(vl7, dx1):
    r36 = `>`(vl7, dx1);
    c16 = `as.logical`(r36);
    if c16 then L84() else L19();
  L81():
    dr = tryDispatchBuiltin.1("$", _Machine1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L83() else L82(vl3, dr);
  L82(vl5, _Machine3):
    r35 = `$`(_Machine3, <sym integer.max>);
    goto L80(vl5, r35);
  L97():
    goto L23(r45);
  L99():
    dim12 = force? dim11;
    checkMissing(dim12);
    l = ld data;
    dim__ = ldf `dim<-`;
    check L100() else D31();
  L103():
    dimnames3 = ld dimnames;
    check L105() else D33();
  L104():
    r47 = dyn base11(<sym dimnames>);
    goto L26(r47);
  D31():
    deopt 100 [dim12, l, dim12];
  D33():
    deopt 108 [dimnames3];
  L19():
    goto L20();
  L20():
    sym9 = ldf rep_len;
    base9 = ldf rep_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L88() else L89();
  L27(c20):
    c27 = `as.logical`(c20);
    if c27 then L113() else L29();
  L83():
    dx = getTryDispatchBuiltinValue(dr);
    goto L80(vl3, dx);
  L84():
    stop1 = ldf stop;
    check L85() else D23();
  L100():
    r46 = dyn dim__(l, NULL, dim12);
    check L101() else D32();
  L105():
    dimnames4 = force? dimnames3;
    checkMissing(dimnames4);
    is_list = ldf `is.list` in base;
    r49 = dyn is_list(dimnames4);
    check L106() else D34();
  L107():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L108() else L109();
  D23():
    deopt 75 [];
  D32():
    deopt 102 [dim12, r46];
  D34():
    deopt 111 [r49];
  L21(r40):
    st data = r40;
    goto L22();
  L28(c23, r51):
    c24 = `as.logical`(r51);
    c25 = `&&`(c23, c24);
    goto L27(c25);
  L29():
    goto L30();
  L30():
    data17 = ld data;
    check L118() else D40();
  L85():
    r37 = dyn stop1("'dim' specifies too large an array");
    check L86() else D24();
  L88():
    data15 = ld data;
    check L90() else D25();
  L89():
    r39 = dyn base9(<sym data>, <sym vl>);
    goto L21(r39);
  L101():
    st data = r46;
    goto L25();
  L106():
    goto L26(r49);
  L108():
    dimnames5 = ld dimnames;
    check L110() else D35();
  L109():
    r50 = dyn base12(<sym dimnames>);
    goto L28(c18, r50);
  L113():
    dimnames7 = ld dimnames;
    check L114() else D37();
  D24():
    deopt 77 [r37];
  D25():
    deopt 82 [data15];
  D35():
    deopt 114 [c18, dimnames5];
  D37():
    deopt 119 [dimnames7];
  D40():
    deopt 128 [data17];
  L86():
    goto L20();
  L90():
    data16 = force? data15;
    checkMissing(data16);
    vl8 = ld vl;
    check L91() else D26();
  L110():
    dimnames6 = force? dimnames5;
    checkMissing(dimnames6);
    length4 = ldf length in base;
    r52 = dyn length4(dimnames6);
    check L111() else D36();
  L114():
    dimnames8 = force? dimnames7;
    checkMissing(dimnames8);
    l1 = ld data;
    dimnames__ = ldf `dimnames<-`;
    check L115() else D38();
  L118():
    data18 = force? data17;
    checkMissing(data18);
    popenv;
    return data18;
  D26():
    deopt 84 [vl8];
  D36():
    deopt 117 [c18, r52];
  D38():
    deopt 122 [dimnames8, l1, dimnames8];
  L91():
    vl9 = force? vl8;
    checkMissing(vl9);
    rep_len = ldf rep_len in base;
    r41 = dyn rep_len(data16, vl9);
    check L92() else D27();
  L111():
    goto L28(c18, r52);
  L115():
    r53 = dyn dimnames__(l1, NULL, dimnames8);
    check L116() else D39();
  D27():
    deopt 87 [r41];
  D39():
    deopt 124 [dimnames8, r53];
  L92():
    goto L21(r41);
  L116():
    st data = r53;
    goto L30();
  }
}