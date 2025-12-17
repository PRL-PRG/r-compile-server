fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1747341153;
    st findMethodSignatures = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1747341153(`...`, target, methods) {
  (reg ddd:dots, reg target:*, reg methods:*) -+> V { var `...`:dots?, var target:*, reg target_isMissing:L, reg target_orDefault:*, var methods:*, reg methods_isMissing:L, reg methods_orDefault:*, reg findMethods:cls, reg ddd1:dots?, reg r:V, reg p:p(V +), reg __:cls, reg r2:V, reg target1:*, reg target2:V, reg c:L, reg __1:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg rep:cls, reg r7:V, reg methods1:*, reg methods2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg is_primitive:cls, reg m:*, reg m1:V, reg p1:p(V +), reg r9:V, reg r10:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg i9:I, reg r12:V, reg __2:cls, reg r13:V, reg length:cls, reg r14:V, reg l1:*, reg length__:cls, reg r15:V, reg lapply:cls, reg methods3:*, reg methods4:V, reg p2:p(V +), reg r18:cls, reg p3:p(V +), reg r20:V, reg unique:cls, reg lengths:cls, reg sigs:*, reg sigs1:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg lens:*, reg lens1:V, reg length1:cls, reg r27:V, reg r28:V, reg c3:L, reg matrix:cls, reg character:cls, reg r29:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg __3:cls, reg r33:V, reg length2:cls, reg r34:V, reg p7:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg lens2:*, reg lens3:V, reg length3:cls, reg r41:V, reg r42:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg lens4:*, reg lens5:V, reg max:cls, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg rep1:cls, reg r48:V, reg lapply1:cls, reg sigs2:*, reg sigs3:V, reg p8:p(V +), reg r50:cls, reg p9:p(V +), reg r52:V, reg lens6:*, reg lens7:V, reg l2:*, reg length__1:cls, reg r54:V, reg t:cls, reg matrix1:cls, reg unlist:cls, reg sigs4:*, reg sigs5:V, reg p10:p(V +), reg r56:V, reg p11:p(V +), reg lens8:*, reg lens9:V, reg p12:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg what:*, reg what1:V, reg list:cls, reg r61:V, reg p13:p(V +), reg r63:V, reg p14:p(V +), reg r65:V |
    mkenv;
    st `...` = ddd;
    target_isMissing = missing.0(target);
    if target_isMissing then L0(TRUE) else L0(target);
  L0(target_orDefault):
    st target = target_orDefault;
    methods_isMissing = missing.0(methods);
    if methods_isMissing then L1() else L2(methods);
  L1():
    p = prom<V +>{
      findMethods = ldf findMethods;
      ddd1 = ld `...`;
      r = dyn findMethods[`...`](ddd1);
      return r;
    };
    goto L2(p);
  L2(methods_orDefault):
    st methods = methods_orDefault;
    __ = ldf `@` in base;
    r2 = dyn __(<sym methods>, <sym arguments>);
    st what = r2;
    target1 = ld target;
    check L20() else D0();
  D0():
    deopt 3 [target1];
  L20():
    target2 = force? target1;
    checkMissing(target2);
    c = `as.logical`(target2);
    if c then L21() else L3();
  L3():
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L4():
    unique = ldf unique;
    check L39() else D9();
  L21():
    __1 = ldf `@` in base;
    r3 = dyn __1(<sym methods>, <sym signatures>);
    st sigs = r3;
    goto L4();
  D9():
    deopt 44 [];
  L5(r6):
    st anySig = r6;
    methods1 = ld methods;
    check L25() else D1();
  L23():
    rep = ldf rep in base;
    r7 = dyn rep("ANY", <lang length(what)>);
    goto L5(r7);
  L24():
    r5 = dyn base("ANY", <lang length(what)>);
    goto L5(r5);
  L39():
    p5 = prom<V +>{
      lengths = ldf lengths;
      p4 = prom<V +>{
        sigs = ld sigs;
        sigs1 = force? sigs;
        checkMissing(sigs1);
        return sigs1;
      };
      r22 = dyn lengths[, `use.names`](p4, FALSE);
      return r22;
    };
    r24 = dyn unique(p5);
    check L40() else D10();
  D1():
    deopt 12 [methods1];
  D10():
    deopt 46 [r24];
  L25():
    methods2 = force? methods1;
    checkMissing(methods2);
    s = toForSeq(methods2);
    l = length(s);
    i = 0;
    goto L6(i);
  L40():
    st lens = r24;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L26() else L11();
  L12(r26):
    r28 = `==`(r26, 0.0);
    c3 = `as.logical`(r28);
    if c3 then L45() else L13();
  L41():
    lens = ld lens;
    check L43() else D11();
  L42():
    r25 = dyn base2(<sym lens>);
    goto L12(r25);
  D11():
    deopt 50 [lens];
  L9():
    lapply = ldf lapply;
    check L37() else D7();
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st m = x;
    is_primitive = ldf `is.primitive`;
    check L27() else D2();
  L13():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L26():
    goto L9();
  L43():
    lens1 = force? lens;
    checkMissing(lens1);
    length1 = ldf length in base;
    r27 = dyn length1(lens1);
    check L44() else D12();
  L45():
    matrix = ldf matrix;
    check L46() else D13();
  D2():
    deopt 15 [i2];
  D7():
    deopt 38 [];
  D12():
    deopt 53 [r27];
  D13():
    deopt 57 [];
  L15(r40):
    r42 = `>`(r40, 1);
    c4 = `as.logical`(r42);
    if c4 then L54() else L16();
  L27():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r9 = dyn is_primitive(p1);
    check L28() else D3();
  L37():
    p2 = prom<V +>{
      methods3 = ld methods;
      methods4 = force? methods3;
      checkMissing(methods4);
      return methods4;
    };
    p3 = prom<V +>{
      r18 = clos inner2501545716;
      return r18;
    };
    r20 = dyn lapply(p2, p3);
    check L38() else D8();
  L44():
    goto L12(r27);
  L46():
    p6 = prom<V +>{
      character = ldf character;
      r29 = dyn character();
      return r29;
    };
    p7 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      __3 = ldf `@` in base;
      r33 = dyn __3(<sym methods>, <sym arguments>);
      length2 = ldf length in base;
      r34 = dyn length2(r33);
      goto L0(r34);
    L2():
      r31 = dyn base3(<lang `@`(methods, arguments)>);
      goto L0(r31);
    };
    r36 = dyn matrix(p6, 0.0, p7);
    check L47() else D14();
  L50():
    lens2 = ld lens;
    check L52() else D15();
  L51():
    r39 = dyn base4(<sym lens>);
    goto L15(r39);
  D3():
    deopt 17 [i2, r9];
  D8():
    deopt 41 [r20];
  D14():
    deopt 61 [r36];
  D15():
    deopt 67 [lens2];
  L16():
    goto L19();
  L19():
    lens6 = ld lens;
    check L64() else D21();
  L28():
    r10 = `!`(r9);
    c2 = `as.logical`(r10);
    if c2 then L29() else L7();
  L38():
    st sigs = r20;
    goto L4();
  L47():
    popenv;
    return r36;
  L52():
    lens3 = force? lens2;
    checkMissing(lens3);
    length3 = ldf length in base;
    r41 = dyn length3(lens3);
    check L53() else D16();
  L54():
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  D16():
    deopt 70 [r41];
  D21():
    deopt 92 [lens6];
  L7():
    goto L6(i2);
  L17(r44):
    st lens = r44;
    sym6 = ldf rep;
    base6 = ldf rep in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L29():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L53():
    goto L15(r41);
  L55():
    lens4 = ld lens;
    check L57() else D17();
  L56():
    r43 = dyn base5(<sym lens>);
    goto L17(r43);
  L64():
    lens7 = force? lens6;
    checkMissing(lens7);
    l2 = ld what;
    length__1 = ldf `length<-`;
    check L65() else D22();
  D17():
    deopt 75 [lens4];
  D22():
    deopt 95 [lens7, l2, lens7];
  L8(i9, r12):
    l1 = ld anySig;
    length__ = ldf `length<-`;
    check L33() else D5();
  L18(r47):
    st anys = r47;
    lapply1 = ldf lapply;
    check L61() else D19();
  L30():
    __2 = ldf `@` in base;
    r13 = dyn __2(<sym m>, <sym defined>);
    length = ldf length in base;
    r14 = dyn length(r13);
    check L32() else D4();
  L31():
    r11 = dyn base1(<lang `@`(m, defined)>);
    goto L8(i2, r11);
  L57():
    lens5 = force? lens4;
    checkMissing(lens5);
    max = ldf max in base;
    r45 = dyn max(lens5);
    check L58() else D18();
  L59():
    rep1 = ldf rep in base;
    r48 = dyn rep1("ANY", <sym lens>);
    goto L18(r48);
  L60():
    r46 = dyn base6("ANY", <sym lens>);
    goto L18(r46);
  L65():
    r54 = dyn length__1(l2, NULL, lens7);
    check L66() else D23();
  D4():
    deopt 24 [i2, r14];
  D5():
    deopt 26 [i9, r12, l1, r12];
  D18():
    deopt 78 [r45];
  D19():
    deopt 85 [];
  D23():
    deopt 97 [lens7, r54];
  L32():
    goto L8(i2, r14);
  L33():
    r15 = dyn length__(l1, NULL, r12);
    check L34() else D6();
  L58():
    goto L17(r45);
  L61():
    p8 = prom<V +>{
      sigs2 = ld sigs;
      sigs3 = force? sigs2;
      checkMissing(sigs3);
      return sigs3;
    };
    p9 = prom<V +>{
      r50 = clos inner2501545716;
      return r50;
    };
    r52 = dyn lapply1(p8, p9);
    check L62() else D20();
  L66():
    st what = r54;
    t = ldf t;
    check L67() else D24();
  D6():
    deopt 28 [i9, r12, r15];
  D20():
    deopt 88 [r52];
  D24():
    deopt 100 [];
  L34():
    st anySig = r15;
    goto L9();
  L62():
    st sigs = r52;
    goto L19();
  L67():
    p14 = prom<V +>{
      matrix1 = ldf matrix;
      p11 = prom<V +>{
        unlist = ldf unlist;
        p10 = prom<V +>{
          sigs4 = ld sigs;
          sigs5 = force? sigs4;
          checkMissing(sigs5);
          return sigs5;
        };
        r56 = dyn unlist(p10);
        return r56;
      };
      p12 = prom<V +>{
        lens8 = ld lens;
        lens9 = force? lens8;
        checkMissing(lens9);
        return lens9;
      };
      p13 = prom<V +>{
        sym7 = ldf list;
        base7 = ldf list in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r60):
        return r60;
      L1():
        what = ld what;
        what1 = force? what;
        checkMissing(what1);
        list = ldf list in base;
        r61 = dyn list(what1, NULL);
        goto L0(r61);
      L2():
        r59 = dyn base7(<sym what>, NULL);
        goto L0(r59);
      };
      r63 = dyn matrix1[, nrow, dimnames](p11, p12, p13);
      return r63;
    };
    r65 = dyn t(p14);
    check L68() else D25();
  D25():
    deopt 102 [r65];
  L68():
    popenv;
    return r65;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_primitive:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg anySig:*, reg anySig1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg as_character:cls, reg r5:V |
    mkenv;
    st x = x;
    is_primitive = ldf `is.primitive`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_primitive(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0();
  L0():
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L4():
    anySig = ld anySig;
    check L5() else D2();
  D2():
    deopt 4 [anySig];
  L1(r3):
    popenv;
    return r3;
  L5():
    anySig1 = force? anySig;
    checkMissing(anySig1);
    popenv;
    return anySig1;
  L7():
    __ = ldf `@` in base;
    r4 = dyn __(<sym x>, <sym defined>);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(r4);
    check L9() else D3();
  L8():
    r2 = dyn base(<lang `@`(x, defined)>);
    goto L1(r2);
  D3():
    deopt 11 [r5];
  L9():
    goto L1(r5);
  }
}