fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3069603236;
    st `as.data.frame.AsIs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3069603236(x, `row.names`, optional, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg as_data_frame_model_matrix:cls, reg x3:*, reg x4:V, reg p:p(V +), reg row_names1:*, reg row_names2:V, reg p1:p(V +), reg optional1:*, reg optional2:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg length1:cls, reg r13:V, reg deparse1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg row_names3:*, reg row_names4:V, reg c1:V, reg c2:L, reg nrows:*, reg nrows1:V, reg r21:V, reg c3:L, reg character:cls, reg r22:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg x7:*, reg x8:V, reg names:cls, reg r28:V, reg length2:cls, reg r29:V, reg nrows2:*, reg nrows3:V, reg r30:V, reg c4:L, reg c6:V, reg anyDuplicated:cls, reg row_names5:*, reg row_names6:V, reg p4:p(V +), reg r32:V, reg r33:V, reg c7:L, reg c8:V, reg c10:L, reg _set_row_names:cls, reg nrows4:*, reg nrows5:V, reg p5:p(V +), reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg row_names7:*, reg row_names8:V, reg c11:L, reg c12:L, reg c14:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg c17:L, reg r40:V, reg row_names9:*, reg row_names10:V, reg length3:cls, reg r41:V, reg r42:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg c26:L, reg r44:V, reg row_names11:*, reg row_names12:V, reg c27:L, reg c29:L, reg row_names14:V, reg dr:V, reg dc:L, reg dx:V, reg c31:L, reg dx1:V, reg __:cls, reg r45:V, reg is_na:cls, reg r46:V, reg c32:L, reg c33:V, reg c35:L, reg c37:V, reg rn1:*, reg rn2:V, reg r47:V, reg c38:L, reg c39:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg x9:*, reg x10:V, reg list:cls, reg r50:V, reg optional3:*, reg optional4:V, reg r51:V, reg c41:L, reg nm:*, reg nm1:V, reg l:*, reg names__:cls, reg r52:V, reg l1:*, reg class__:cls, reg r53:V, reg row_names15:*, reg row_names16:V, reg l2:*, reg attr__:cls, reg r54:V, reg value:*, reg value1:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L2(r1):
    r6 = `==`(r1, 2);
    c = `as.logical`(r6);
    if c then L32() else L4();
  L25():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L26():
    r = dyn base(<lang dim(x)>);
    goto L2(r);
  L3(r3):
    length = ldf length in base;
    r5 = dyn length(r3);
    check L31() else D2();
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L27():
    x1 = ld x;
    check L29() else D0();
  L28():
    r2 = dyn base1(<sym x>);
    goto L3(r2);
  L32():
    as_data_frame_model_matrix = ldf `as.data.frame.model.matrix`;
    check L33() else D3();
  D0():
    deopt 4 [x1];
  D2():
    deopt 9 [r5];
  D3():
    deopt 13 [];
  L5(r12):
    st nrows = r12;
    deparse1 = ldf deparse1;
    check L40() else D7();
  L29():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L30() else D1();
  L31():
    goto L2(r5);
  L33():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      row_names1 = ld `row.names`;
      row_names2 = force? row_names1;
      checkMissing(row_names2);
      return row_names2;
    };
    p2 = prom<V +>{
      optional1 = ld optional;
      optional2 = force? optional1;
      checkMissing(optional2);
      return optional2;
    };
    r10 = dyn as_data_frame_model_matrix(p, p1, p2);
    check L34() else D4();
  L36():
    x5 = ld x;
    check L38() else D5();
  L37():
    r11 = dyn base2(<sym x>);
    goto L5(r11);
  D1():
    deopt 7 [r4];
  D4():
    deopt 17 [r10];
  D5():
    deopt 20 [x5];
  D7():
    deopt 26 [];
  L30():
    goto L3(r4);
  L34():
    popenv;
    return r10;
  L38():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r13 = dyn length1(x6);
    check L39() else D6();
  L40():
    p3 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      substitute = ldf substitute in base;
      r16 = dyn substitute(<sym x>);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym x>);
      goto L0(r14);
    };
    r18 = dyn deparse1(p3);
    check L41() else D8();
  D6():
    deopt 23 [r13];
  D8():
    deopt 28 [r18];
  L39():
    goto L5(r13);
  L41():
    st nm = r18;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L6(r20):
    c2 = `as.logical`(r20);
    if c2 then L45() else L7();
  L42():
    row_names3 = ld `row.names`;
    check L44() else D9();
  L43():
    r19 = dyn base4(<sym row.names>);
    goto L6(r19);
  D9():
    deopt 31 [row_names3];
  L7():
    sym7 = ldf `is.integer`;
    base7 = ldf `is.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L14():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  L44():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    c1 = `==`(row_names4, NULL);
    goto L6(c1);
  L45():
    st autoRN = FALSE;
    nrows = ld nrows;
    check L46() else D10();
  D10():
    deopt 37 [nrows];
  L15(r38):
    c12 = `as.logical`(r38);
    if c12 then L71() else L16(c12);
  L22(r49):
    st value = r49;
    optional3 = ld optional;
    check L93() else D29();
  L46():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r21 = `==`(nrows1, 0);
    c3 = `as.logical`(r21);
    if c3 then L47() else L8();
  L68():
    row_names7 = ld `row.names`;
    check L70() else D21();
  L69():
    r37 = dyn base7(<sym row.names>);
    goto L15(r37);
  L89():
    x9 = ld x;
    check L91() else D27();
  L90():
    r48 = dyn base10(<sym x>);
    goto L22(r48);
  D21():
    deopt 75 [row_names7];
  D27():
    deopt 106 [x9];
  D29():
    deopt 111 [optional3];
  L8():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L9(r23):
    goto L14();
  L16(c14):
    c21 = `as.logical`(c14);
    if c21 then L77() else L18(c21);
  L47():
    character = ldf character;
    check L48() else D11();
  L70():
    row_names8 = force? row_names7;
    checkMissing(row_names8);
    c11 = `is.integer`(row_names8);
    goto L15(c11);
  L71():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L72() else L73();
  L91():
    x10 = force? x9;
    checkMissing(x10);
    list = ldf list in base;
    r50 = dyn list(x10);
    check L92() else D28();
  L93():
    optional4 = force? optional3;
    checkMissing(optional4);
    r51 = `!`(optional4);
    c41 = `as.logical`(r51);
    if c41 then L94() else L23();
  D11():
    deopt 42 [];
  D28():
    deopt 109 [r50];
  L10(r25):
    nrows2 = ld nrows;
    check L58() else D16();
  L17(c17, r40):
    r42 = `==`(r40, 2);
    c18 = `as.logical`(r42);
    c19 = `&&`(c17, c18);
    goto L16(c19);
  L18(c23):
    c35 = `as.logical`(c23);
    if c35 then L86() else L21(c35);
  L23():
    goto L24();
  L24():
    l1 = ld value;
    class__ = ldf `class<-`;
    check L99() else D33();
  L48():
    r22 = dyn character();
    check L49() else D12();
  L51():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L52():
    r24 = dyn base5(<lang `<-`(row.names, names(x))>);
    goto L10(r24);
  L72():
    row_names9 = ld `row.names`;
    check L74() else D22();
  L73():
    r39 = dyn base8(<sym row.names>);
    goto L17(c12, r39);
  L77():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L78() else L79();
  L92():
    goto L22(r50);
  L94():
    nm = ld nm;
    check L95() else D30();
  D12():
    deopt 43 [r22];
  D16():
    deopt 55 [r25, nrows2];
  D22():
    deopt 80 [c12, row_names9];
  D30():
    deopt 114 [nm];
  D33():
    deopt 126 ["data.frame", l1, "data.frame"];
  L11(r27):
    st `row.names` = r27;
    length2 = ldf length in base;
    r29 = dyn length2(r27);
    check L57() else D15();
  L19(c26, r44):
    c32 = `as.logical`(r44);
    c33 = `&&`(c26, c32);
    goto L18(c33);
  L21(c37):
    st autoRN = c37;
    goto L14();
  L49():
    st `row.names` = r22;
    goto L9(r22);
  L53():
    x7 = ld x;
    check L55() else D13();
  L54():
    r26 = dyn base6(<sym x>);
    goto L11(r26);
  L58():
    nrows3 = force? nrows2;
    checkMissing(nrows3);
    r30 = `==`(r25, nrows3);
    c4 = `as.logical`(r30);
    if c4 then L59() else L12(c4);
  L74():
    row_names10 = force? row_names9;
    checkMissing(row_names10);
    length3 = ldf length in base;
    r41 = dyn length3(row_names10);
    check L75() else D23();
  L78():
    row_names11 = ld `row.names`;
    check L80() else D24();
  L79():
    r43 = dyn base9(<lang `<-`(rn1, `[[`(row.names, 1))>);
    goto L19(c21, r43);
  L86():
    rn1 = ld rn1;
    check L87() else D26();
  L95():
    nm1 = force? nm;
    checkMissing(nm1);
    l = ld value;
    names__ = ldf `names<-`;
    check L96() else D31();
  L99():
    r53 = dyn class__(l1, NULL, "data.frame");
    check L100() else D34();
  D13():
    deopt 49 [x7];
  D15():
    deopt 55 [r29];
  D23():
    deopt 83 [c12, r41];
  D24():
    deopt 89 [c21, row_names11];
  D26():
    deopt 98 [c35, rn1];
  D31():
    deopt 117 [nm1, l, nm1];
  D34():
    deopt 128 ["data.frame", r53];
  L12(c6):
    c10 = `as.logical`(c6);
    if c10 then L63() else L13();
  L55():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r28 = dyn names(x8);
    check L56() else D14();
  L57():
    goto L10(r29);
  L59():
    anyDuplicated = ldf anyDuplicated;
    check L60() else D17();
  L75():
    goto L17(c12, r41);
  L80():
    row_names12 = force? row_names11;
    checkMissing(row_names12);
    c27 = `is.object`(row_names12);
    if c27 then L81() else L82(c21, row_names12);
  L87():
    rn2 = force? rn1;
    checkMissing(rn2);
    r47 = `<`(rn2, 0.0);
    c38 = `as.logical`(r47);
    c39 = `&&`(c35, c38);
    goto L21(c39);
  L96():
    r52 = dyn names__(l, NULL, nm1);
    check L97() else D32();
  L100():
    st value = r53;
    row_names15 = ld `row.names`;
    check L101() else D35();
  D14():
    deopt 52 [r28];
  D17():
    deopt 59 [c4];
  D32():
    deopt 119 [nm1, r52];
  D35():
    deopt 130 [row_names15];
  L13():
    st autoRN = TRUE;
    _set_row_names = ldf `.set_row_names`;
    check L65() else D19();
  L20(c31, dx1):
    st rn1 = dx1;
    is_na = ldf `is.na` in base;
    r46 = dyn is_na(dx1);
    check L84() else D25();
  L56():
    goto L11(r28);
  L60():
    p4 = prom<V +>{
      row_names5 = ld `row.names`;
      row_names6 = force? row_names5;
      checkMissing(row_names6);
      return row_names6;
    };
    r32 = dyn anyDuplicated(p4);
    check L61() else D18();
  L63():
    goto L9(NULL);
  L81():
    dr = tryDispatchBuiltin.1("[[", row_names12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L83() else L82(c21, dr);
  L82(c29, row_names14):
    __ = ldf `[[` in base;
    r45 = dyn __(row_names14, 1);
    goto L20(c29, r45);
  L97():
    st value = r52;
    goto L24();
  L101():
    row_names16 = force? row_names15;
    checkMissing(row_names16);
    l2 = ld value;
    attr__ = ldf `attr<-`;
    check L102() else D36();
  D18():
    deopt 61 [c4, r32];
  D19():
    deopt 70 [];
  D25():
    deopt 96 [c31, r46];
  D36():
    deopt 133 [row_names16, l2, row_names16];
  L61():
    r33 = `!`(r32);
    c7 = `as.logical`(r33);
    c8 = `&&`(c4, c7);
    goto L12(c8);
  L65():
    p5 = prom<V +>{
      nrows4 = ld nrows;
      nrows5 = force? nrows4;
      checkMissing(nrows5);
      return nrows5;
    };
    r35 = dyn _set_row_names(p5);
    check L66() else D20();
  L83():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(c21, dx);
  L84():
    goto L19(c31, r46);
  L102():
    r54 = dyn attr__(l2, NULL, "row.names", row_names16);
    check L103() else D37();
  D20():
    deopt 72 [r35];
  D37():
    deopt 136 [row_names16, r54];
  L66():
    st `row.names` = r35;
    goto L9(r35);
  L103():
    st value = r54;
    value = ld value;
    check L104() else D38();
  D38():
    deopt 138 [value];
  L104():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}