fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1474176469;
    st `.updateMethodsInTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1474176469(generic, where, attach) {
  (reg generic:*, reg where:*, reg attach:*) -+> V { var generic:*, var where:*, var attach:*, reg environment:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg attach1:*, reg attach2:V, reg identical:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg fenv:*, reg fenv1:V, reg c:L, reg fenv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg c1:V, reg c2:L, reg _setupMethodsTables:cls, reg generic3:*, reg generic4:V, reg p1:p(V +), reg r9:V, reg get:cls, reg fenv4:*, reg fenv5:V, reg p2:p(V +), reg r11:V, reg reset:*, reg reset1:V, reg r13:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r16:V, reg _TableMetaName:cls, reg __:cls, reg r17:V, reg p3:p(V +), reg __1:cls, reg r19:V, reg p4:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg env:*, reg env1:V, reg c4:L, reg env3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg tname:*, reg tname1:V, reg __2:cls, reg r24:V, reg c5:V, reg r25:V, reg c6:L, reg _mergeMethodsTable:cls, reg generic5:*, reg generic6:V, reg p5:p(V +), reg mtable:*, reg mtable1:V, reg p6:p(V +), reg tt:*, reg tt1:V, reg p7:p(V +), reg attach3:*, reg attach4:V, reg p8:p(V +), reg r30:V, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg __3:cls, reg r35:V, reg length:cls, reg r36:V, reg c7:L, reg as_list:cls, reg __4:cls, reg r37:V, reg p9:p(V +), reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg groups:*, reg groups1:V, reg length1:cls, reg r44:V, reg vector:cls, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg groups2:*, reg groups3:V, reg r48:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg getGeneric:cls, reg groups4:*, reg groups5:V, reg c9:L, reg groups7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __5:cls, reg r49:V, reg p10:p(V +), reg r51:V, reg l1:*, reg c10:L, reg i8:I, reg r53:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i10:I, reg dx7:V, reg i11:*, reg i12:V, reg ____:cls, reg r56:V, reg _checkGroupSigLength:cls, reg groups8:*, reg groups9:V, reg p11:p(V +), reg generics:*, reg generics1:V, reg p12:p(V +), reg r59:V, reg is:cls, reg generic7:*, reg generic8:V, reg p13:p(V +), reg r62:V, reg c11:L, reg _checkGroupSigLength1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg __6:cls, reg r65:V, reg list:cls, reg r66:V, reg p14:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg generic9:*, reg generic10:V, reg list1:cls, reg r70:V, reg p15:p(V +), reg r72:V, reg getGroupMembers:cls, reg generic11:*, reg generic12:V, reg p16:p(V +), reg r74:V, reg s1:V, reg l4:I, reg i13:I, reg i14:I, reg i15:I, reg c12:L, reg x1:V, reg _updateMethodsInTable:cls, reg getGeneric1:cls, reg g:*, reg g1:V, reg p17:p(V +), reg r76:V, reg p18:p(V +), reg where3:*, reg where4:V, reg p19:p(V +), reg attach5:*, reg attach6:V, reg p20:p(V +), reg r80:V, reg _resetInheritedMethods:cls, reg fenv6:*, reg fenv7:V, reg p21:p(V +), reg mtable2:*, reg mtable3:V, reg p22:p(V +), reg r83:V, reg mtable4:*, reg mtable5:V |
    mkenv;
    st generic = generic;
    st where = where;
    st attach = attach;
    environment = ldf environment;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r1 = dyn environment(p);
    check L25() else D1();
  D1():
    deopt 3 [r1];
  L25():
    st fenv = r1;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r3):
    st reset = r3;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    attach1 = ld attach;
    check L28() else D2();
  L27():
    r2 = dyn base(<sym attach>, "reset");
    goto L0(r2);
  D2():
    deopt 7 [attach1];
  L1(r6):
    c2 = `as.logical`(r6);
    if c2 then L37() else L2();
  L28():
    attach2 = force? attach1;
    checkMissing(attach2);
    identical = ldf identical in base;
    r4 = dyn identical(attach2, "reset", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L29() else D3();
  L30():
    fenv = ld fenv;
    check L32() else D4();
  L31():
    r5 = dyn base1(<lang `<-`(mtable, `$`(fenv, .MTable))>);
    goto L1(r5);
  D3():
    deopt 18 [r4];
  D4():
    deopt 21 [fenv];
  L2():
    goto L3();
  L3():
    reset = ld reset;
    check L43() else D9();
  L29():
    goto L0(r4);
  L32():
    fenv1 = force? fenv;
    checkMissing(fenv1);
    c = `is.object`(fenv1);
    if c then L34() else L35(fenv1);
  L37():
    _setupMethodsTables = ldf `.setupMethodsTables`;
    check L38() else D5();
  D5():
    deopt 27 [];
  D9():
    deopt 39 [reset];
  L33(dx1):
    st mtable = dx1;
    c1 = `==`(dx1, NULL);
    goto L1(c1);
  L34():
    dr = tryDispatchBuiltin.1("$", fenv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(fenv3):
    r7 = `$`(fenv3, <sym .MTable>);
    goto L33(r7);
  L38():
    p1 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    r9 = dyn _setupMethodsTables(p1);
    check L39() else D6();
  L43():
    reset1 = force? reset;
    checkMissing(reset1);
    r13 = `!`(reset1);
    c3 = `as.logical`(r13);
    if c3 then L44() else L4();
  D6():
    deopt 29 [r9];
  L4():
    goto L10();
  L10():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L33(dx);
  L39():
    get = ldf get;
    check L40() else D7();
  L44():
    sym2 = ldf `as.environment`;
    base2 = ldf `as.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  D7():
    deopt 31 [];
  L5(r15):
    st env = r15;
    _TableMetaName = ldf `.TableMetaName`;
    check L49() else D12();
  L11(r34):
    c7 = `as.logical`(r34);
    if c7 then L66() else L12();
  L40():
    p2 = prom<V +>{
      fenv4 = ld fenv;
      fenv5 = force? fenv4;
      checkMissing(fenv5);
      return fenv5;
    };
    r11 = dyn get[, envir](".MTable", p2);
    check L41() else D8();
  L45():
    where1 = ld where;
    check L47() else D10();
  L46():
    r14 = dyn base2(<sym where>);
    goto L5(r14);
  L63():
    __3 = ldf `@` in base;
    r35 = dyn __3(<sym generic>, <sym group>);
    length = ldf length in base;
    r36 = dyn length(r35);
    check L65() else D18();
  L64():
    r33 = dyn base4(<lang `@`(generic, group)>);
    goto L11(r33);
  D8():
    deopt 35 [r11];
  D10():
    deopt 44 [where1];
  D12():
    deopt 50 [];
  D18():
    deopt 80 [r36];
  L12():
    goto L19();
  L19():
    is = ldf is;
    check L89() else D30();
  L41():
    st mtable = r11;
    goto L3();
  L47():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r16 = dyn as_environment(where2);
    check L48() else D11();
  L49():
    p3 = prom<V +>{
      __ = ldf `@` in base;
      r17 = dyn __(<sym generic>, <sym generic>);
      return r17;
    };
    p4 = prom<V +>{
      __1 = ldf `@` in base;
      r19 = dyn __1(<sym generic>, <sym package>);
      return r19;
    };
    r21 = dyn _TableMetaName(p3, p4);
    check L50() else D13();
  L65():
    goto L11(r36);
  L66():
    as_list = ldf `as.list`;
    check L67() else D19();
  D11():
    deopt 47 [r16];
  D13():
    deopt 53 [r21];
  D19():
    deopt 82 [];
  D30():
    deopt 122 [];
  L48():
    goto L5(r16);
  L50():
    st tname = r21;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L67():
    p9 = prom<V +>{
      __4 = ldf `@` in base;
      r37 = dyn __4(<sym generic>, <sym group>);
      return r37;
    };
    r39 = dyn as_list(p9);
    check L68() else D20();
  L89():
    p13 = prom<V +>{
      generic7 = ld generic;
      generic8 = force? generic7;
      checkMissing(generic8);
      return generic8;
    };
    r62 = dyn is(p13, "groupGenericFunction");
    check L90() else D31();
  D20():
    deopt 84 [r39];
  D31():
    deopt 125 [r62];
  L6(r23):
    r25 = `!`(r23);
    c6 = `as.logical`(r25);
    if c6 then L58() else L8();
  L51():
    env = ld env;
    check L53() else D14();
  L52():
    r22 = dyn base3(<lang `<-`(tt, `[[`(env, tname))>);
    goto L6(r22);
  L68():
    st groups = r39;
    sym5 = ldf vector;
    base5 = ldf vector in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L90():
    c11 = `as.logical`(r62);
    if c11 then L91() else L20();
  D14():
    deopt 56 [env];
  L8():
    goto L9(NULL);
  L9(r31):
    goto L10();
  L13(r41):
    st generics = r41;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L20():
    goto L23();
  L23():
    _resetInheritedMethods = ldf `.resetInheritedMethods`;
    check L100() else D38();
  L53():
    env1 = force? env;
    checkMissing(env1);
    c4 = `is.object`(env1);
    if c4 then L54() else L55(env1);
  L58():
    _mergeMethodsTable = ldf `.mergeMethodsTable`;
    check L59() else D16();
  L69():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L70():
    r40 = dyn base5("list", <lang length(groups)>);
    goto L13(r40);
  L91():
    _checkGroupSigLength1 = ldf `.checkGroupSigLength`;
    check L92() else D32();
  D16():
    deopt 65 [];
  D32():
    deopt 127 [];
  D38():
    deopt 147 [];
  L7(dx3):
    st tt = dx3;
    c5 = `==`(dx3, NULL);
    goto L6(c5);
  L14(r43):
    vector = ldf vector in base;
    r45 = dyn vector("list", r43);
    check L75() else D23();
  L15(r47):
    s = toForSeq(r47);
    l = length(s);
    i = 0;
    goto L16(i);
  L54():
    dr2 = tryDispatchBuiltin.1("[[", env1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(dr2);
  L55(env3):
    tname = ld tname;
    check L57() else D15();
  L59():
    p5 = prom<V +>{
      generic5 = ld generic;
      generic6 = force? generic5;
      checkMissing(generic6);
      return generic6;
    };
    p6 = prom<V +>{
      mtable = ld mtable;
      mtable1 = force? mtable;
      checkMissing(mtable1);
      return mtable1;
    };
    p7 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    p8 = prom<V +>{
      attach3 = ld attach;
      attach4 = force? attach3;
      checkMissing(attach4);
      return attach4;
    };
    r30 = dyn _mergeMethodsTable(p5, p6, p7, p8);
    check L60() else D17();
  L71():
    groups = ld groups;
    check L73() else D21();
  L72():
    r42 = dyn base6(<sym groups>);
    goto L14(r42);
  L76():
    groups2 = ld groups;
    check L78() else D24();
  L77():
    r46 = dyn base7(<sym groups>);
    goto L15(r46);
  L92():
    p14 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      __6 = ldf `@` in base;
      r65 = dyn __6(<sym generic>, <sym generic>);
      list = ldf list in base;
      r66 = dyn list(r65);
      goto L0(r66);
    L2():
      r63 = dyn base8(<lang `@`(generic, generic)>);
      goto L0(r63);
    };
    p15 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r69):
      return r69;
    L1():
      generic9 = ld generic;
      generic10 = force? generic9;
      checkMissing(generic10);
      list1 = ldf list in base;
      r70 = dyn list1(generic10);
      goto L0(r70);
    L2():
      r68 = dyn base9(<sym generic>);
      goto L0(r68);
    };
    r72 = dyn _checkGroupSigLength1(p14, p15);
    check L93() else D33();
  L100():
    p21 = prom<V +>{
      fenv6 = ld fenv;
      fenv7 = force? fenv6;
      checkMissing(fenv7);
      return fenv7;
    };
    p22 = prom<V +>{
      mtable2 = ld mtable;
      mtable3 = force? mtable2;
      checkMissing(mtable3);
      return mtable3;
    };
    r83 = dyn _resetInheritedMethods(p21, p22);
    check L101() else D39();
  D15():
    deopt 58 [env3, tname];
  D17():
    deopt 70 [r30];
  D21():
    deopt 91 [groups];
  D23():
    deopt 96 [r45];
  D24():
    deopt 99 [groups2];
  D33():
    deopt 130 [r72];
  D39():
    deopt 150 [r83];
  L16(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L79() else L18();
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L57():
    tname1 = force? tname;
    __2 = ldf `[[` in base;
    r24 = dyn __2(env3, tname1);
    goto L7(r24);
  L60():
    goto L9(r30);
  L73():
    groups1 = force? groups;
    checkMissing(groups1);
    length1 = ldf length in base;
    r44 = dyn length1(groups1);
    check L74() else D22();
  L75():
    goto L13(r45);
  L78():
    groups3 = force? groups2;
    checkMissing(groups3);
    r48 = seq_along(groups3);
    goto L15(r48);
  L93():
    getGroupMembers = ldf getGroupMembers;
    check L94() else D34();
  L101():
    mtable4 = ld mtable;
    check L102() else D40();
  D22():
    deopt 94 [r44];
  D34():
    deopt 132 [];
  D40():
    deopt 151 [mtable4];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    getGeneric = ldf getGeneric;
    check L80() else D25();
  L74():
    goto L14(r44);
  L79():
    _checkGroupSigLength = ldf `.checkGroupSigLength`;
    check L86() else D28();
  L94():
    p16 = prom<V +>{
      generic11 = ld generic;
      generic12 = force? generic11;
      checkMissing(generic12);
      return generic12;
    };
    r74 = dyn getGroupMembers(p16);
    check L95() else D35();
  L102():
    mtable5 = force? mtable4;
    checkMissing(mtable5);
    popenv;
    return mtable5;
  D25():
    deopt 103 [i2];
  D28():
    deopt 115 [];
  D35():
    deopt 134 [r74];
  L80():
    p10 = prom<V +>{
      groups4 = ld groups;
      groups5 = force? groups4;
      checkMissing(groups5);
      c9 = `is.object`(groups5);
      if c9 then L1() else L2(groups5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", groups5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(groups7):
      i5 = ld i;
      i6 = force? i5;
      __5 = ldf `[[` in base;
      r49 = dyn __5(groups7, i6);
      goto L0(r49);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r51 = dyn getGeneric(p10);
    check L81() else D26();
  L86():
    p11 = prom<V +>{
      groups8 = ld groups;
      groups9 = force? groups8;
      checkMissing(groups9);
      return groups9;
    };
    p12 = prom<V +>{
      generics = ld generics;
      generics1 = force? generics;
      checkMissing(generics1);
      return generics1;
    };
    r59 = dyn _checkGroupSigLength(p11, p12);
    check L87() else D29();
  L95():
    s1 = toForSeq(r74);
    l4 = length(s1);
    i13 = 0;
    goto L21(i13);
  D26():
    deopt 105 [i2, r51];
  D29():
    deopt 118 [r59];
  L21(i14):
    i15 = `+`.1(i14, 1);
    c12 = `<`.1(l4, i15);
    if c12 then L96() else L22();
  L81():
    l1 = ld generics;
    c10 = `is.object`(l1);
    if c10 then L82() else L83(i2, r51, l1);
  L87():
    goto L19();
  L17(i10, dx7):
    st generics = dx7;
    goto L16(i10);
  L22():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st g = x1;
    _updateMethodsInTable = ldf `.updateMethodsInTable`;
    check L97() else D36();
  L82():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, r51);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L84() else L83(i2, r51, dr6);
  L83(i8, r53, l3):
    i11 = ld i;
    check L85() else D27();
  L96():
    goto L23();
  D27():
    deopt 107 [i8, r53, l3, r51, i11];
  D36():
    deopt 136 [i15];
  L84():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(i2, dx6);
  L85():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r56 = dyn ____(l3, r51, i12);
    goto L17(i8, r56);
  L97():
    p18 = prom<V +>{
      getGeneric1 = ldf getGeneric;
      p17 = prom<V +>{
        g = ld g;
        g1 = force? g;
        checkMissing(g1);
        return g1;
      };
      r76 = dyn getGeneric1(p17);
      return r76;
    };
    p19 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    p20 = prom<V +>{
      attach5 = ld attach;
      attach6 = force? attach5;
      checkMissing(attach6);
      return attach6;
    };
    r80 = dyn _updateMethodsInTable(p18, p19, p20);
    check L98() else D37();
  D37():
    deopt 140 [i15, r80];
  L98():
    goto L21(i15);
  }
}