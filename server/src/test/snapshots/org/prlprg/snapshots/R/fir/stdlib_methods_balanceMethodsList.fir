fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4190926095;
    st balanceMethodsList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4190926095(mlist, args, check) {
  (reg mlist:*, reg args:*, reg check:*) -+> V { var mlist:*, var args:*, var check:*, reg check_isMissing:L, reg check_orDefault:*, reg _MlistDefunct:cls, reg r:V, reg args1:*, reg args2:V, reg c:L, reg args4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg moreArgs:*, reg moreArgs1:V, reg length:cls, reg r4:V, reg r5:V, reg c1:L, reg mlist1:*, reg mlist2:V, reg __1:cls, reg r8:V, reg check1:*, reg check2:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c7:L, reg r10:V, reg methods:*, reg methods1:V, reg length1:cls, reg r11:V, reg c8:L, reg c9:V, reg c11:L, reg methods2:*, reg methods3:V, reg c12:L, reg methods5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r12:V, reg is:cls, reg el:*, reg el1:V, reg p:p(V +), reg r14:V, reg c13:L, reg __3:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg mm:*, reg mm1:V, reg length2:cls, reg r18:V, reg r19:V, reg c14:L, reg depth:*, reg depth1:V, reg r21:V, reg mm2:*, reg mm3:V, reg c15:L, reg mm5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __4:cls, reg r22:V, reg depth2:*, reg depth3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg depth6:V, reg r24:V, reg args5:*, reg args6:V, reg length3:cls, reg r25:V, reg r26:V, reg c16:L, reg mlist3:*, reg mlist4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg methods6:*, reg methods7:V, reg r32:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c17:L, reg x:V, reg methods8:*, reg methods9:V, reg c18:L, reg i6:I, reg methods11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg i9:*, reg i10:V, reg __5:cls, reg r33:V, reg is1:cls, reg el2:*, reg el3:V, reg p1:p(V +), reg r35:V, reg c19:L, reg Recall:cls, reg el4:*, reg el5:V, reg p2:p(V +), reg moreArgs2:*, reg moreArgs3:V, reg p3:p(V +), reg r38:V, reg i13:I, reg is2:cls, reg el6:*, reg el7:V, reg p4:p(V +), reg r41:V, reg c20:L, reg l1:*, reg __6:cls, reg target:*, reg target1:V, reg p5:p(V +), reg r43:V, reg c21:L, reg i17:I, reg r46:S, reg l3:*, reg r47:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i19:I, reg r49:S, reg l5:*, reg dx9:V, reg moreArgs4:*, reg moreArgs5:V, reg ___:cls, reg r50:V, reg ___1:cls, reg r51:V, reg l6:*, reg __7:cls, reg defined:*, reg defined1:V, reg p6:p(V +), reg r53:V, reg c22:L, reg i21:I, reg r56:S, reg l8:*, reg r57:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i23:I, reg r59:S, reg l10:*, reg dx11:V, reg moreArgs6:*, reg moreArgs7:V, reg ___2:cls, reg r60:V, reg ___3:cls, reg r61:V, reg i24:I, reg rev:cls, reg moreArgs8:*, reg moreArgs9:V, reg p7:p(V +), reg r64:V, reg s1:V, reg l11:I, reg i25:I, reg i26:I, reg i27:I, reg i28:I, reg c23:L, reg x1:V, reg new:cls, reg as_name:cls, reg what:*, reg what1:V, reg p8:p(V +), reg r66:V, reg p9:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg el8:*, reg el9:V, reg list:cls, reg r70:V, reg p10:p(V +), reg r72:V, reg el10:*, reg el11:V, reg l12:*, reg c24:L, reg i34:I, reg el13:V, reg l14:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i36:I, reg dx13:V, reg i37:*, reg i38:V, reg ____:cls, reg r73:V, reg methods12:*, reg methods13:V, reg l15:*, reg ___4:cls, reg r74:V, reg mlist5:*, reg mlist6:V |
    mkenv;
    st mlist = mlist;
    st args = args;
    check_isMissing = missing.0(check);
    if check_isMissing then L0(TRUE) else L0(check);
  L0(check_orDefault):
    st check = check_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    r = dyn _MlistDefunct("balanceMethodsList()");
    check L33() else D1();
  D1():
    deopt 3 [r];
  L33():
    args1 = ld args;
    check L34() else D2();
  D2():
    deopt 4 [args1];
  L34():
    args2 = force? args1;
    checkMissing(args2);
    c = `is.object`(args2);
    if c then L35() else L36(args2);
  L1(dx1):
    st moreArgs = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L35():
    dr = tryDispatchBuiltin.1("[", args2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(args4):
    __ = ldf `[` in base;
    r1 = dyn __(args4, -1);
    goto L1(r1);
  L2(r3):
    r5 = `==`(r3, 0);
    c1 = `as.logical`(r5);
    if c1 then L42() else L3();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L38():
    moreArgs = ld moreArgs;
    check L40() else D3();
  L39():
    r2 = dyn base(<sym moreArgs>);
    goto L2(r2);
  D3():
    deopt 12 [moreArgs];
  L3():
    __1 = ldf `@` in base;
    r8 = dyn __1(<sym mlist>, <sym methods>);
    st methods = r8;
    check1 = ld check;
    check L46() else D6();
  L40():
    moreArgs1 = force? moreArgs;
    checkMissing(moreArgs1);
    length = ldf length in base;
    r4 = dyn length(moreArgs1);
    check L41() else D4();
  L42():
    mlist1 = ld mlist;
    check L43() else D5();
  D4():
    deopt 15 [r4];
  D5():
    deopt 18 [mlist1];
  D6():
    deopt 26 [check1];
  L41():
    goto L2(r4);
  L43():
    mlist2 = force? mlist1;
    checkMissing(mlist2);
    popenv;
    return mlist2;
  L46():
    check2 = force? check1;
    checkMissing(check2);
    c2 = `as.logical`(check2);
    if c2 then L47() else L5(c2);
  L5(c4):
    c11 = `as.logical`(c4);
    if c11 then L53() else L7();
  L47():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L6(c7, r10):
    c8 = `as.logical`(r10);
    c9 = `&&`(c7, c8);
    goto L5(c9);
  L7():
    goto L18();
  L18():
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  L48():
    methods = ld methods;
    check L50() else D7();
  L49():
    r9 = dyn base1(<sym methods>);
    goto L6(c2, r9);
  L53():
    st depth = 0.0;
    methods2 = ld methods;
    check L54() else D9();
  D7():
    deopt 30 [c2, methods];
  D9():
    deopt 38 [methods2];
  L19(r31):
    s = toForSeq(r31);
    l = length(s);
    i = 0;
    goto L20(i);
  L50():
    methods1 = force? methods;
    checkMissing(methods1);
    length1 = ldf length in base;
    r11 = dyn length1(methods1);
    check L51() else D8();
  L54():
    methods3 = force? methods2;
    checkMissing(methods3);
    c12 = `is.object`(methods3);
    if c12 then L55() else L56(methods3);
  L84():
    methods6 = ld methods;
    check L86() else D20();
  L85():
    r30 = dyn base4(<sym methods>);
    goto L19(r30);
  D8():
    deopt 33 [c2, r11];
  D20():
    deopt 94 [methods6];
  L8(dx3):
    st el = dx3;
    goto L14();
  L20(i1):
    i2 = `+`.1(i1, 1);
    c17 = `<`.1(l, i2);
    if c17 then L87() else L31();
  L51():
    goto L6(c2, r11);
  L55():
    dr2 = tryDispatchBuiltin.1("[[", methods3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(dr2);
  L56(methods5):
    __2 = ldf `[[` in base;
    r12 = dyn __2(methods5, 1);
    goto L8(r12);
  L86():
    methods7 = force? methods6;
    checkMissing(methods7);
    r32 = seq_along(methods7);
    goto L19(r32);
  L14():
    is = ldf is;
    check L58() else D10();
  L31():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    methods8 = ld methods;
    check L88() else D21();
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L87():
    methods12 = ld methods;
    check L129() else D45();
  D10():
    deopt 45 [];
  D21():
    deopt 97 [i2, methods8];
  D45():
    deopt 180 [methods12];
  L58():
    p = prom<V +>{
      el = ld el;
      el1 = force? el;
      checkMissing(el1);
      return el1;
    };
    r14 = dyn is(p, "MethodsList");
    check L59() else D11();
  L88():
    methods9 = force? methods8;
    checkMissing(methods9);
    c18 = `is.object`(methods9);
    if c18 then L89() else L90(i2, methods9);
  L129():
    methods13 = force? methods12;
    checkMissing(methods13);
    l15 = ld mlist;
    ___4 = ldf `@<-`;
    check L130() else D46();
  D11():
    deopt 48 [r14];
  D46():
    deopt 183 [methods13, l15, methods13];
  L21(i8, dx7):
    st el = dx7;
    is1 = ldf is;
    check L93() else D23();
  L59():
    c13 = `as.logical`(r14);
    if c13 then L60() else L9();
  L89():
    dr6 = tryDispatchBuiltin.1("[[", methods9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L91() else L90(i2, dr6);
  L90(i6, methods11):
    i9 = ld i;
    check L92() else D22();
  L130():
    r74 = dyn ___4(l15, NULL, "methods", methods13);
    check L131() else D47();
  D22():
    deopt 99 [i6, methods11, i9];
  D23():
    deopt 104 [i8];
  D47():
    deopt 186 [methods13, r74];
  L9():
    depth2 = ld depth;
    check L74() else D16();
  L60():
    __3 = ldf `@` in base;
    r15 = dyn __3(<sym el>, <sym methods>);
    st mm = r15;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  L91():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(i2, dx6);
  L92():
    i10 = force? i9;
    __5 = ldf `[[` in base;
    r33 = dyn __5(methods11, i10);
    goto L21(i6, r33);
  L93():
    p1 = prom<V +>{
      el2 = ld el;
      el3 = force? el2;
      checkMissing(el3);
      return el3;
    };
    r35 = dyn is1(p1, "MethodsList");
    check L94() else D24();
  L131():
    st mlist = r74;
    mlist5 = ld mlist;
    check L132() else D48();
  D16():
    deopt 78 [depth2];
  D24():
    deopt 107 [i8, r35];
  D48():
    deopt 188 [mlist5];
  L10(r17):
    r19 = `==`(r17, 0);
    c14 = `as.logical`(r19);
    if c14 then L65() else L11();
  L61():
    mm = ld mm;
    check L63() else D12();
  L62():
    r16 = dyn base2(<sym mm>);
    goto L10(r16);
  L74():
    depth3 = force? depth2;
    checkMissing(depth3);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L94():
    c19 = `as.logical`(r35);
    if c19 then L95() else L22();
  L132():
    mlist6 = force? mlist5;
    checkMissing(mlist6);
    popenv;
    return mlist6;
  D12():
    deopt 54 [mm];
  L11():
    depth = ld depth;
    check L68() else D14();
  L15(depth6, r24):
    r26 = `>=`(depth6, r24);
    c16 = `as.logical`(r26);
    if c16 then L79() else L16();
  L22():
    is2 = ldf is;
    check L99() else D27();
  L23(i13):
    el10 = ld el;
    check L124() else D43();
  L63():
    mm1 = force? mm;
    checkMissing(mm1);
    length2 = ldf length in base;
    r18 = dyn length2(mm1);
    check L64() else D13();
  L65():
    goto L9();
  L75():
    args5 = ld args;
    check L77() else D17();
  L76():
    r23 = dyn base3(<sym args>);
    goto L15(depth3, r23);
  L95():
    Recall = ldf Recall;
    check L96() else D25();
  D13():
    deopt 57 [r18];
  D14():
    deopt 64 [depth];
  D17():
    deopt 81 [depth3, args5];
  D25():
    deopt 109 [i8];
  D27():
    deopt 116 [i8];
  D43():
    deopt 170 [i13, el10];
  L16():
    goto L18();
  L64():
    goto L10(r18);
  L68():
    depth1 = force? depth;
    checkMissing(depth1);
    r21 = `+`(depth1, 1);
    st depth = r21;
    mm2 = ld mm;
    check L69() else D15();
  L77():
    args6 = force? args5;
    checkMissing(args6);
    length3 = ldf length in base;
    r25 = dyn length3(args6);
    check L78() else D18();
  L79():
    mlist3 = ld mlist;
    check L80() else D19();
  L96():
    p2 = prom<V +>{
      el4 = ld el;
      el5 = force? el4;
      checkMissing(el5);
      return el5;
    };
    p3 = prom<V +>{
      moreArgs2 = ld moreArgs;
      moreArgs3 = force? moreArgs2;
      checkMissing(moreArgs3);
      return moreArgs3;
    };
    r38 = dyn Recall(p2, p3, FALSE);
    check L97() else D26();
  L99():
    p4 = prom<V +>{
      el6 = ld el;
      el7 = force? el6;
      checkMissing(el7);
      return el7;
    };
    r41 = dyn is2(p4, "MethodDefinition");
    check L100() else D28();
  L124():
    el11 = force? el10;
    checkMissing(el11);
    l12 = ld methods;
    c24 = `is.object`(l12);
    if c24 then L125() else L126(i13, el11, l12);
  D15():
    deopt 69 [mm2];
  D18():
    deopt 84 [depth3, r25];
  D19():
    deopt 86 [mlist3];
  D26():
    deopt 113 [i8, r38];
  D28():
    deopt 119 [i8, r41];
  L30(i36, dx13):
    st methods = dx13;
    goto L20(i36);
  L69():
    mm3 = force? mm2;
    checkMissing(mm3);
    c15 = `is.object`(mm3);
    if c15 then L70() else L71(mm3);
  L78():
    goto L15(depth3, r25);
  L80():
    mlist4 = force? mlist3;
    checkMissing(mlist4);
    popenv;
    return mlist4;
  L97():
    st el = r38;
    goto L23(i8);
  L100():
    c20 = `as.logical`(r41);
    if c20 then L101() else L24();
  L125():
    dr12 = tryDispatchBuiltin.0("[[<-", l12, el11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L127() else L126(i13, el11, dr12);
  L126(i34, el13, l14):
    i37 = ld i;
    check L128() else D44();
  D44():
    deopt 173 [i34, el13, l14, el11, i37];
  L13(dx5):
    st el = dx5;
    goto L14();
  L24():
    goto L27(i8);
  L27(i24):
    rev = ldf rev;
    check L119() else D39();
  L70():
    dr4 = tryDispatchBuiltin.1("[[", mm3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(dr4);
  L71(mm5):
    __4 = ldf `[[` in base;
    r22 = dyn __4(mm5, 1);
    goto L13(r22);
  L101():
    l1 = ld el;
    __6 = ldf `@`;
    check L102() else D29();
  L127():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L30(i13, dx12);
  L128():
    i38 = force? i37;
    ____ = ldf `[[<-` in base;
    r73 = dyn ____(l14, el11, i38);
    goto L30(i34, r73);
  D29():
    deopt 123 [i8, "ANY", l1, "ANY"];
  D39():
    deopt 155 [i24];
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L102():
    p5 = prom<V +>{
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      return target1;
    };
    r43 = dyn __6("ANY", NULL, p5);
    check L103() else D30();
  L119():
    p7 = prom<V +>{
      moreArgs8 = ld moreArgs;
      moreArgs9 = force? moreArgs8;
      checkMissing(moreArgs9);
      return moreArgs9;
    };
    r64 = dyn rev(p7);
    check L120() else D40();
  D30():
    deopt 126 [i8, "ANY", l1, "ANY", r43];
  D40():
    deopt 157 [i24, r64];
  L103():
    c21 = `is.object`(r43);
    if c21 then L104() else L105(i8, "ANY", l1, r43);
  L120():
    s1 = toForSeq(r64);
    l11 = length(s1);
    i25 = 0;
    goto L28(i24, i25);
  L25(i19, r49, l5, dx9):
    ___1 = ldf `@<-`;
    check L108() else D32();
  L28(i26, i27):
    i28 = `+`.1(i27, 1);
    c23 = `<`.1(l11, i28);
    if c23 then L121() else L29();
  L104():
    dr8 = tryDispatchBuiltin.0("[<-", r43, "ANY");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L106() else L105(i8, "ANY", l1, dr8);
  L105(i17, r46, l3, r47):
    moreArgs4 = ld moreArgs;
    check L107() else D31();
  D31():
    deopt 128 [i17, r46, l3, r47, "ANY", moreArgs4];
  D32():
    deopt 131 [i19, r49, l5, dx9];
  L29():
    x1 = `[[`(s1, i28, NULL, TRUE);
    st what = x1;
    new = ldf new;
    check L122() else D41();
  L106():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L25(i8, "ANY", l1, dx8);
  L107():
    moreArgs5 = force? moreArgs4;
    ___ = ldf `[<-` in base;
    r50 = dyn ___(r47, "ANY", moreArgs5);
    goto L25(i17, r46, l3, r50);
  L108():
    r51 = dyn ___1(l5, NULL, "target", dx9);
    check L109() else D33();
  L121():
    goto L23(i26);
  D33():
    deopt 134 [i19, r49, r51];
  D41():
    deopt 159 [i26, i28];
  L109():
    st el = r51;
    l6 = ld el;
    __7 = ldf `@`;
    check L110() else D34();
  L122():
    p9 = prom<V +>{
      as_name = ldf `as.name`;
      p8 = prom<V +>{
        what = ld what;
        what1 = force? what;
        checkMissing(what1);
        return what1;
      };
      r66 = dyn as_name(p8);
      return r66;
    };
    p10 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      el8 = ld el;
      el9 = force? el8;
      checkMissing(el9);
      list = ldf list in base;
      r70 = dyn list(el9);
      goto L0(r70);
    L2():
      r68 = dyn base5[ANY](<sym el>);
      goto L0(r68);
    };
    r72 = dyn new[, argument, methods]("MethodsList", p9, p10);
    check L123() else D42();
  D34():
    deopt 139 [i19, "ANY", l6, "ANY"];
  D42():
    deopt 165 [i26, i28, r72];
  L110():
    p6 = prom<V +>{
      defined = ld defined;
      defined1 = force? defined;
      checkMissing(defined1);
      return defined1;
    };
    r53 = dyn __7("ANY", NULL, p6);
    check L111() else D35();
  L123():
    st el = r72;
    goto L28(i26, i28);
  D35():
    deopt 142 [i19, "ANY", l6, "ANY", r53];
  L111():
    c22 = `is.object`(r53);
    if c22 then L112() else L113(i19, "ANY", l6, r53);
  L26(i23, r59, l10, dx11):
    ___3 = ldf `@<-`;
    check L116() else D37();
  L112():
    dr10 = tryDispatchBuiltin.0("[<-", r53, "ANY");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L114() else L113(i19, "ANY", l6, dr10);
  L113(i21, r56, l8, r57):
    moreArgs6 = ld moreArgs;
    check L115() else D36();
  D36():
    deopt 144 [i21, r56, l8, r57, "ANY", moreArgs6];
  D37():
    deopt 147 [i23, r59, l10, dx11];
  L114():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L26(i19, "ANY", l6, dx10);
  L115():
    moreArgs7 = force? moreArgs6;
    ___2 = ldf `[<-` in base;
    r60 = dyn ___2(r57, "ANY", moreArgs7);
    goto L26(i21, r56, l8, r60);
  L116():
    r61 = dyn ___3(l10, NULL, "defined", dx11);
    check L117() else D38();
  D38():
    deopt 150 [i23, r59, r61];
  L117():
    st el = r61;
    goto L27(i23);
  }
}