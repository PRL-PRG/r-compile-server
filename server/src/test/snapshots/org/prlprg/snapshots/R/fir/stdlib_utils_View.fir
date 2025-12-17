fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner642339852;
    st View = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner642339852(x, title) {
  (reg x:*, reg title:*) -+> V { var x:*, var title:*, reg check_screen_device:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg paste:cls, reg deparse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p:p(V +), reg r8:V, reg c1:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg as_data_frame:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r16:V, reg as_list:cls, reg format_data_frame:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg row_names:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg rn:*, reg rn1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg rn4:V, reg r26:V, reg rn5:*, reg rn6:V, reg r27:I, reg r28:V, reg any:cls, reg r29:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg rn7:*, reg rn8:V, reg list:cls, reg r34:V, reg x7:*, reg x8:V, reg c3:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg x9:*, reg x10:V, reg is_list:cls, reg r39:V, reg r40:V, reg c4:L, reg c5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg c9:L, reg r42:V, reg x11:*, reg x12:V, reg length:cls, reg r43:V, reg r44:V, reg c10:L, reg c11:V, reg c13:L, reg c14:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg c18:L, reg r46:V, reg vapply:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg is_atomic:*, reg is_atomic1:V, reg p7:p(V +), reg r49:V, reg all:cls, reg r50:V, reg r51:V, reg c19:L, reg c20:V, reg c22:L, reg c23:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg c27:L, reg r53:V, reg lengths:cls, reg x15:*, reg x16:V, reg p8:p(V +), reg r55:V, reg max:cls, reg r56:V, reg r57:V, reg c28:L, reg c29:V, reg c31:L, reg stop:cls, reg r58:V, reg grepl:cls, reg R_version:*, reg R_version1:V, reg c32:L, reg R_version3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r60:V, reg p9:p(V +), reg r62:V, reg c33:L, reg check_for_XQuartz:cls, reg file_path:cls, reg R_home:cls, reg r63:V, reg p10:p(V +), reg r65:V, reg p11:p(V +), reg r67:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r69:V, reg r70:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg C_dataviewer:*, reg C_dataviewer1:V, reg x17:*, reg x18:V, reg title1:*, reg title2:V, reg _External2:cls, reg r73:V, reg invisible:cls, reg r74:V |
    mkenv;
    st x = x;
    st title = title;
    check_screen_device = ldf check_screen_device;
    check L22() else D0();
  D0():
    deopt 1 [];
  L22():
    r = dyn check_screen_device("View()");
    check L23() else D1();
  D1():
    deopt 3 [r];
  L23():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r2):
    c = `as.logical`(r2);
    if c then L26() else L1();
  L24():
    missing = ldf missing in base;
    r3 = dyn missing(<sym title>);
    goto L0(r3);
  L25():
    r1 = dyn base(<sym title>);
    goto L0(r1);
  L1():
    goto L2();
  L2():
    as_data_frame = ldf `as.data.frame`;
    check L30() else D4();
  L26():
    paste = ldf paste;
    check L27() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 16 [];
  L27():
    p1 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        substitute = ldf substitute in base;
        r6 = dyn substitute(<sym x>);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>);
        goto L0(r4);
      };
      r8 = dyn deparse(p);
      c1 = `is.object`(r8);
      if c1 then L1() else L2(r8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r10):
      __ = ldf `[` in base;
      r11 = dyn __(r10, 1.0);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn paste("Data:", p1);
    check L28() else D3();
  L30():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r16 = dyn as_data_frame(p2);
    check L31() else D5();
  D3():
    deopt 11 [r13];
  D5():
    deopt 18 [r16];
  L28():
    st title = r13;
    goto L2();
  L31():
    st x0 = r16;
    as_list = ldf `as.list`;
    check L32() else D6();
  D6():
    deopt 21 [];
  L32():
    p4 = prom<V +>{
      format_data_frame = ldf `format.data.frame`;
      p3 = prom<V +>{
        x3 = ld x0;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r18 = dyn format_data_frame(p3);
      return r18;
    };
    r20 = dyn as_list(p4);
    check L33() else D7();
  D7():
    deopt 23 [r20];
  L33():
    st x = r20;
    row_names = ldf `row.names`;
    check L34() else D8();
  D8():
    deopt 26 [];
  L34():
    p5 = prom<V +>{
      x5 = ld x0;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r22 = dyn row_names(p5);
    check L35() else D9();
  D9():
    deopt 28 [r22];
  L35():
    st rn = r22;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L3(r24):
    c2 = `as.logical`(r24);
    if c2 then L43() else L5();
  L36():
    rn = ld rn;
    check L38() else D10();
  L37():
    r23 = dyn base2(<lang `!=`(rn, seq_along(rn))>);
    goto L3(r23);
  D10():
    deopt 32 [rn];
  L5():
    goto L8();
  L8():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L38():
    rn1 = force? rn;
    checkMissing(rn1);
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L43():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L4(rn4, r26):
    r28 = `!=`(rn4, r26);
    any = ldf any in base;
    r29 = dyn any(r28);
    check L42() else D12();
  L6(r31):
    st x = r31;
    goto L8();
  L9(r38):
    r40 = `!`(r38);
    c4 = `as.logical`(r40);
    if c4 then L10(c4) else L57();
  L39():
    rn5 = ld rn;
    check L41() else D11();
  L40():
    r25 = dyn base3(<sym rn>);
    goto L4(rn1, r25);
  L44():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L45():
    r30 = dyn base4(<lang list(row.names=rn)>, <sym x>);
    goto L6(r30);
  L53():
    x9 = ld x;
    check L55() else D17();
  L54():
    r37 = dyn base6(<sym x>);
    goto L9(r37);
  D11():
    deopt 34 [rn1, rn5];
  D12():
    deopt 39 [r29];
  D17():
    deopt 58 [x9];
  L7(r33):
    x7 = ld x;
    check L50() else D15();
  L10(c5):
    c13 = `as.logical`(c5);
    if c13 then L12(c13) else L63();
  L41():
    rn6 = force? rn5;
    checkMissing(rn6);
    r27 = seq_along(rn6);
    goto L4(rn1, r27);
  L42():
    goto L3(r29);
  L46():
    rn7 = ld rn;
    check L48() else D13();
  L47():
    r32 = dyn base5[`row.names`](<sym rn>);
    goto L7(r32);
  L55():
    x10 = force? x9;
    checkMissing(x10);
    is_list = ldf `is.list` in base;
    r39 = dyn is_list(x10);
    check L56() else D18();
  L57():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  D13():
    deopt 44 [rn7];
  D15():
    deopt 49 [x7];
  D18():
    deopt 61 [r39];
  L11(c9, r42):
    r44 = `!`(r42);
    c10 = `as.logical`(r44);
    c11 = `||`(c9, c10);
    goto L10(c11);
  L12(c14):
    c22 = `as.logical`(c14);
    if c22 then L14(c22) else L70();
  L48():
    rn8 = force? rn7;
    checkMissing(rn8);
    list = ldf list in base;
    r34 = dyn list(rn8);
    check L49() else D14();
  L50():
    x8 = force? x7;
    checkMissing(x8);
    c3 = ldf c in base;
    r35 = dyn c3(r33, x8);
    check L51() else D16();
  L56():
    goto L9(r39);
  L58():
    x11 = ld x;
    check L60() else D19();
  L59():
    r41 = dyn base7(<sym x>);
    goto L11(c4, r41);
  L63():
    sym8 = ldf all;
    base8 = ldf all in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L64() else L65();
  D14():
    deopt 48 [r34];
  D16():
    deopt 52 [r35];
  D19():
    deopt 65 [c4, x11];
  L13(c18, r46):
    r51 = `!`(r46);
    c19 = `as.logical`(r51);
    c20 = `||`(c18, c19);
    goto L12(c20);
  L14(c23):
    c31 = `as.logical`(c23);
    if c31 then L77() else L16();
  L49():
    goto L7(r34);
  L51():
    goto L6(r35);
  L60():
    x12 = force? x11;
    checkMissing(x12);
    length = ldf length in base;
    r43 = dyn length(x12);
    check L61() else D20();
  L64():
    vapply = ldf vapply;
    check L66() else D21();
  L65():
    r45 = dyn base8(<lang vapply(x, is.atomic, NA_LGL)>);
    goto L13(c13, r45);
  L70():
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L71() else L72();
  D20():
    deopt 68 [c4, r43];
  D21():
    deopt 74 [c13];
  L15(c27, r53):
    r57 = `!`(r53);
    c28 = `as.logical`(r57);
    c29 = `||`(c27, c28);
    goto L14(c29);
  L16():
    goto L17();
  L17():
    grepl = ldf grepl;
    check L81() else D29();
  L61():
    goto L11(c4, r43);
  L66():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p7 = prom<V +>{
      is_atomic = ld `is.atomic`;
      is_atomic1 = force? is_atomic;
      checkMissing(is_atomic1);
      return is_atomic1;
    };
    r49 = dyn vapply(p6, p7, NA_LGL);
    check L67() else D22();
  L71():
    lengths = ldf lengths;
    check L73() else D24();
  L72():
    r52 = dyn base9(<lang lengths(x)>);
    goto L15(c22, r52);
  L77():
    stop = ldf stop;
    check L78() else D27();
  D22():
    deopt 78 [c13, r49];
  D24():
    deopt 86 [c22];
  D27():
    deopt 94 [];
  D29():
    deopt 100 [];
  L67():
    all = ldf all in base;
    r50 = dyn all(r49);
    check L68() else D23();
  L73():
    p8 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r55 = dyn lengths(p8);
    check L74() else D25();
  L78():
    r58 = dyn stop("invalid 'x' argument");
    check L79() else D28();
  L81():
    p9 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c32 = `is.object`(R_version1);
      if c32 then L1() else L2(R_version1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", R_version1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(R_version3):
      r60 = `$`(R_version3, <sym os>);
      goto L0(r60);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r62 = dyn grepl("darwin", p9);
    check L82() else D30();
  D23():
    deopt 80 [c13, r50];
  D25():
    deopt 88 [c22, r55];
  D28():
    deopt 96 [r58];
  D30():
    deopt 103 [r62];
  L68():
    goto L13(c13, r50);
  L74():
    max = ldf max in base;
    r56 = dyn max(r55);
    check L75() else D26();
  L79():
    goto L17();
  L82():
    c33 = `as.logical`(r62);
    if c33 then L83() else L18();
  D26():
    deopt 90 [c22, r56];
  L18():
    goto L19();
  L19():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L87() else L88();
  L75():
    goto L15(c22, r56);
  L83():
    check_for_XQuartz = ldf check_for_XQuartz;
    check L84() else D31();
  D31():
    deopt 105 [];
  L20(r70):
    popenv;
    return r70;
  L84():
    p11 = prom<V +>{
      file_path = ldf `file.path`;
      p10 = prom<V +>{
        R_home = ldf `R.home`;
        r63 = dyn R_home("modules");
        return r63;
      };
      r65 = dyn file_path(p10, "R_de.so");
      return r65;
    };
    r67 = dyn check_for_XQuartz(p11);
    check L85() else D32();
  L87():
    sym11 = ldf `.External2`;
    base11 = ldf `.External2` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L89() else L90();
  L88():
    r69 = dyn base10(<lang .External2(C_dataviewer, x, title)>);
    goto L20(r69);
  D32():
    deopt 107 [r67];
  L21(r72):
    invisible = ldf invisible in base;
    r74 = dyn invisible(r72);
    check L95() else D37();
  L85():
    goto L19();
  L89():
    C_dataviewer = ld C_dataviewer;
    check L91() else D33();
  L90():
    r71 = dyn base11(<sym C_dataviewer>, <sym x>, <sym title>);
    goto L21(r71);
  D33():
    deopt 114 [C_dataviewer];
  D37():
    deopt 123 [r74];
  L91():
    C_dataviewer1 = force? C_dataviewer;
    checkMissing(C_dataviewer1);
    x17 = ld x;
    check L92() else D34();
  L95():
    goto L20(r74);
  D34():
    deopt 116 [x17];
  L92():
    x18 = force? x17;
    checkMissing(x18);
    title1 = ld title;
    check L93() else D35();
  D35():
    deopt 118 [title1];
  L93():
    title2 = force? title1;
    checkMissing(title2);
    _External2 = ldf `.External2` in base;
    r73 = dyn _External2(C_dataviewer1, x18, title2);
    check L94() else D36();
  D36():
    deopt 121 [r73];
  L94():
    goto L21(r73);
  }
}