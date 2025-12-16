fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg utils:*, reg utils1:V, reg p:p(V +), reg r4:V, reg expand_grid:cls, reg seq:cls, reg r5:V, reg p1:p(V +), reg seq1:cls, reg r7:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg seq2:cls, reg r14:V, reg seq3:cls, reg p4:p(V +), reg r16:V, reg expand_grid1:cls, reg x:*, reg x1:V, reg p5:p(V +), reg y:*, reg y1:V, reg p6:p(V +), reg r19:V, reg expand_grid2:cls, reg x2:*, reg x3:V, reg p7:p(V +), reg y2:*, reg y3:V, reg p8:p(V +), reg r22:V, reg object_size:cls, reg d1:*, reg d2:V, reg p9:p(V +), reg r24:V, reg object_size1:cls, reg d3:*, reg d4:V, reg p10:p(V +), reg r26:V, reg stopifnot:cls, reg object_size2:cls, reg d5:*, reg d6:V, reg p11:p(V +), reg r29:V, reg object_size3:cls, reg d7:*, reg d8:V, reg p12:p(V +), reg r31:V, reg r32:V, reg p13:p(V +), reg r34:V |
    mkenv;
    r = clos `inner-1214805676`;
    st `expand.grid` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    expand_grid = ldf `expand.grid`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym utils>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      utils = ld utils;
      utils1 = force? utils;
      checkMissing(utils1);
      return utils1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      seq = ldf seq;
      r5 = dyn seq(60.0, 80.0, 5.0);
      return r5;
    };
    p2 = prom<V +>{
      seq1 = ldf seq;
      r7 = dyn seq1(100.0, 300.0, 50.0);
      return r7;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c = ldf c in base;
      r11 = dyn c("Male", "Female");
      goto L0(r11);
    L2():
      r9 = dyn base1("Male", "Female");
      goto L0(r9);
    };
    r13 = dyn expand_grid[height, weight, sex](p1, p2, p3);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 16 [r13];
  L4():
    goto L0();
  L6():
    seq2 = ldf seq;
    check L7() else D4();
  D4():
    deopt 18 [];
  L7():
    r14 = dyn seq2[, , `length.out`](0.0, 10.0, 100.0);
    check L8() else D5();
  D5():
    deopt 23 [r14];
  L8():
    st x = r14;
    seq3 = ldf seq;
    check L9() else D6();
  D6():
    deopt 26 [];
  L9():
    p4 = prom<V +>{
      return -1.0;
    };
    r16 = dyn seq3[, , `length.out`](p4, 1.0, 20.0);
    check L10() else D7();
  D7():
    deopt 31 [r16];
  L10():
    st y = r16;
    expand_grid1 = ldf `expand.grid`;
    check L11() else D8();
  D8():
    deopt 34 [];
  L11():
    p5 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r19 = dyn expand_grid1[x, y](p5, p6);
    check L12() else D9();
  D9():
    deopt 39 [r19];
  L12():
    st d1 = r19;
    expand_grid2 = ldf `expand.grid`;
    check L13() else D10();
  D10():
    deopt 42 [];
  L13():
    p7 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p8 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r22 = dyn expand_grid2[x, y, `KEEP.OUT.ATTRS`](p7, p8, FALSE);
    check L14() else D11();
  D11():
    deopt 49 [r22];
  L14():
    st d2 = r22;
    object_size = ldf `object.size`;
    check L15() else D12();
  D12():
    deopt 52 [];
  L15():
    p9 = prom<V +>{
      d1 = ld d1;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    r24 = dyn object_size(p9);
    check L16() else D13();
  D13():
    deopt 54 [r24];
  L16():
    object_size1 = ldf `object.size`;
    check L17() else D14();
  D14():
    deopt 55 [r24];
  L17():
    p10 = prom<V +>{
      d3 = ld d2;
      d4 = force? d3;
      checkMissing(d4);
      return d4;
    };
    r26 = dyn object_size1(p10);
    check L18() else D15();
  D15():
    deopt 57 [r24, r26];
  L18():
    `-`(r24, r26);
    stopifnot = ldf stopifnot;
    check L19() else D16();
  D16():
    deopt 60 [];
  L19():
    p13 = prom<V +>{
      object_size2 = ldf `object.size`;
      p11 = prom<V +>{
        d5 = ld d1;
        d6 = force? d5;
        checkMissing(d6);
        return d6;
      };
      r29 = dyn object_size2(p11);
      object_size3 = ldf `object.size`;
      p12 = prom<V +>{
        d7 = ld d2;
        d8 = force? d7;
        checkMissing(d8);
        return d8;
      };
      r31 = dyn object_size3(p12);
      r32 = `>`(r29, r31);
      return r32;
    };
    r34 = dyn stopifnot(p13);
    check L20() else D17();
  D17():
    deopt 62 [r34];
  L20():
    popenv;
    return r34;
  }
}
fun `inner-1214805676`(`...`, `KEEP.OUT.ATTRS`, stringsAsFactors) {
  (reg ddd:dots, reg KEEP_OUT_ATTRS:*, reg stringsAsFactors:*) -+> V { var `...`:dots?, var `KEEP.OUT.ATTRS`:*, reg KEEP_OUT_ATTRS_isMissing:L, reg KEEP_OUT_ATTRS_orDefault:*, var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg length:cls, reg r5:V, reg nargs:*, reg nargs1:V, reg r6:V, reg c:L, reg as_data_frame:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg list1:cls, reg r9:V, reg p:p(V +), reg r11:V, reg nargs2:*, reg nargs3:V, reg r14:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c6:L, reg r16:V, reg args:*, reg args1:V, reg c7:L, reg c9:L, reg args3:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg __:cls, reg r17:V, reg is_list:cls, reg r18:V, reg c12:L, reg c13:V, reg c15:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg a1:*, reg a2:V, reg length1:cls, reg r21:V, reg nargs4:*, reg nargs5:V, reg r23:V, reg c16:L, reg as_data_frame1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg list2:cls, reg r26:V, reg p1:p(V +), reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg nargs6:*, reg nargs7:V, reg vector:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg nargs8:*, reg nargs9:V, reg r36:I, reg paste0:cls, reg iArgs:*, reg iArgs1:V, reg p2:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg args4:*, reg args5:V, reg names:cls, reg r41:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg nm:*, reg nm1:V, reg c17:V, reg c18:L, reg nmc:*, reg nmc1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r44:V, reg r45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r46:V, reg r47:V, reg nm2:*, reg nm3:V, reg nzchar:cls, reg r48:V, reg any:cls, reg r49:V, reg c19:L, reg nm4:*, reg nm5:V, reg c20:L, reg nm7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ng0:*, reg ng1:V, reg __1:cls, reg r50:V, reg l:*, reg c21:L, reg dx5:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg ng2:*, reg ng3:V, reg ___:cls, reg r51:V, reg nmc3:*, reg nmc4:V, reg l3:*, reg names__:cls, reg r52:V, reg lengths:cls, reg args6:*, reg args7:V, reg p3:p(V +), reg r54:V, reg KEEP_OUT_ATTRS1:*, reg KEEP_OUT_ATTRS2:V, reg c22:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r55:V, reg r56:V, reg nargs10:*, reg nargs11:V, reg vector1:cls, reg r57:V, reg nmc5:*, reg nmc6:V, reg l4:*, reg names__1:cls, reg r58:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r59:V, reg r60:V, reg d:*, reg d1:V, reg prod:cls, reg r61:V, reg orep:*, reg orep1:V, reg r62:V, reg c23:L, reg iArgs2:*, reg iArgs3:V, reg s:V, reg l5:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg args8:*, reg args9:V, reg c25:L, reg i6:I, reg args11:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i8:I, reg dx11:V, reg i9:*, reg i10:V, reg __2:cls, reg r63:V, reg c26:L, reg i12:I, reg dx13:V, reg dr8:V, reg dc4:L, reg dx14:V, reg i14:I, reg dx15:V, reg __3:cls, reg r64:V, reg l6:*, reg c27:L, reg i16:I, reg dx17:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx19:V, reg i18:I, reg dx21:V, reg i19:*, reg i20:V, reg ____:cls, reg r65:V, reg iArgs4:*, reg iArgs5:V, reg s1:V, reg l9:I, reg i22:I, reg i23:I, reg i24:I, reg c28:L, reg x1:V, reg args12:*, reg args13:V, reg c29:L, reg i28:I, reg args15:V, reg dr12:V, reg dc6:L, reg dx22:V, reg i30:I, reg dx23:V, reg i31:*, reg i32:V, reg __4:cls, reg r66:V, reg KEEP_OUT_ATTRS3:*, reg KEEP_OUT_ATTRS4:V, reg c30:L, reg paste1:cls, reg nmc8:*, reg nmc9:V, reg c31:L, reg nmc11:V, reg dr14:V, reg dc7:L, reg dx24:V, reg dx25:V, reg i35:*, reg i36:V, reg __5:cls, reg r67:V, reg p4:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg r70:V, reg x2:*, reg x3:V, reg is_numeric:cls, reg r71:V, reg c32:L, reg format:cls, reg x4:*, reg x5:V, reg p5:p(V +), reg r73:V, reg x6:*, reg x7:V, reg p6:p(V +), reg r75:V, reg l10:*, reg c33:L, reg i38:I, reg r77:V, reg l12:*, reg dr16:V, reg dc8:L, reg dx26:V, reg i40:I, reg r79:V, reg dx27:V, reg i41:*, reg i42:V, reg ____1:cls, reg r80:V, reg i43:I, reg sym15:cls, reg base15:cls, reg guard15:L, reg r82:V, reg i46:I, reg r83:V, reg x8:*, reg x9:V, reg length2:cls, reg r84:V, reg orep2:*, reg orep3:V, reg nx:*, reg nx1:V, reg r85:V, reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg c34:L, reg i48:I, reg c36:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r86:V, reg i51:I, reg c39:L, reg r87:V, reg x10:*, reg x11:V, reg c40:L, reg c41:L, reg c42:V, reg c44:L, reg factor:cls, reg x12:*, reg x13:V, reg p7:p(V +), reg unique:cls, reg x14:*, reg x15:V, reg p8:p(V +), reg r90:V, reg p9:p(V +), reg r92:V, reg i55:I, reg x16:*, reg x17:V, reg c45:L, reg i57:I, reg x19:V, reg dr18:V, reg dc9:L, reg dx28:V, reg i59:I, reg dx29:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg i62:I, reg x22:V, reg r95:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r96:V, reg i65:I, reg x25:V, reg r97:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r98:V, reg i68:I, reg x28:V, reg r99:V, reg nx2:*, reg nx3:V, reg r100:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r101:V, reg i71:I, reg x31:V, reg r102:V, reg rep_fac:*, reg rep_fac1:V, reg nx4:*, reg nx5:V, reg rep_int:cls, reg r103:V, reg rep_int1:cls, reg r104:V, reg orep4:*, reg orep5:V, reg rep_int2:cls, reg r105:V, reg __6:cls, reg r106:V, reg x32:*, reg x33:V, reg l13:*, reg c46:L, reg i73:I, reg x35:V, reg l15:*, reg dr20:V, reg dc10:L, reg dx30:V, reg i75:I, reg dx31:V, reg i76:*, reg i77:V, reg ____2:cls, reg r107:V, reg rep_fac2:*, reg rep_fac3:V, reg nx6:*, reg nx7:V, reg r108:V, reg KEEP_OUT_ATTRS5:*, reg KEEP_OUT_ATTRS6:V, reg c47:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r109:V, reg r110:V, reg d2:*, reg d3:V, reg dn:*, reg dn1:V, reg list3:cls, reg r111:V, reg l16:*, reg attr__:cls, reg r112:V, reg _set_row_names:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r114:V, reg r115:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r116:V, reg r117:V, reg d4:*, reg d5:V, reg prod1:cls, reg r118:V, reg as_integer:cls, reg r119:V, reg p10:p(V +), reg r121:V, reg structure:cls, reg cargs:*, reg cargs1:V, reg p11:p(V +), reg rn:*, reg rn1:V, reg p12:p(V +), reg r124:V |
    mkenv;
    st `...` = ddd;
    KEEP_OUT_ATTRS_isMissing = missing.0(KEEP_OUT_ATTRS);
    if KEEP_OUT_ATTRS_isMissing then L0(TRUE) else L0(KEEP_OUT_ATTRS);
  L0(KEEP_OUT_ATTRS_orDefault):
    st `KEEP.OUT.ATTRS` = KEEP_OUT_ATTRS_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L1(TRUE) else L1(stringsAsFactors);
  L1(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L56() else L57();
  L2(r1):
    st nargs = r1;
    nargs = ld nargs;
    check L63() else D3();
  L56():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L58() else L59();
  L57():
    r = dyn base(<lang `<-`(args, list(...))>);
    goto L2(r);
  D3():
    deopt 11 [nargs];
  L3(r3):
    st args = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L62() else D2();
  L58():
    list = ldf list;
    check L60() else D0();
  L59():
    r2 = dyn base1(<sym ...>);
    goto L3(r2);
  L63():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    r6 = `!`(nargs1);
    c = `as.logical`(r6);
    if c then L64() else L4();
  D0():
    deopt 4 [];
  D2():
    deopt 9 [r5];
  L4():
    nargs2 = ld nargs;
    check L69() else D6();
  L60():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L61() else D1();
  L62():
    goto L2(r5);
  L64():
    as_data_frame = ldf `as.data.frame`;
    check L65() else D4();
  D1():
    deopt 6 [r4];
  D4():
    deopt 15 [];
  D6():
    deopt 21 [nargs2];
  L61():
    goto L3(r4);
  L65():
    p = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      list1 = ldf list in base;
      r9 = dyn list1();
      goto L0(r9);
    L2():
      r7 = dyn base2();
      goto L0(r7);
    };
    r11 = dyn as_data_frame(p);
    check L66() else D5();
  L69():
    nargs3 = force? nargs2;
    checkMissing(nargs3);
    r14 = `==`(nargs3, 1);
    c1 = `as.logical`(r14);
    if c1 then L70() else L6(c1);
  D5():
    deopt 17 [r11];
  L6(c3):
    c15 = `as.logical`(c3);
    if c15 then L79() else L9();
  L66():
    popenv;
    return r11;
  L70():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L7(c6, r16):
    c12 = `as.logical`(r16);
    c13 = `&&`(c6, c12);
    goto L6(c13);
  L9():
    goto L11();
  L11():
    nargs4 = ld nargs;
    check L85() else D11();
  L71():
    args = ld args;
    check L73() else D7();
  L72():
    r15 = dyn base3(<lang `<-`(a1, `[[`(args, 1))>);
    goto L7(c1, r15);
  L79():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  D7():
    deopt 27 [c1, args];
  D11():
    deopt 46 [nargs4];
  L10(r20):
    st nargs = r20;
    goto L11();
  L73():
    args1 = force? args;
    checkMissing(args1);
    c7 = `is.object`(args1);
    if c7 then L74() else L75(c1, args1);
  L80():
    a1 = ld a1;
    check L82() else D9();
  L81():
    r19 = dyn base4(<lang `<-`(args, a1)>);
    goto L10(r19);
  L85():
    nargs5 = force? nargs4;
    checkMissing(nargs5);
    r23 = `==`(nargs5, 0);
    c16 = `as.logical`(r23);
    if c16 then L86() else L12();
  D9():
    deopt 38 [a1];
  L8(c11, dx1):
    st a1 = dx1;
    is_list = ldf `is.list` in base;
    r18 = dyn is_list(dx1);
    check L77() else D8();
  L12():
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L74():
    dr = tryDispatchBuiltin.1("[[", args1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L76() else L75(c1, dr);
  L75(c9, args3):
    __ = ldf `[[` in base;
    r17 = dyn __(args3, 1);
    goto L8(c9, r17);
  L82():
    a2 = force? a1;
    checkMissing(a2);
    st args = a2;
    length1 = ldf length in base;
    r21 = dyn length1(a2);
    check L83() else D10();
  L86():
    as_data_frame1 = ldf `as.data.frame`;
    check L87() else D12();
  D8():
    deopt 34 [c11, r18];
  D10():
    deopt 42 [r21];
  D12():
    deopt 51 [];
  L14(r32):
    st cargs = r32;
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L76():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(c1, dx);
  L77():
    goto L7(c11, r18);
  L83():
    goto L10(r21);
  L87():
    p1 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      list2 = ldf list in base;
      r26 = dyn list2();
      goto L0(r26);
    L2():
      r24 = dyn base5();
      goto L0(r24);
    };
    r28 = dyn as_data_frame1(p1);
    check L88() else D13();
  L91():
    nargs6 = ld nargs;
    check L93() else D14();
  L92():
    r31 = dyn base6("list", <sym nargs>);
    goto L14(r31);
  D13():
    deopt 53 [r28];
  D14():
    deopt 60 [nargs6];
  L15(r35):
    st iArgs = r35;
    paste0 = ldf paste0;
    check L98() else D17();
  L88():
    popenv;
    return r28;
  L93():
    nargs7 = force? nargs6;
    checkMissing(nargs7);
    vector = ldf vector in base;
    r33 = dyn vector("list", nargs7);
    check L94() else D15();
  L95():
    nargs8 = ld nargs;
    check L97() else D16();
  L96():
    r34 = dyn base7(<sym nargs>);
    goto L15(r34);
  D15():
    deopt 63 [r33];
  D16():
    deopt 66 [nargs8];
  D17():
    deopt 71 [];
  L94():
    goto L14(r33);
  L97():
    nargs9 = force? nargs8;
    checkMissing(nargs9);
    r36 = seq_len(nargs9);
    goto L15(r36);
  L98():
    p2 = prom<V +>{
      iArgs = ld iArgs;
      iArgs1 = force? iArgs;
      checkMissing(iArgs1);
      return iArgs1;
    };
    r38 = dyn paste0("Var", p2);
    check L99() else D18();
  D18():
    deopt 74 [r38];
  L99():
    st nmc = r38;
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L100() else L101();
  L16(r40):
    st nm = r40;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L104() else L105();
  L100():
    args4 = ld args;
    check L102() else D19();
  L101():
    r39 = dyn base8(<sym args>);
    goto L16(r39);
  D19():
    deopt 78 [args4];
  L17(r43):
    c18 = `as.logical`(r43);
    if c18 then L107() else L18();
  L102():
    args5 = force? args4;
    checkMissing(args5);
    names = ldf names in base;
    r41 = dyn names(args5);
    check L103() else D20();
  L104():
    nm = ld nm;
    check L106() else D21();
  L105():
    r42 = dyn base9(<sym nm>);
    goto L17(r42);
  D20():
    deopt 81 [r41];
  D21():
    deopt 84 [nm];
  L18():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L110() else L111();
  L19():
    nmc3 = ld nmc;
    check L128() else D29();
  L103():
    goto L16(r41);
  L106():
    nm1 = force? nm;
    checkMissing(nm1);
    c17 = `==`(nm1, NULL);
    goto L17(c17);
  L107():
    nmc = ld nmc;
    check L108() else D22();
  D22():
    deopt 87 [nmc];
  D29():
    deopt 113 [nmc3];
  L20(r45):
    c19 = `as.logical`(r45);
    if c19 then L117() else L22();
  L108():
    nmc1 = force? nmc;
    checkMissing(nmc1);
    st nm = nmc1;
    goto L19();
  L110():
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  L111():
    r44 = dyn base10(<lang `<-`(ng0, nzchar(nm))>);
    goto L20(r44);
  L128():
    nmc4 = force? nmc3;
    checkMissing(nmc4);
    l3 = ld cargs;
    names__ = ldf `names<-`;
    check L129() else D30();
  D30():
    deopt 116 [nmc4, l3, nmc4];
  L21(r47):
    st ng0 = r47;
    any = ldf any in base;
    r49 = dyn any(r47);
    check L116() else D25();
  L22():
    goto L19();
  L112():
    nm2 = ld nm;
    check L114() else D23();
  L113():
    r46 = dyn base11(<sym nm>);
    goto L21(r46);
  L117():
    nm4 = ld nm;
    check L118() else D26();
  L129():
    r52 = dyn names__(l3, NULL, nmc4);
    check L130() else D31();
  D23():
    deopt 94 [nm2];
  D25():
    deopt 100 [r49];
  D26():
    deopt 101 [nm4];
  D31():
    deopt 118 [nmc4, r52];
  L114():
    nm3 = force? nm2;
    checkMissing(nm3);
    nzchar = ldf nzchar in base;
    r48 = dyn nzchar(nm3);
    check L115() else D24();
  L116():
    goto L20(r49);
  L118():
    nm5 = force? nm4;
    checkMissing(nm5);
    c20 = `is.object`(nm5);
    if c20 then L119() else L120(nm5);
  L130():
    st cargs = r52;
    st `rep.fac` = 1;
    lengths = ldf lengths;
    check L131() else D32();
  D24():
    deopt 97 [r48];
  D32():
    deopt 124 [];
  L23(dx3):
    l = ld nmc;
    c21 = `is.object`(l);
    if c21 then L123() else L124(dx3, l);
  L115():
    goto L21(r48);
  L119():
    dr2 = tryDispatchBuiltin.1("[", nm5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L121() else L120(dr2);
  L120(nm7):
    ng0 = ld ng0;
    check L122() else D27();
  L131():
    p3 = prom<V +>{
      args6 = ld args;
      args7 = force? args6;
      checkMissing(args7);
      return args7;
    };
    r54 = dyn lengths(p3);
    check L132() else D33();
  D27():
    deopt 103 [nm7, ng0];
  D33():
    deopt 126 [r54];
  L24(dx8, dx9):
    st nmc = dx9;
    goto L19();
  L121():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L122():
    ng1 = force? ng0;
    __1 = ldf `[` in base;
    r50 = dyn __1(nm7, ng1);
    goto L23(r50);
  L123():
    dr4 = tryDispatchBuiltin.0("[<-", l, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L125() else L124(dx3, dr4);
  L124(dx5, l2):
    ng2 = ld ng0;
    check L126() else D28();
  L132():
    st d = r54;
    KEEP_OUT_ATTRS1 = ld `KEEP.OUT.ATTRS`;
    check L133() else D34();
  D28():
    deopt 107 [dx5, l2, dx3, ng2];
  D34():
    deopt 128 [KEEP_OUT_ATTRS1];
  L125():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx3, dx7);
  L126():
    ng3 = force? ng2;
    ___ = ldf `[<-` in base;
    r51 = dyn ___(l2, dx3, ng3);
    goto L24(dx5, r51);
  L133():
    KEEP_OUT_ATTRS2 = force? KEEP_OUT_ATTRS1;
    checkMissing(KEEP_OUT_ATTRS2);
    c22 = `as.logical`(KEEP_OUT_ATTRS2);
    if c22 then L134() else L25();
  L25():
    goto L27();
  L27():
    sym13 = ldf prod;
    base13 = ldf prod in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L143() else L144();
  L134():
    sym12 = ldf vector;
    base12 = ldf vector in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L135() else L136();
  L26(r56):
    st dn = r56;
    nmc5 = ld nmc;
    check L139() else D37();
  L28(r60):
    st orep = r60;
    orep = ld orep;
    check L147() else D42();
  L135():
    nargs10 = ld nargs;
    check L137() else D35();
  L136():
    r55 = dyn base12("list", <sym nargs>);
    goto L26(r55);
  L143():
    d = ld d;
    check L145() else D40();
  L144():
    r59 = dyn base13(<sym d>);
    goto L28(r59);
  D35():
    deopt 133 [nargs10];
  D37():
    deopt 138 [nmc5];
  D40():
    deopt 149 [d];
  D42():
    deopt 154 [orep];
  L137():
    nargs11 = force? nargs10;
    checkMissing(nargs11);
    vector1 = ldf vector in base;
    r57 = dyn vector1("list", nargs11);
    check L138() else D36();
  L139():
    nmc6 = force? nmc5;
    checkMissing(nmc6);
    l4 = ld dn;
    names__1 = ldf `names<-`;
    check L140() else D38();
  L145():
    d1 = force? d;
    checkMissing(d1);
    prod = ldf prod in base;
    r61 = dyn prod(d1);
    check L146() else D41();
  L147():
    orep1 = force? orep;
    checkMissing(orep1);
    r62 = `==`(orep1, 0);
    c23 = `as.logical`(r62);
    if c23 then L148() else L29();
  D36():
    deopt 136 [r57];
  D38():
    deopt 141 [nmc6, l4, nmc6];
  D41():
    deopt 152 [r61];
  L29():
    iArgs4 = ld iArgs;
    check L164() else D47();
  L35():
    KEEP_OUT_ATTRS5 = ld `KEEP.OUT.ATTRS`;
    check L222() else D74();
  L138():
    goto L26(r57);
  L140():
    r58 = dyn names__1(l4, NULL, nmc6);
    check L141() else D39();
  L146():
    goto L28(r61);
  L148():
    iArgs2 = ld iArgs;
    check L149() else D43();
  D39():
    deopt 143 [nmc6, r58];
  D43():
    deopt 158 [iArgs2];
  D47():
    deopt 176 [iArgs4];
  D74():
    deopt 268 [KEEP_OUT_ATTRS5];
  L141():
    st dn = r58;
    goto L27();
  L149():
    iArgs3 = force? iArgs2;
    checkMissing(iArgs3);
    s = toForSeq(iArgs3);
    l5 = length(s);
    i = 0;
    goto L30(i);
  L164():
    iArgs5 = force? iArgs4;
    checkMissing(iArgs5);
    s1 = toForSeq(iArgs5);
    l9 = length(s1);
    i22 = 0;
    goto L36(i22);
  L222():
    KEEP_OUT_ATTRS6 = force? KEEP_OUT_ATTRS5;
    checkMissing(KEEP_OUT_ATTRS6);
    c47 = `as.logical`(KEEP_OUT_ATTRS6);
    if c47 then L223() else L53();
  L30(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l5, i2);
    if c24 then L150() else L34();
  L36(i23):
    i24 = `+`.1(i23, 1);
    c28 = `<`.1(l9, i24);
    if c28 then L165() else L52();
  L53():
    goto L55();
  L55():
    _set_row_names = ldf `.set_row_names`;
    check L232() else D80();
  L223():
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L224() else L225();
  D80():
    deopt 289 [];
  L34():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    args8 = ld args;
    check L151() else D44();
  L52():
    x1 = `[[`(s1, i24, NULL, TRUE);
    st i = x1;
    args12 = ld args;
    check L166() else D48();
  L54(r110):
    l16 = ld cargs;
    attr__ = ldf `attr<-`;
    check L229() else D78();
  L150():
    goto L35();
  L165():
    goto L35();
  L224():
    d2 = ld d;
    check L226() else D75();
  L225():
    r109 = dyn base21[dim, dimnames](<sym d>, <sym dn>);
    goto L54(r109);
  L232():
    p10 = prom<V +>{
      sym22 = ldf `as.integer`;
      base22 = ldf `as.integer` in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L2() else L3();
    L0(r115):
      return r115;
    L2():
      sym23 = ldf prod;
      base23 = ldf prod in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L4() else L5();
    L3():
      r114 = dyn base22(<lang prod(d)>);
      goto L0(r114);
    L1(r117):
      as_integer = ldf `as.integer` in base;
      r119 = dyn as_integer(r117);
      goto L0(r119);
    L4():
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      prod1 = ldf prod in base;
      r118 = dyn prod1(d5);
      goto L1(r118);
    L5():
      r116 = dyn base23(<sym d>);
      goto L1(r116);
    };
    r121 = dyn _set_row_names(p10);
    check L233() else D81();
  D44():
    deopt 160 [i2, args8];
  D48():
    deopt 178 [i24, args12];
  D75():
    deopt 272 [d2];
  D78():
    deopt 281 [r110, l16, r110];
  D81():
    deopt 291 [r121];
  L151():
    args9 = force? args8;
    checkMissing(args9);
    c25 = `is.object`(args9);
    if c25 then L152() else L153(i2, args9);
  L166():
    args13 = force? args12;
    checkMissing(args13);
    c29 = `is.object`(args13);
    if c29 then L167() else L168(i24, args13);
  L226():
    d3 = force? d2;
    checkMissing(d3);
    dn = ld dn;
    check L227() else D76();
  L229():
    r112 = dyn attr__(l16, NULL, "out.attrs", r110);
    check L230() else D79();
  L233():
    st rn = r121;
    structure = ldf structure;
    check L234() else D82();
  D76():
    deopt 275 [dn];
  D79():
    deopt 284 [r110, r112];
  D82():
    deopt 294 [];
  L31(i8, dx11):
    c26 = `is.object`(dx11);
    if c26 then L156() else L157(i8, dx11);
  L37(i30, dx23):
    st x = dx23;
    KEEP_OUT_ATTRS3 = ld `KEEP.OUT.ATTRS`;
    check L171() else D50();
  L152():
    dr6 = tryDispatchBuiltin.1("[[", args9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L154() else L153(i2, dr6);
  L153(i6, args11):
    i9 = ld i;
    check L155() else D45();
  L167():
    dr12 = tryDispatchBuiltin.1("[[", args13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L169() else L168(i24, dr12);
  L168(i28, args15):
    i31 = ld i;
    check L170() else D49();
  L227():
    dn1 = force? dn;
    checkMissing(dn1);
    list3 = ldf list in base;
    r111 = dyn list3(d3, dn1);
    check L228() else D77();
  L230():
    st cargs = r112;
    goto L55();
  L234():
    p11 = prom<V +>{
      cargs = ld cargs;
      cargs1 = force? cargs;
      checkMissing(cargs1);
      return cargs1;
    };
    p12 = prom<V +>{
      rn = ld rn;
      rn1 = force? rn;
      checkMissing(rn1);
      return rn1;
    };
    r124 = dyn structure[, class, `row.names`](p11, "data.frame", p12);
    check L235() else D83();
  D45():
    deopt 162 [i6, args11, i9];
  D49():
    deopt 180 [i28, args15, i31];
  D50():
    deopt 184 [i30, KEEP_OUT_ATTRS3];
  D77():
    deopt 279 [r111];
  D83():
    deopt 300 [r124];
  L32(i14, dx15):
    l6 = ld cargs;
    c27 = `is.object`(l6);
    if c27 then L159() else L160(i14, dx15, l6);
  L154():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L31(i2, dx10);
  L155():
    i10 = force? i9;
    __2 = ldf `[[` in base;
    r63 = dyn __2(args11, i10);
    goto L31(i6, r63);
  L156():
    dr8 = tryDispatchBuiltin.1("[", dx11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L158() else L157(i8, dr8);
  L157(i12, dx13):
    __3 = ldf `[` in base;
    r64 = dyn __3(dx13, FALSE);
    goto L32(i12, r64);
  L169():
    dx22 = getTryDispatchBuiltinValue(dr12);
    goto L37(i24, dx22);
  L170():
    i32 = force? i31;
    __4 = ldf `[[` in base;
    r66 = dyn __4(args15, i32);
    goto L37(i28, r66);
  L171():
    KEEP_OUT_ATTRS4 = force? KEEP_OUT_ATTRS3;
    checkMissing(KEEP_OUT_ATTRS4);
    c30 = `as.logical`(KEEP_OUT_ATTRS4);
    if c30 then L172() else L38();
  L228():
    goto L54(r111);
  L235():
    popenv;
    return r124;
  L33(i18, dx21):
    st cargs = dx21;
    goto L30(i18);
  L38():
    goto L40(i30);
  L40(i43):
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L180() else L181();
  L158():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L32(i8, dx14);
  L159():
    dr10 = tryDispatchBuiltin.0("[[<-", l6, dx15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L161() else L160(i14, dx15, dr10);
  L160(i16, dx17, l8):
    i19 = ld i;
    check L162() else D46();
  L172():
    paste1 = ldf paste0;
    check L173() else D51();
  D46():
    deopt 169 [i16, dx17, l8, dx15, i19];
  D51():
    deopt 187 [i30];
  L41(i46, r83):
    st nx = r83;
    orep2 = ld orep;
    check L184() else D56();
  L161():
    dx19 = getTryDispatchBuiltinValue(dr10);
    goto L33(i14, dx19);
  L162():
    i20 = force? i19;
    ____ = ldf `[[<-` in base;
    r65 = dyn ____(l8, dx15, i20);
    goto L33(i16, r65);
  L173():
    p4 = prom<V +>{
      nmc8 = ld nmc;
      nmc9 = force? nmc8;
      checkMissing(nmc9);
      c31 = `is.object`(nmc9);
      if c31 then L1() else L2(nmc9);
    L0(dx25):
      return dx25;
    L1():
      dr14 = tryDispatchBuiltin.1("[", nmc9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(nmc11):
      i35 = ld i;
      i36 = force? i35;
      __5 = ldf `[` in base;
      r67 = dyn __5(nmc11, i36);
      goto L0(r67);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx24);
    };
    p6 = prom<V +>{
      sym14 = ldf `is.numeric`;
      base14 = ldf `is.numeric` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r70):
      c32 = `as.logical`(r70);
      if c32 then L4() else L1();
    L2():
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      is_numeric = ldf `is.numeric` in base;
      r71 = dyn is_numeric(x3);
      goto L0(r71);
    L3():
      r69 = dyn base14(<sym x>);
      goto L0(r69);
    L1():
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    L4():
      format = ldf format;
      p5 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      r73 = dyn format(p5);
      return r73;
    };
    r75 = dyn paste1(p4, "=", p6);
    check L174() else D52();
  L180():
    x8 = ld x;
    check L182() else D54();
  L181():
    r82 = dyn base15(<sym x>);
    goto L41(i43, r82);
  D52():
    deopt 191 [i30, r75];
  D54():
    deopt 201 [i43, x8];
  D56():
    deopt 206 [i46, orep2];
  L174():
    l10 = ld dn;
    c33 = `is.object`(l10);
    if c33 then L175() else L176(i30, r75, l10);
  L182():
    x9 = force? x8;
    checkMissing(x9);
    length2 = ldf length in base;
    r84 = dyn length2(x9);
    check L183() else D55();
  L184():
    orep3 = force? orep2;
    checkMissing(orep3);
    nx = ld nx;
    check L185() else D57();
  D55():
    deopt 204 [i43, r84];
  D57():
    deopt 207 [i46, orep3, nx];
  L39(i40, r79, dx27):
    st dn = dx27;
    goto L40(i40);
  L175():
    dr16 = tryDispatchBuiltin.0("[[<-", l10, r75);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L177() else L176(i30, r75, dr16);
  L176(i38, r77, l12):
    i41 = ld i;
    check L178() else D53();
  L183():
    goto L41(i43, r84);
  L185():
    nx1 = force? nx;
    checkMissing(nx1);
    r85 = `/`(orep3, nx1);
    st orep = r85;
    stringsAsFactors1 = ld stringsAsFactors;
    check L186() else D58();
  D53():
    deopt 193 [i38, r77, l12, r75, i41];
  D58():
    deopt 211 [i46, stringsAsFactors1];
  L177():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L39(i30, r75, dx26);
  L178():
    i42 = force? i41;
    ____1 = ldf `[[<-` in base;
    r80 = dyn ____1(l12, r75, i42);
    goto L39(i38, r77, r80);
  L186():
    stringsAsFactors2 = force? stringsAsFactors1;
    checkMissing(stringsAsFactors2);
    c34 = `as.logical`(stringsAsFactors2);
    if c34 then L187() else L42(i46, c34);
  L42(i48, c36):
    c44 = `as.logical`(c36);
    if c44 then L192() else L44();
  L187():
    sym16 = ldf `is.character`;
    base16 = ldf `is.character` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L188() else L189();
  L43(i51, c39, r87):
    c41 = `as.logical`(r87);
    c42 = `&&`(c39, c41);
    goto L42(i51, c42);
  L44():
    goto L45(i48);
  L45(i55):
    x16 = ld x;
    check L196() else D62();
  L188():
    x10 = ld x;
    check L190() else D59();
  L189():
    r86 = dyn base16(<sym x>);
    goto L43(i46, c34, r86);
  L192():
    factor = ldf factor;
    check L193() else D60();
  D59():
    deopt 214 [i46, c34, x10];
  D60():
    deopt 219 [i48];
  D62():
    deopt 227 [i55, x16];
  L190():
    x11 = force? x10;
    checkMissing(x11);
    c40 = `is.character`(x11);
    goto L43(i46, c34, c40);
  L193():
    p7 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p9 = prom<V +>{
      unique = ldf unique;
      p8 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r90 = dyn unique(p8);
      return r90;
    };
    r92 = dyn factor[, levels](p7, p9);
    check L194() else D61();
  L196():
    x17 = force? x16;
    checkMissing(x17);
    c45 = `is.object`(x17);
    if c45 then L197() else L198(i55, x17);
  D61():
    deopt 223 [i48, r92];
  L46(i59, dx29):
    st x = dx29;
    x32 = ld x;
    check L215() else D70();
  L194():
    st x = r92;
    goto L45(i48);
  L197():
    dr18 = tryDispatchBuiltin.1("[", x17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L199() else L198(i55, dr18);
  L198(i57, x19):
    sym17 = ldf `rep.int`;
    base17 = ldf `rep.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L200() else L201();
  D70():
    deopt 253 [i59, x32];
  L47(i62, x22, r95):
    __6 = ldf `[` in base;
    r106 = dyn __6(x22, r95);
    goto L46(i62, r106);
  L199():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L46(i55, dx28);
  L200():
    sym18 = ldf `rep.int`;
    base18 = ldf `rep.int` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L202() else L203();
  L201():
    r94 = dyn base17(<lang rep.int(seq_len(nx), rep.int(rep.fac, nx))>, <sym orep>);
    goto L47(i57, x19, r94);
  L215():
    x33 = force? x32;
    checkMissing(x33);
    l13 = ld cargs;
    c46 = `is.object`(l13);
    if c46 then L216() else L217(i59, x33, l13);
  L48(i65, x25, r97):
    orep4 = ld orep;
    check L213() else D68();
  L51(i75, dx31):
    st cargs = dx31;
    rep_fac2 = ld `rep.fac`;
    check L220() else D72();
  L202():
    sym19 = ldf seq_len;
    base19 = ldf seq_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L204() else L205();
  L203():
    r96 = dyn base18(<lang seq_len(nx)>, <lang rep.int(rep.fac, nx)>);
    goto L48(i57, x19, r96);
  L216():
    dr20 = tryDispatchBuiltin.0("[[<-", l13, x33);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L218() else L217(i59, x33, dr20);
  L217(i73, x35, l15):
    i76 = ld i;
    check L219() else D71();
  D68():
    deopt 247 [i65, x25, orep4];
  D71():
    deopt 256 [i73, x35, l15, x33, i76];
  D72():
    deopt 260 [i75, rep_fac2];
  L49(i68, x28, r99):
    sym20 = ldf `rep.int`;
    base20 = ldf `rep.int` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L207() else L208();
  L204():
    nx2 = ld nx;
    check L206() else D63();
  L205():
    r98 = dyn base19(<sym nx>);
    goto L49(i57, x19, r98);
  L213():
    orep5 = force? orep4;
    checkMissing(orep5);
    rep_int2 = ldf `rep.int` in base;
    r105 = dyn rep_int2(r97, orep5);
    check L214() else D69();
  L218():
    dx30 = getTryDispatchBuiltinValue(dr20);
    goto L51(i59, dx30);
  L219():
    i77 = force? i76;
    ____2 = ldf `[[<-` in base;
    r107 = dyn ____2(l15, x33, i77);
    goto L51(i73, r107);
  L220():
    rep_fac3 = force? rep_fac2;
    checkMissing(rep_fac3);
    nx6 = ld nx;
    check L221() else D73();
  D63():
    deopt 234 [i57, x19, nx2];
  D69():
    deopt 250 [i65, x25, r105];
  D73():
    deopt 261 [i75, rep_fac3, nx6];
  L50(i71, x31, r102):
    rep_int1 = ldf `rep.int` in base;
    r104 = dyn rep_int1(r99, r102);
    check L212() else D67();
  L206():
    nx3 = force? nx2;
    checkMissing(nx3);
    r100 = seq_len(nx3);
    goto L49(i57, x19, r100);
  L207():
    rep_fac = ld `rep.fac`;
    check L209() else D64();
  L208():
    r101 = dyn base20(<sym rep.fac>, <sym nx>);
    goto L50(i68, x28, r101);
  L214():
    goto L47(i65, x25, r105);
  L221():
    nx7 = force? nx6;
    checkMissing(nx7);
    r108 = `*`(rep_fac3, nx7);
    st `rep.fac` = r108;
    goto L36(i75);
  D64():
    deopt 239 [i68, x28, rep_fac];
  D67():
    deopt 246 [i71, x31, r104];
  L209():
    rep_fac1 = force? rep_fac;
    checkMissing(rep_fac1);
    nx4 = ld nx;
    check L210() else D65();
  L212():
    goto L48(i71, x31, r104);
  D65():
    deopt 241 [i68, x28, nx4];
  L210():
    nx5 = force? nx4;
    checkMissing(nx5);
    rep_int = ldf `rep.int` in base;
    r103 = dyn rep_int(rep_fac1, nx5);
    check L211() else D66();
  D66():
    deopt 244 [i68, x28, r103];
  L211():
    goto L50(i68, x28, r103);
  }
}