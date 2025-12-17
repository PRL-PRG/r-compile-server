fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner991016169;
    st `.makeMlist2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner991016169(args, objects, j) {
  (reg args:*, reg objects:*, reg j:*) -+> V { var args:*, var objects:*, var j:*, reg j_isMissing:L, reg j_orDefault:*, reg _MlistDefunct:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg objects1:*, reg objects2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg is_primitive:cls, reg what:*, reg what1:V, reg p:p(V +), reg r5:V, reg r6:V, reg c1:L, reg __:cls, reg r7:V, reg i7:I, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg i10:I, reg r10:V, reg sig:*, reg sig1:V, reg length:cls, reg r11:V, reg j1:*, reg j2:V, reg r12:V, reg c2:L, reg i13:I, reg sig2:*, reg sig3:V, reg c3:L, reg i15:I, reg sig5:V, reg dr:V, reg dc:L, reg dx:V, reg i17:I, reg dx1:V, reg j3:*, reg j4:V, reg __1:cls, reg r14:V, reg sig6:*, reg sig7:V, reg c4:L, reg i19:I, reg sig9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i21:I, reg dx3:V, reg j5:*, reg j6:V, reg r15:V, reg __2:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg i24:I, reg r18:V, reg what2:*, reg what3:V, reg list1:cls, reg r19:V, reg mlists:*, reg mlists1:V, reg c5:L, reg i26:I, reg mlists3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i28:I, reg dx5:V, reg arg1:*, reg arg2:V, reg __3:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg i31:I, reg r22:V, reg el:*, reg el1:V, reg c6:V, reg c7:L, reg x1:*, reg x2:V, reg i34:I, reg x3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg el2:*, reg el3:V, reg x4:*, reg x5:V, reg c8:cls, reg r24:V, reg l1:*, reg c9:L, reg i38:I, reg x7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i40:I, reg dx7:V, reg arg3:*, reg arg4:V, reg ____:cls, reg r25:V, reg j7:*, reg j8:V, reg r26:V, reg jNext:*, reg jNext1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg jNext4:V, reg r28:V, reg args1:*, reg args2:V, reg length1:cls, reg r29:V, reg r30:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg mlists4:*, reg mlists5:V, reg r33:I, reg s1:V, reg l4:I, reg i41:I, reg i42:I, reg i43:I, reg c11:L, reg x10:V, reg _makeMlist2:cls, reg args3:*, reg args4:V, reg p1:p(V +), reg mlists6:*, reg mlists7:V, reg c12:L, reg mlists9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i46:*, reg i47:V, reg __4:cls, reg r35:V, reg p2:p(V +), reg jNext5:*, reg jNext6:V, reg p3:p(V +), reg r38:V, reg l5:*, reg c13:L, reg i49:I, reg r40:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i51:I, reg dx11:V, reg i52:*, reg i53:V, reg ____1:cls, reg r43:V, reg as_name:cls, reg args5:*, reg args6:V, reg c14:L, reg args8:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg jNext7:*, reg jNext8:V, reg __5:cls, reg r44:V, reg p4:p(V +), reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg mlists10:*, reg mlists11:V, reg r49:I, reg s2:V, reg l8:I, reg i55:I, reg i56:I, reg i57:I, reg c15:L, reg x11:V, reg _makeMlist3:cls, reg arg5:*, reg arg6:V, reg p5:p(V +), reg mlists12:*, reg mlists13:V, reg c16:L, reg mlists15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i60:*, reg i61:V, reg __6:cls, reg r51:V, reg p6:p(V +), reg jNext9:*, reg jNext10:V, reg p7:p(V +), reg r54:V, reg l9:*, reg c17:L, reg i63:I, reg r56:V, reg l11:*, reg dr16:V, reg dc8:L, reg dx16:V, reg i65:I, reg dx17:V, reg i66:*, reg i67:V, reg ____2:cls, reg r59:V, reg new:cls, reg as_name1:cls, reg args9:*, reg args10:V, reg c18:L, reg args12:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __7:cls, reg r60:V, reg p8:p(V +), reg r62:V, reg p9:p(V +), reg mlists16:*, reg mlists17:V, reg p10:p(V +), reg mlists18:*, reg mlists19:V, reg p11:p(V +), reg r66:V |
    mkenv;
    st args = args;
    st objects = objects;
    j_isMissing = missing.0(j);
    if j_isMissing then L0(1.0) else L0(j);
  L0(j_orDefault):
    st j = j_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    r = dyn _MlistDefunct(".makeMlist2()");
    check L29() else D1();
  D1():
    deopt 3 [r];
  L29():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1(r2):
    st mlists = r2;
    objects1 = ld objects;
    check L33() else D3();
  L30():
    list = ldf list in base;
    r3 = dyn list();
    check L32() else D2();
  L31():
    r1 = dyn base();
    goto L1(r1);
  D2():
    deopt 7 [r3];
  D3():
    deopt 9 [objects1];
  L32():
    goto L1(r3);
  L33():
    objects2 = force? objects1;
    checkMissing(objects2);
    s = toForSeq(objects2);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L34() else L16();
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    is_primitive = ldf `is.primitive`;
    check L35() else D4();
  L34():
    j7 = ld j;
    check L80() else D23();
  D4():
    deopt 12 [i2];
  D23():
    deopt 85 [j7];
  L35():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r5 = dyn is_primitive(p);
    check L36() else D5();
  L80():
    j8 = force? j7;
    checkMissing(j8);
    r26 = `+`(j8, 1.0);
    st jNext = r26;
    jNext = ld jNext;
    check L81() else D24();
  D5():
    deopt 14 [i2, r5];
  D24():
    deopt 90 [jNext];
  L36():
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L37() else L3();
  L81():
    jNext1 = force? jNext;
    checkMissing(jNext1);
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L3():
    goto L4(i2, NULL);
  L4(i7, r8):
    st sig = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L17(jNext4, r28):
    r30 = `<`(jNext4, r28);
    c10 = `as.logical`(r30);
    if c10 then L86() else L18();
  L37():
    __ = ldf `@` in base;
    r7 = dyn __(<sym what>, <sym defined>);
    goto L4(i2, r7);
  L82():
    args1 = ld args;
    check L84() else D25();
  L83():
    r27 = dyn base5(<sym args>);
    goto L17(jNext1, r27);
  D25():
    deopt 93 [jNext1, args1];
  L5(i10, r10):
    j1 = ld j;
    check L43() else D8();
  L18():
    as_name = ldf `as.name`;
    check L98() else D31();
  L23():
    new = ldf new;
    check L110() else D37();
  L39():
    sig = ld sig;
    check L41() else D6();
  L40():
    r9 = dyn base1(<sym sig>);
    goto L5(i7, r9);
  L84():
    args2 = force? args1;
    checkMissing(args2);
    length1 = ldf length in base;
    r29 = dyn length1(args2);
    check L85() else D26();
  L86():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  D6():
    deopt 23 [i7, sig];
  D8():
    deopt 26 [i10, r10, j1];
  D26():
    deopt 96 [jNext1, r29];
  D31():
    deopt 117 [];
  D37():
    deopt 140 [];
  L19(r32):
    s1 = toForSeq(r32);
    l4 = length(s1);
    i41 = 0;
    goto L20(i41);
  L41():
    sig1 = force? sig;
    checkMissing(sig1);
    length = ldf length in base;
    r11 = dyn length(sig1);
    check L42() else D7();
  L43():
    j2 = force? j1;
    checkMissing(j2);
    r12 = `<=`(r10, j2);
    c2 = `as.logical`(r12);
    if c2 then L44() else L6();
  L85():
    goto L17(jNext1, r29);
  L87():
    mlists4 = ld mlists;
    check L89() else D27();
  L88():
    r31 = dyn base6(<sym mlists>);
    goto L19(r31);
  L98():
    p4 = prom<V +>{
      args5 = ld args;
      args6 = force? args5;
      checkMissing(args6);
      c14 = `is.object`(args6);
      if c14 then L1() else L2(args6);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", args6);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(args8):
      jNext7 = ld jNext;
      jNext8 = force? jNext7;
      __5 = ldf `[[` in base;
      r44 = dyn __5(args8, jNext8);
      goto L0(r44);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r46 = dyn as_name(p4);
    check L99() else D32();
  L110():
    p9 = prom<V +>{
      as_name1 = ldf `as.name`;
      p8 = prom<V +>{
        args9 = ld args;
        args10 = force? args9;
        checkMissing(args10);
        c18 = `is.object`(args10);
        if c18 then L1() else L2(args10);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("[[", args10);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(args12):
        __7 = ldf `[[` in base;
        r60 = dyn __7(args12, 1);
        goto L0(r60);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      r62 = dyn as_name1(p8);
      return r62;
    };
    p10 = prom<V +>{
      mlists16 = ld mlists;
      mlists17 = force? mlists16;
      checkMissing(mlists17);
      return mlists17;
    };
    p11 = prom<V +>{
      mlists18 = ld mlists;
      mlists19 = force? mlists18;
      checkMissing(mlists19);
      return mlists19;
    };
    r66 = dyn new[, argument, methods, allMethods]("MethodsList", p9, p10, p11);
    check L111() else D38();
  D7():
    deopt 26 [i7, r11];
  D27():
    deopt 99 [mlists4];
  D32():
    deopt 119 [r46];
  D38():
    deopt 148 [r66];
  L6():
    sig2 = ld sig;
    check L46() else D9();
  L7(i13):
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L20(i42):
    i43 = `+`.1(i42, 1);
    c11 = `<`.1(l4, i43);
    if c11 then L90() else L22();
  L42():
    goto L5(i7, r11);
  L44():
    st arg2 = "ANY";
    st arg1 = "ANY";
    goto L7(i10);
  L89():
    mlists5 = force? mlists4;
    checkMissing(mlists5);
    r33 = seq_along(mlists5);
    goto L19(r33);
  L99():
    st arg2 = r46;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L111():
    popenv;
    return r66;
  D9():
    deopt 33 [i10, sig2];
  L10(i24, r18):
    st x = r18;
    mlists = ld mlists;
    check L60() else D15();
  L22():
    x10 = `[[`(s1, i43, NULL, TRUE);
    st i = x10;
    _makeMlist2 = ldf `.makeMlist2`;
    check L91() else D28();
  L24(r48):
    s2 = toForSeq(r48);
    l8 = length(s2);
    i55 = 0;
    goto L25(i55);
  L46():
    sig3 = force? sig2;
    checkMissing(sig3);
    c3 = `is.object`(sig3);
    if c3 then L47() else L48(i10, sig3);
  L56():
    what2 = ld what;
    check L58() else D13();
  L57():
    r17 = dyn base2(<sym what>);
    goto L10(i13, r17);
  L90():
    goto L23();
  L100():
    mlists10 = ld mlists;
    check L102() else D33();
  L101():
    r47 = dyn base7(<sym mlists>);
    goto L24(r47);
  D13():
    deopt 49 [i13, what2];
  D15():
    deopt 54 [i24, mlists];
  D28():
    deopt 103 [i43];
  D33():
    deopt 122 [mlists10];
  L8(i17, dx1):
    st arg1 = dx1;
    sig6 = ld sig;
    check L51() else D11();
  L25(i56):
    i57 = `+`.1(i56, 1);
    c15 = `<`.1(l8, i57);
    if c15 then L103() else L27();
  L47():
    dr = tryDispatchBuiltin.1("[[", sig3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(i10, dr);
  L48(i15, sig5):
    j3 = ld j;
    check L50() else D10();
  L58():
    what3 = force? what2;
    checkMissing(what3);
    list1 = ldf list in base;
    r19 = dyn list1(what3);
    check L59() else D14();
  L60():
    mlists1 = force? mlists;
    checkMissing(mlists1);
    c5 = `is.object`(mlists1);
    if c5 then L61() else L62(i24, mlists1);
  L91():
    p1 = prom<V +>{
      args3 = ld args;
      args4 = force? args3;
      checkMissing(args4);
      return args4;
    };
    p2 = prom<V +>{
      mlists6 = ld mlists;
      mlists7 = force? mlists6;
      checkMissing(mlists7);
      c12 = `is.object`(mlists7);
      if c12 then L1() else L2(mlists7);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", mlists7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(mlists9):
      i46 = ld i;
      i47 = force? i46;
      __4 = ldf `[[` in base;
      r35 = dyn __4(mlists9, i47);
      goto L0(r35);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p3 = prom<V +>{
      jNext5 = ld jNext;
      jNext6 = force? jNext5;
      checkMissing(jNext6);
      return jNext6;
    };
    r38 = dyn _makeMlist2(p1, p2, p3);
    check L92() else D29();
  L102():
    mlists11 = force? mlists10;
    checkMissing(mlists11);
    r49 = seq_along(mlists11);
    goto L24(r49);
  D10():
    deopt 35 [i15, sig5, j3];
  D11():
    deopt 39 [i17, sig6];
  D14():
    deopt 52 [i13, r19];
  D29():
    deopt 107 [i43, r38];
  L11(i28, dx5):
    st el = dx5;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L65() else L66();
  L27():
    x11 = `[[`(s2, i57, NULL, TRUE);
    st i = x11;
    _makeMlist3 = ldf `.makeMlist1`;
    check L104() else D34();
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(i10, dx);
  L50():
    j4 = force? j3;
    __1 = ldf `[[` in base;
    r14 = dyn __1(sig5, j4);
    goto L8(i15, r14);
  L51():
    sig7 = force? sig6;
    checkMissing(sig7);
    c4 = `is.object`(sig7);
    if c4 then L52() else L53(i17, sig7);
  L59():
    goto L10(i13, r19);
  L61():
    dr4 = tryDispatchBuiltin.1("[[", mlists1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(i24, dr4);
  L62(i26, mlists3):
    arg1 = ld arg1;
    check L64() else D16();
  L92():
    l5 = ld mlists;
    c13 = `is.object`(l5);
    if c13 then L93() else L94(i43, r38, l5);
  L103():
    goto L23();
  D16():
    deopt 56 [i26, mlists3, arg1];
  D34():
    deopt 126 [i57];
  L9(i21, dx3):
    st arg2 = dx3;
    goto L7(i21);
  L12(i31, r22):
    c7 = `as.logical`(r22);
    if c7 then L68() else L13();
  L21(i51, dx11):
    st mlists = dx11;
    goto L20(i51);
  L52():
    dr2 = tryDispatchBuiltin.1("[[", sig7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(i17, dr2);
  L53(i19, sig9):
    j5 = ld j;
    check L55() else D12();
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(i24, dx4);
  L64():
    arg2 = force? arg1;
    __3 = ldf `[[` in base;
    r20 = dyn __3(mlists1, arg2, TRUE);
    goto L11(i26, r20);
  L65():
    el = ld el;
    check L67() else D17();
  L66():
    r21 = dyn base3(<sym el>);
    goto L12(i28, r21);
  L93():
    dr10 = tryDispatchBuiltin.0("[[<-", l5, r38);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L95() else L94(i43, r38, dr10);
  L94(i49, r40, l7):
    i52 = ld i;
    check L96() else D30();
  L104():
    p5 = prom<V +>{
      arg5 = ld arg2;
      arg6 = force? arg5;
      checkMissing(arg6);
      return arg6;
    };
    p6 = prom<V +>{
      mlists12 = ld mlists;
      mlists13 = force? mlists12;
      checkMissing(mlists13);
      c16 = `is.object`(mlists13);
      if c16 then L1() else L2(mlists13);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", mlists13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(mlists15):
      i60 = ld i;
      i61 = force? i60;
      __6 = ldf `[[` in base;
      r51 = dyn __6(mlists15, i61);
      goto L0(r51);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p7 = prom<V +>{
      jNext9 = ld jNext;
      jNext10 = force? jNext9;
      checkMissing(jNext10);
      return jNext10;
    };
    r54 = dyn _makeMlist3(p5, p6, p7);
    check L105() else D35();
  D12():
    deopt 41 [i19, sig9, j5];
  D17():
    deopt 64 [i28, el];
  D30():
    deopt 109 [i49, r40, l7, r38, i52];
  D35():
    deopt 130 [i57, r54];
  L13():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L14(i34, x3):
    l1 = ld mlists;
    c9 = `is.object`(l1);
    if c9 then L76() else L77(i34, x3, l1);
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i17, dx2);
  L55():
    j6 = force? j5;
    checkMissing(j6);
    r15 = `+`(j6, 1.0);
    __2 = ldf `[[` in base;
    r16 = dyn __2(sig9, r15);
    goto L9(i19, r16);
  L67():
    el1 = force? el;
    checkMissing(el1);
    c6 = `==`(el1, NULL);
    goto L12(i28, c6);
  L68():
    x1 = ld x;
    check L69() else D18();
  L95():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L21(i43, dx10);
  L96():
    i53 = force? i52;
    ____1 = ldf `[[<-` in base;
    r43 = dyn ____1(l7, r38, i53);
    goto L21(i49, r43);
  L105():
    l9 = ld mlists;
    c17 = `is.object`(l9);
    if c17 then L106() else L107(i57, r54, l9);
  D18():
    deopt 67 [i31, x1];
  L15(i40, dx7):
    st mlists = dx7;
    goto L2(i40);
  L26(i65, dx17):
    st mlists = dx17;
    goto L25(i65);
  L69():
    x2 = force? x1;
    checkMissing(x2);
    goto L14(i31, x2);
  L71():
    el2 = ld el;
    check L73() else D19();
  L72():
    r23 = dyn base4(<sym el>, <sym x>);
    goto L14(i31, r23);
  L76():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, x3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(i34, x3, dr6);
  L77(i38, x7, l3):
    arg3 = ld arg1;
    check L79() else D22();
  L106():
    dr16 = tryDispatchBuiltin.0("[[<-", l9, r54);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L108() else L107(i57, r54, dr16);
  L107(i63, r56, l11):
    i66 = ld i;
    check L109() else D36();
  D19():
    deopt 71 [i31, el2];
  D22():
    deopt 78 [i38, x7, l3, x3, arg3];
  D36():
    deopt 132 [i63, r56, l11, r54, i66];
  L73():
    el3 = force? el2;
    checkMissing(el3);
    x4 = ld x;
    check L74() else D20();
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i34, dx6);
  L79():
    arg4 = force? arg3;
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l3, x3, arg4);
    goto L15(i38, r25);
  L108():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L26(i57, dx16);
  L109():
    i67 = force? i66;
    ____2 = ldf `[[<-` in base;
    r59 = dyn ____2(l11, r54, i67);
    goto L26(i63, r59);
  D20():
    deopt 73 [i31, x4];
  L74():
    x5 = force? x4;
    checkMissing(x5);
    c8 = ldf c in base;
    r24 = dyn c8(el3, x5);
    check L75() else D21();
  D21():
    deopt 76 [i31, r24];
  L75():
    goto L14(i31, r24);
  }
}