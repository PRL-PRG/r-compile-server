fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg list:cls, reg r5:V, reg list1:cls, reg r6:V, reg modifyList:cls, reg foo:*, reg foo1:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg list2:cls, reg r12:V, reg list3:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg str:cls, reg foo2:*, reg foo3:V, reg p2:p(V +), reg r17:V, reg str1:cls, reg bar:*, reg bar1:V, reg p3:p(V +), reg r19:V |
    mkenv;
    r = clos inner1878976873;
    st modifyList = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st foo = r2;
    modifyList = ldf modifyList;
    check L8() else D2();
  L2():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r1 = dyn base[a, b](1.0, <lang list(c="a", d=FALSE)>);
    goto L0(r1);
  D2():
    deopt 20 [];
  L1(r4):
    list1 = ldf list in base;
    r6 = dyn list1(1.0, r4);
    check L7() else D1();
  L4():
    list = ldf list in base;
    r5 = dyn list("a", FALSE);
    check L6() else D0();
  L5():
    r3 = dyn base1[c, d]("a", FALSE);
    goto L1(r3);
  L8():
    p = prom<V +>{
      foo = ld foo;
      foo1 = force? foo;
      checkMissing(foo1);
      return foo1;
    };
    p1 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r9):
      return r9;
    L2():
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r8 = dyn base2[e, b](2.0, <lang list(d=TRUE)>);
      goto L0(r8);
    L1(r11):
      list3 = ldf list in base;
      r13 = dyn list3(2.0, r11);
      goto L0(r13);
    L4():
      list2 = ldf list in base;
      r12 = dyn list2(TRUE);
      goto L1(r12);
    L5():
      r10 = dyn base3[d](TRUE);
      goto L1(r10);
    };
    r15 = dyn modifyList(p, p1);
    check L9() else D3();
  D0():
    deopt 14 [r5];
  D1():
    deopt 17 [r6];
  D3():
    deopt 23 [r15];
  L6():
    goto L1(r5);
  L7():
    goto L0(r6);
  L9():
    st bar = r15;
    str = ldf str;
    check L10() else D4();
  D4():
    deopt 26 [];
  L10():
    p2 = prom<V +>{
      foo2 = ld foo;
      foo3 = force? foo2;
      checkMissing(foo3);
      return foo3;
    };
    r17 = dyn str(p2);
    check L11() else D5();
  D5():
    deopt 28 [r17];
  L11():
    str1 = ldf str;
    check L12() else D6();
  D6():
    deopt 30 [];
  L12():
    p3 = prom<V +>{
      bar = ld bar;
      bar1 = force? bar;
      checkMissing(bar1);
      return bar1;
    };
    r19 = dyn str1(p3);
    check L13() else D7();
  D7():
    deopt 32 [r19];
  L13():
    popenv;
    return r19;
  }
}
fun inner1878976873(x, val, `keep.null`) {
  (reg x:*, reg val:*, reg keep_null:*) -+> V { var x:*, var val:*, var `keep.null`:*, reg keep_null_isMissing:L, reg keep_null_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg val1:*, reg val2:V, reg is_list1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg names:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg val3:*, reg val4:V, reg names1:cls, reg r14:V, reg vnames:*, reg vnames1:V, reg c:L, reg vnames3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg vnames6:V, reg r16:V, reg vnames7:*, reg vnames8:V, reg nzchar:cls, reg r17:V, reg __:cls, reg r18:V, reg keep_null1:*, reg keep_null2:V, reg c1:L, reg vnames9:*, reg vnames10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x5:V, reg _in_:cls, reg v:*, reg v1:V, reg p2:p(V +), reg xnames:*, reg xnames1:V, reg p3:p(V +), reg r21:V, reg c3:L, reg i6:I, reg c5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg i9:I, reg c8:L, reg r23:V, reg x6:*, reg x7:V, reg c9:L, reg i11:I, reg c11:L, reg x9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i13:I, reg c13:L, reg dx3:V, reg v2:*, reg v3:V, reg __1:cls, reg r24:V, reg is_list2:cls, reg r25:V, reg c14:L, reg c15:V, reg c17:L, reg i16:I, reg c19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg i19:I, reg c22:L, reg r27:V, reg val5:*, reg val6:V, reg c23:L, reg i21:I, reg c25:L, reg val8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i23:I, reg c27:L, reg dx5:V, reg v4:*, reg v5:V, reg __2:cls, reg r28:V, reg is_list3:cls, reg r29:V, reg c28:L, reg c29:V, reg c31:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg i29:I, reg r31:V, reg modifyList:cls, reg x10:*, reg x11:V, reg c32:L, reg x13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg v6:*, reg v7:V, reg __3:cls, reg r32:V, reg p4:p(V +), reg val9:*, reg val10:V, reg c33:L, reg val12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg v8:*, reg v9:V, reg __4:cls, reg r34:V, reg p5:p(V +), reg keep_null3:*, reg keep_null4:V, reg p6:p(V +), reg r37:V, reg list:cls, reg r38:V, reg i30:I, reg r39:V, reg val13:*, reg val14:V, reg c34:L, reg i32:I, reg val16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg v10:*, reg v11:V, reg __5:cls, reg r40:V, reg l1:*, reg c35:L, reg i35:I, reg r42:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx11:V, reg i37:I, reg dx12:V, reg v12:*, reg v13:V, reg ___:cls, reg r45:V, reg vnames11:*, reg vnames12:V, reg s1:V, reg l4:I, reg i39:I, reg i40:I, reg i41:I, reg c36:L, reg x14:V, reg _in_1:cls, reg v14:*, reg v15:V, reg p7:p(V +), reg xnames2:*, reg xnames3:V, reg p8:p(V +), reg r48:V, reg c37:L, reg i45:I, reg c39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg i48:I, reg c42:L, reg r50:V, reg x15:*, reg x16:V, reg c43:L, reg i50:I, reg c45:L, reg x18:V, reg dr14:V, reg dc7:L, reg dx13:V, reg i52:I, reg c47:L, reg dx14:V, reg v16:*, reg v17:V, reg __6:cls, reg r51:V, reg is_list4:cls, reg r52:V, reg c48:L, reg c49:V, reg c51:L, reg i55:I, reg c53:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg i58:I, reg c56:L, reg r54:V, reg val17:*, reg val18:V, reg c57:L, reg i60:I, reg c59:L, reg val20:V, reg dr16:V, reg dc8:L, reg dx15:V, reg i62:I, reg c61:L, reg dx16:V, reg v18:*, reg v19:V, reg __7:cls, reg r55:V, reg is_list5:cls, reg r56:V, reg c62:L, reg c63:V, reg c65:L, reg modifyList1:cls, reg x19:*, reg x20:V, reg c66:L, reg x22:V, reg dr18:V, reg dc9:L, reg dx17:V, reg dx18:V, reg v20:*, reg v21:V, reg __8:cls, reg r57:V, reg p9:p(V +), reg val21:*, reg val22:V, reg c67:L, reg val24:V, reg dr20:V, reg dc10:L, reg dx19:V, reg dx20:V, reg v22:*, reg v23:V, reg __9:cls, reg r59:V, reg p10:p(V +), reg keep_null5:*, reg keep_null6:V, reg p11:p(V +), reg r62:V, reg i66:I, reg r63:V, reg val25:*, reg val26:V, reg c68:L, reg i68:I, reg val28:V, reg dr22:V, reg dc11:L, reg dx21:V, reg v24:*, reg v25:V, reg __10:cls, reg r64:V, reg l5:*, reg c69:L, reg i71:I, reg r66:V, reg l7:*, reg dr24:V, reg dc12:L, reg dx22:V, reg i73:I, reg dx23:V, reg v26:*, reg v27:V, reg ____:cls, reg r69:V, reg x23:*, reg x24:V |
    mkenv;
    st x = x;
    st val = val;
    keep_null_isMissing = missing.0(keep_null);
    if keep_null_isMissing then L0(FALSE) else L0(keep_null);
  L0(keep_null_orDefault):
    st `keep.null` = keep_null_orDefault;
    stopifnot = ldf stopifnot;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p = prom<V +>{
      sym = ldf `is.list`;
      base = ldf `is.list` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_list = ldf `is.list` in base;
      r2 = dyn is_list(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf `is.list`;
      base1 = ldf `is.list` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      val1 = ld val;
      val2 = force? val1;
      checkMissing(val2);
      is_list1 = ldf `is.list` in base;
      r6 = dyn is_list1(val2);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym val>);
      goto L0(r4);
    };
    r8 = dyn stopifnot(p, p1);
    check L31() else D1();
  D1():
    deopt 4 [r8];
  L31():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L1(r10):
    st xnames = r10;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L32():
    x3 = ld x;
    check L34() else D2();
  L33():
    r9 = dyn base2(<sym x>);
    goto L1(r9);
  D2():
    deopt 7 [x3];
  L2(r13):
    st vnames = r13;
    vnames = ld vnames;
    check L40() else D6();
  L34():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r11 = dyn names(x4);
    check L35() else D3();
  L36():
    val3 = ld val;
    check L38() else D4();
  L37():
    r12 = dyn base3(<sym val>);
    goto L2(r12);
  D3():
    deopt 10 [r11];
  D4():
    deopt 14 [val3];
  D6():
    deopt 19 [vnames];
  L35():
    goto L1(r11);
  L38():
    val4 = force? val3;
    checkMissing(val4);
    names1 = ldf names in base;
    r14 = dyn names1(val4);
    check L39() else D5();
  L40():
    vnames1 = force? vnames;
    checkMissing(vnames1);
    c = `is.object`(vnames1);
    if c then L41() else L42(vnames1);
  D5():
    deopt 17 [r14];
  L3(dx1):
    st vnames = dx1;
    keep_null1 = ld `keep.null`;
    check L48() else D9();
  L39():
    goto L2(r14);
  L41():
    dr = tryDispatchBuiltin.1("[", vnames1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(vnames3):
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D9():
    deopt 29 [keep_null1];
  L4(vnames6, r16):
    __ = ldf `[` in base;
    r18 = dyn __(vnames6, r16);
    goto L3(r18);
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L44():
    vnames7 = ld vnames;
    check L46() else D7();
  L45():
    r15 = dyn base4(<sym vnames>);
    goto L4(vnames3, r15);
  L48():
    keep_null2 = force? keep_null1;
    checkMissing(keep_null2);
    c1 = `as.logical`(keep_null2);
    if c1 then L49() else L5();
  D7():
    deopt 23 [vnames3, vnames7];
  L5():
    vnames11 = ld vnames;
    check L91() else D25();
  L18():
    x23 = ld x;
    check L128() else D39();
  L46():
    vnames8 = force? vnames7;
    checkMissing(vnames8);
    nzchar = ldf nzchar in base;
    r17 = dyn nzchar(vnames8);
    check L47() else D8();
  L49():
    vnames9 = ld vnames;
    check L50() else D10();
  D8():
    deopt 26 [vnames3, r17];
  D10():
    deopt 31 [vnames9];
  D25():
    deopt 82 [vnames11];
  D39():
    deopt 129 [x23];
  L47():
    goto L4(vnames3, r17);
  L50():
    vnames10 = force? vnames9;
    checkMissing(vnames10);
    s = toForSeq(vnames10);
    l = length(s);
    i = 0;
    goto L6(i);
  L91():
    vnames12 = force? vnames11;
    checkMissing(vnames12);
    s1 = toForSeq(vnames12);
    l4 = length(s1);
    i39 = 0;
    goto L19(i39);
  L128():
    x24 = force? x23;
    checkMissing(x24);
    popenv;
    return x24;
  L6(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L51() else L17();
  L19(i40):
    i41 = `+`.1(i40, 1);
    c36 = `<`.1(l4, i41);
    if c36 then L92() else L29();
  L17():
    x5 = `[[`(s, i2, NULL, TRUE);
    st v = x5;
    _in_ = ldf `%in%`;
    check L52() else D11();
  L29():
    x14 = `[[`(s1, i41, NULL, TRUE);
    st v = x14;
    _in_1 = ldf `%in%`;
    check L93() else D26();
  L51():
    goto L18();
  L92():
    goto L18();
  D11():
    deopt 34 [i2];
  D26():
    deopt 85 [i41];
  L52():
    p2 = prom<V +>{
      v = ld v;
      v1 = force? v;
      checkMissing(v1);
      return v1;
    };
    p3 = prom<V +>{
      xnames = ld xnames;
      xnames1 = force? xnames;
      checkMissing(xnames1);
      return xnames1;
    };
    r21 = dyn _in_(p2, p3);
    check L53() else D12();
  L93():
    p7 = prom<V +>{
      v14 = ld v;
      v15 = force? v14;
      checkMissing(v15);
      return v15;
    };
    p8 = prom<V +>{
      xnames2 = ld xnames;
      xnames3 = force? xnames2;
      checkMissing(xnames3);
      return xnames3;
    };
    r48 = dyn _in_1(p7, p8);
    check L94() else D27();
  D12():
    deopt 37 [i2, r21];
  D27():
    deopt 88 [i41, r48];
  L53():
    c3 = `as.logical`(r21);
    if c3 then L54() else L7(i2, c3);
  L94():
    c37 = `as.logical`(r48);
    if c37 then L95() else L20(i41, c37);
  L7(i6, c5):
    c17 = `as.logical`(c5);
    if c17 then L64() else L10(i6, c17);
  L20(i45, c39):
    c51 = `as.logical`(c39);
    if c51 then L105() else L23(i45, c51);
  L54():
    sym5 = ldf `is.list`;
    base5 = ldf `is.list` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L95():
    sym8 = ldf `is.list`;
    base8 = ldf `is.list` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L96() else L97();
  L8(i9, c8, r23):
    c14 = `as.logical`(r23);
    c15 = `&&`(c8, c14);
    goto L7(i9, c15);
  L10(i16, c19):
    c31 = `as.logical`(c19);
    if c31 then L74() else L13();
  L21(i48, c42, r50):
    c48 = `as.logical`(r50);
    c49 = `&&`(c42, c48);
    goto L20(i48, c49);
  L23(i55, c53):
    c65 = `as.logical`(c53);
    if c65 then L115() else L26();
  L55():
    x6 = ld x;
    check L57() else D13();
  L56():
    r22 = dyn base5(<lang `[[`(x, v)>);
    goto L8(i2, c3, r22);
  L64():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L96():
    x15 = ld x;
    check L98() else D28();
  L97():
    r49 = dyn base8(<lang `[[`(x, v)>);
    goto L21(i41, c37, r49);
  L105():
    sym9 = ldf `is.list`;
    base9 = ldf `is.list` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L106() else L107();
  D13():
    deopt 40 [i2, c3, x6];
  D28():
    deopt 91 [i41, c37, x15];
  L11(i19, c22, r27):
    c28 = `as.logical`(r27);
    c29 = `&&`(c22, c28);
    goto L10(i19, c29);
  L13():
    val13 = ld val;
    check L81() else D22();
  L15(i30, r39):
    l1 = ld x;
    c35 = `is.object`(l1);
    if c35 then L86() else L87(i30, r39, l1);
  L24(i58, c56, r54):
    c62 = `as.logical`(r54);
    c63 = `&&`(c56, c62);
    goto L23(i58, c63);
  L26():
    val25 = ld val;
    check L119() else D36();
  L27(i66, r63):
    l5 = ld x;
    c69 = `is.object`(l5);
    if c69 then L124() else L125(i66, r63, l5);
  L57():
    x7 = force? x6;
    checkMissing(x7);
    c9 = `is.object`(x7);
    if c9 then L58() else L59(i2, c3, x7);
  L65():
    val5 = ld val;
    check L67() else D16();
  L66():
    r26 = dyn base6(<lang `[[`(val, v)>);
    goto L11(i6, c17, r26);
  L74():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L98():
    x16 = force? x15;
    checkMissing(x16);
    c43 = `is.object`(x16);
    if c43 then L99() else L100(i41, c37, x16);
  L106():
    val17 = ld val;
    check L108() else D31();
  L107():
    r53 = dyn base9(<lang `[[`(val, v)>);
    goto L24(i45, c51, r53);
  L115():
    modifyList1 = ldf modifyList;
    check L116() else D34();
  D16():
    deopt 50 [i6, c17, val5];
  D22():
    deopt 69 [i16, val13];
  D31():
    deopt 101 [i45, c51, val17];
  D34():
    deopt 110 [i55];
  D36():
    deopt 116 [i55, val25];
  L9(i13, c13, dx3):
    is_list2 = ldf `is.list` in base;
    r25 = dyn is_list2(dx3);
    check L62() else D15();
  L14(i29, r31):
    goto L15(i29, r31);
  L16(i37, dx12):
    st x = dx12;
    goto L6(i37);
  L22(i52, c47, dx14):
    is_list4 = ldf `is.list` in base;
    r52 = dyn is_list4(dx14);
    check L103() else D30();
  L28(i73, dx23):
    st x = dx23;
    goto L19(i73);
  L58():
    dr2 = tryDispatchBuiltin.1("[[", x7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(i2, c3, dr2);
  L59(i11, c11, x9):
    v2 = ld v;
    check L61() else D14();
  L67():
    val6 = force? val5;
    checkMissing(val6);
    c23 = `is.object`(val6);
    if c23 then L68() else L69(i6, c17, val6);
  L75():
    modifyList = ldf modifyList;
    check L77() else D19();
  L76():
    r30 = dyn base7(<lang modifyList(`[[`(x, v), `[[`(val, v), keep.null=keep.null)>);
    goto L14(i16, r30);
  L81():
    val14 = force? val13;
    checkMissing(val14);
    c34 = `is.object`(val14);
    if c34 then L82() else L83(i16, val14);
  L86():
    dr12 = tryDispatchBuiltin.0("[<-", l1, r39);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L88() else L87(i30, r39, dr12);
  L87(i35, r42, l3):
    v12 = ld v;
    check L89() else D24();
  L99():
    dr14 = tryDispatchBuiltin.1("[[", x16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L101() else L100(i41, c37, dr14);
  L100(i50, c45, x18):
    v16 = ld v;
    check L102() else D29();
  L108():
    val18 = force? val17;
    checkMissing(val18);
    c57 = `is.object`(val18);
    if c57 then L109() else L110(i45, c51, val18);
  L116():
    p9 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c66 = `is.object`(x20);
      if c66 then L1() else L2(x20);
    L0(dx18):
      return dx18;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", x20);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x22):
      v20 = ld v;
      v21 = force? v20;
      __8 = ldf `[[` in base;
      r57 = dyn __8(x22, v21);
      goto L0(r57);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx17);
    };
    p10 = prom<V +>{
      val21 = ld val;
      val22 = force? val21;
      checkMissing(val22);
      c67 = `is.object`(val22);
      if c67 then L1() else L2(val22);
    L0(dx20):
      return dx20;
    L1():
      dr20 = tryDispatchBuiltin.1("[[", val22);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(val24):
      v22 = ld v;
      v23 = force? v22;
      __9 = ldf `[[` in base;
      r59 = dyn __9(val24, v23);
      goto L0(r59);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx19);
    };
    p11 = prom<V +>{
      keep_null5 = ld `keep.null`;
      keep_null6 = force? keep_null5;
      checkMissing(keep_null6);
      return keep_null6;
    };
    r62 = dyn modifyList1[, , `keep.null`](p9, p10, p11);
    check L117() else D35();
  L119():
    val26 = force? val25;
    checkMissing(val26);
    c68 = `is.object`(val26);
    if c68 then L120() else L121(i55, val26);
  L124():
    dr24 = tryDispatchBuiltin.0("[[<-", l5, r63);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L126() else L125(i66, r63, dr24);
  L125(i71, r66, l7):
    v26 = ld v;
    check L127() else D38();
  D14():
    deopt 42 [i11, c11, x9, v2];
  D15():
    deopt 46 [i13, c13, r25];
  D19():
    deopt 61 [i16];
  D24():
    deopt 75 [i35, r42, l3, r39, v12];
  D29():
    deopt 93 [i50, c45, x18, v16];
  D30():
    deopt 97 [i52, c47, r52];
  D35():
    deopt 115 [i55, r62];
  D38():
    deopt 122 [i71, r66, l7, r63, v26];
  L12(i23, c27, dx5):
    is_list3 = ldf `is.list` in base;
    r29 = dyn is_list3(dx5);
    check L72() else D18();
  L25(i62, c61, dx16):
    is_list5 = ldf `is.list` in base;
    r56 = dyn is_list5(dx16);
    check L113() else D33();
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i2, c3, dx2);
  L61():
    v3 = force? v2;
    __1 = ldf `[[` in base;
    r24 = dyn __1(x9, v3);
    goto L9(i11, c11, r24);
  L62():
    goto L8(i13, c13, r25);
  L68():
    dr4 = tryDispatchBuiltin.1("[[", val6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(i6, c17, dr4);
  L69(i21, c25, val8):
    v4 = ld v;
    check L71() else D17();
  L77():
    p4 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c32 = `is.object`(x11);
      if c32 then L1() else L2(x11);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", x11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x13):
      v6 = ld v;
      v7 = force? v6;
      __3 = ldf `[[` in base;
      r32 = dyn __3(x13, v7);
      goto L0(r32);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p5 = prom<V +>{
      val9 = ld val;
      val10 = force? val9;
      checkMissing(val10);
      c33 = `is.object`(val10);
      if c33 then L1() else L2(val10);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", val10);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(val12):
      v8 = ld v;
      v9 = force? v8;
      __4 = ldf `[[` in base;
      r34 = dyn __4(val12, v9);
      goto L0(r34);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p6 = prom<V +>{
      keep_null3 = ld `keep.null`;
      keep_null4 = force? keep_null3;
      checkMissing(keep_null4);
      return keep_null4;
    };
    r37 = dyn modifyList[, , `keep.null`](p4, p5, p6);
    check L78() else D20();
  L82():
    dr10 = tryDispatchBuiltin.1("[", val14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L84() else L83(i16, dr10);
  L83(i32, val16):
    v10 = ld v;
    check L85() else D23();
  L88():
    dx11 = getTryDispatchBuiltinValue(dr12);
    goto L16(i30, dx11);
  L89():
    v13 = force? v12;
    ___ = ldf `[<-` in base;
    r45 = dyn ___(l3, r39, v13);
    goto L16(i35, r45);
  L101():
    dx13 = getTryDispatchBuiltinValue(dr14);
    goto L22(i41, c37, dx13);
  L102():
    v17 = force? v16;
    __6 = ldf `[[` in base;
    r51 = dyn __6(x18, v17);
    goto L22(i50, c45, r51);
  L103():
    goto L21(i52, c47, r52);
  L109():
    dr16 = tryDispatchBuiltin.1("[[", val18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L111() else L110(i45, c51, dr16);
  L110(i60, c59, val20):
    v18 = ld v;
    check L112() else D32();
  L117():
    goto L27(i55, r62);
  L120():
    dr22 = tryDispatchBuiltin.1("[[", val26);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L122() else L121(i55, dr22);
  L121(i68, val28):
    v24 = ld v;
    check L123() else D37();
  L126():
    dx22 = getTryDispatchBuiltinValue(dr24);
    goto L28(i66, dx22);
  L127():
    v27 = force? v26;
    ____ = ldf `[[<-` in base;
    r69 = dyn ____(l7, r63, v27);
    goto L28(i71, r69);
  D17():
    deopt 52 [i21, c25, val8, v4];
  D18():
    deopt 56 [i23, c27, r29];
  D20():
    deopt 66 [i16, r37];
  D23():
    deopt 71 [i32, val16, v10];
  D32():
    deopt 103 [i60, c59, val20, v18];
  D33():
    deopt 107 [i62, c61, r56];
  D37():
    deopt 118 [i68, val28, v24];
  L70():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(i6, c17, dx4);
  L71():
    v5 = force? v4;
    __2 = ldf `[[` in base;
    r28 = dyn __2(val8, v5);
    goto L12(i21, c25, r28);
  L72():
    goto L11(i23, c27, r29);
  L78():
    list = ldf list in base;
    r38 = dyn list(r37);
    check L79() else D21();
  L84():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(i16, dx10);
  L85():
    v11 = force? v10;
    __5 = ldf `[` in base;
    r40 = dyn __5(val16, v11);
    goto L15(i32, r40);
  L111():
    dx15 = getTryDispatchBuiltinValue(dr16);
    goto L25(i45, c51, dx15);
  L112():
    v19 = force? v18;
    __7 = ldf `[[` in base;
    r55 = dyn __7(val20, v19);
    goto L25(i60, c59, r55);
  L113():
    goto L24(i62, c61, r56);
  L122():
    dx21 = getTryDispatchBuiltinValue(dr22);
    goto L27(i55, dx21);
  L123():
    v25 = force? v24;
    __10 = ldf `[[` in base;
    r64 = dyn __10(val28, v25);
    goto L27(i68, r64);
  D21():
    deopt 68 [i16, r38];
  L79():
    goto L14(i16, r38);
  }
}