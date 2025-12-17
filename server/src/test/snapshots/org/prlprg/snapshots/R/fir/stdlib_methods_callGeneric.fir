fun main() {
  () -+> V { reg r:cls, reg r1:cls |
    mkenv;
    r = clos inner1246119658;
    st callGeneric = r;
    r1 = clos inner4284372013;
    popenv;
    return r1;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sys_call:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg call:*, reg call1:V, reg c:L, reg call3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg quote:cls, reg r8:V, reg identical:cls, reg r9:V, reg _local:*, reg _local1:V, reg c1:L, reg r12:I, reg r13:I, reg r14:V, reg methodCtxInd:*, reg methodCtxInd1:V, reg r15:V, reg sys_call1:cls, reg sys_parent1:cls, reg methodCtxInd2:*, reg methodCtxInd3:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg r19:V, reg fromNextMethod:cls, reg methodCall:*, reg methodCall1:V, reg p3:p(V +), reg r21:V, reg c2:L, reg methodCtxInd4:*, reg methodCtxInd5:V, reg r22:V, reg parent_frame:cls, reg methodCtxInd6:*, reg methodCtxInd7:V, reg p4:p(V +), reg r25:V, reg getGenericFromCall:cls, reg methodCall2:*, reg methodCall3:V, reg p5:p(V +), reg methodFrame:*, reg methodFrame1:V, reg p6:p(V +), reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg genericName:*, reg genericName1:V, reg c3:V, reg c4:L, reg stop:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg nargs:cls, reg r35:V, reg r36:V, reg c5:L, reg sys_frame:cls, reg sys_parent2:cls, reg callerCtxInd:*, reg callerCtxInd1:V, reg p7:p(V +), reg r38:V, reg p8:p(V +), reg r40:V, reg sys_function:cls, reg sys_parent3:cls, reg r41:V, reg p9:p(V +), reg r43:V, reg match_call:cls, reg methodDef:*, reg methodDef1:V, reg p10:p(V +), reg methodCall4:*, reg methodCall5:V, reg p11:p(V +), reg callerFrame:*, reg callerFrame1:V, reg p12:p(V +), reg r47:V, reg lapply:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg call4:*, reg call5:V, reg c6:L, reg call7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r50:V, reg names:cls, reg r51:V, reg p13:p(V +), reg as_name:*, reg as_name1:V, reg p14:p(V +), reg r54:V, reg l:*, reg c7:L, reg r56:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r58:V, reg dx5:V, reg ___:cls, reg r59:V, reg sys_call2:cls, reg r61:V, reg as_name2:cls, reg genericName2:*, reg genericName3:V, reg p15:p(V +), reg r63:V, reg l3:*, reg c8:L, reg r65:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r68:V, reg eval:cls, reg call8:*, reg call9:V, reg p16:p(V +), reg parent_frame1:cls, reg r70:V, reg p17:p(V +), reg r72:V |
    mkenv;
    st `...` = ddd;
    sys_call = ldf `sys.call`;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      sys_parent = ldf `sys.parent`;
      r = dyn sys_parent(1);
      return r;
    };
    r2 = dyn sys_call(p);
    check L16() else D1();
  D1():
    deopt 3 [r2];
  L16():
    st call = r2;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r4):
    st `.local` = r4;
    _local = ld `.local`;
    check L26() else D4();
  L17():
    call = ld call;
    check L19() else D2();
  L18():
    r3 = dyn base(<lang `[[`(call, 1)>, <lang quote(.local)>);
    goto L0(r3);
  D2():
    deopt 7 [call];
  D4():
    deopt 26 [1, _local];
  L19():
    call1 = force? call;
    checkMissing(call1);
    c = `is.object`(call1);
    if c then L20() else L21(call1);
  L26():
    _local1 = force? _local;
    checkMissing(_local1);
    c1 = `as.logical`(_local1);
    if c1 then L27() else L3();
  L1(dx1):
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3():
    goto L4(1, 0);
  L4(r12, r13):
    r14 = `+`(r12, r13);
    st methodCtxInd = r14;
    methodCtxInd = ld methodCtxInd;
    check L29() else D5();
  L20():
    dr = tryDispatchBuiltin.1("[[", call1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(call3):
    __ = ldf `[[` in base;
    r5 = dyn __(call3, 1);
    goto L1(r5);
  L27():
    goto L4(1, 1);
  D5():
    deopt 34 [methodCtxInd];
  L2(r7):
    identical = ldf identical in base;
    r9 = dyn identical(dx1, r7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L25() else D3();
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L23():
    quote = ldf quote in base;
    r8 = dyn quote(<sym .local>);
    goto L2(r8);
  L24():
    r6 = dyn base1(<sym .local>);
    goto L2(r6);
  L29():
    methodCtxInd1 = force? methodCtxInd;
    checkMissing(methodCtxInd1);
    r15 = `+`(methodCtxInd1, 1);
    st callerCtxInd = r15;
    sys_call1 = ldf `sys.call`;
    check L30() else D6();
  D3():
    deopt 23 [r9];
  D6():
    deopt 40 [];
  L25():
    goto L0(r9);
  L30():
    p2 = prom<V +>{
      sys_parent1 = ldf `sys.parent`;
      p1 = prom<V +>{
        methodCtxInd2 = ld methodCtxInd;
        methodCtxInd3 = force? methodCtxInd2;
        checkMissing(methodCtxInd3);
        return methodCtxInd3;
      };
      r17 = dyn sys_parent1(p1);
      return r17;
    };
    r19 = dyn sys_call1(p2);
    check L31() else D7();
  D7():
    deopt 42 [r19];
  L31():
    st methodCall = r19;
    fromNextMethod = ldf fromNextMethod;
    check L32() else D8();
  D8():
    deopt 45 [];
  L32():
    p3 = prom<V +>{
      methodCall = ld methodCall;
      methodCall1 = force? methodCall;
      checkMissing(methodCall1);
      return methodCall1;
    };
    r21 = dyn fromNextMethod(p3);
    check L33() else D9();
  D9():
    deopt 47 [r21];
  L33():
    c2 = `as.logical`(r21);
    if c2 then L34() else L5();
  L5():
    goto L6();
  L6():
    parent_frame = ldf `parent.frame`;
    check L37() else D11();
  L34():
    methodCtxInd4 = ld methodCtxInd;
    check L35() else D10();
  D10():
    deopt 48 [methodCtxInd4];
  D11():
    deopt 56 [];
  L35():
    methodCtxInd5 = force? methodCtxInd4;
    checkMissing(methodCtxInd5);
    r22 = `+`(methodCtxInd5, 1);
    st methodCtxInd = r22;
    goto L6();
  L37():
    p4 = prom<V +>{
      methodCtxInd6 = ld methodCtxInd;
      methodCtxInd7 = force? methodCtxInd6;
      checkMissing(methodCtxInd7);
      return methodCtxInd7;
    };
    r25 = dyn parent_frame(p4);
    check L38() else D12();
  D12():
    deopt 58 [r25];
  L38():
    st methodFrame = r25;
    getGenericFromCall = ldf getGenericFromCall;
    check L39() else D13();
  D13():
    deopt 61 [];
  L39():
    p5 = prom<V +>{
      methodCall2 = ld methodCall;
      methodCall3 = force? methodCall2;
      checkMissing(methodCall3);
      return methodCall3;
    };
    p6 = prom<V +>{
      methodFrame = ld methodFrame;
      methodFrame1 = force? methodFrame;
      checkMissing(methodFrame1);
      return methodFrame1;
    };
    r28 = dyn getGenericFromCall(p5, p6);
    check L40() else D14();
  D14():
    deopt 64 [r28];
  L40():
    st genericName = r28;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L7(r30):
    c4 = `as.logical`(r30);
    if c4 then L44() else L8();
  L41():
    genericName = ld genericName;
    check L43() else D15();
  L42():
    r29 = dyn base2(<sym genericName>);
    goto L7(r29);
  D15():
    deopt 67 [genericName];
  L8():
    goto L9();
  L9():
    sym3 = ldf nargs;
    base3 = ldf nargs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L43():
    genericName1 = force? genericName;
    checkMissing(genericName1);
    c3 = `==`(genericName1, NULL);
    goto L7(c3);
  L44():
    stop = ldf stop;
    check L45() else D16();
  D16():
    deopt 71 [];
  L10(r34):
    r36 = `==`(r34, 0);
    c5 = `as.logical`(r36);
    if c5 then L51() else L11();
  L45():
    r31 = dyn stop("callGeneric() must be called from within a method body");
    check L46() else D17();
  L48():
    nargs = ldf nargs in base;
    r35 = dyn nargs();
    check L50() else D18();
  L49():
    r33 = dyn base3();
    goto L10(r33);
  D17():
    deopt 73 [r31];
  D18():
    deopt 79 [r35];
  L11():
    sys_call2 = ldf `sys.call`;
    check L64() else D27();
  L13():
    as_name2 = ldf `as.name`;
    check L66() else D29();
  L46():
    goto L9();
  L50():
    goto L10(r35);
  L51():
    sys_frame = ldf `sys.frame`;
    check L52() else D19();
  D19():
    deopt 83 [];
  D27():
    deopt 113 [];
  D29():
    deopt 117 [];
  L52():
    p8 = prom<V +>{
      sys_parent2 = ldf `sys.parent`;
      p7 = prom<V +>{
        callerCtxInd = ld callerCtxInd;
        callerCtxInd1 = force? callerCtxInd;
        checkMissing(callerCtxInd1);
        return callerCtxInd1;
      };
      r38 = dyn sys_parent2(p7);
      return r38;
    };
    r40 = dyn sys_frame(p8);
    check L53() else D20();
  L64():
    r61 = dyn sys_call2();
    check L65() else D28();
  L66():
    p15 = prom<V +>{
      genericName2 = ld genericName;
      genericName3 = force? genericName2;
      checkMissing(genericName3);
      return genericName3;
    };
    r63 = dyn as_name2(p15);
    check L67() else D30();
  D20():
    deopt 85 [r40];
  D28():
    deopt 114 [r61];
  D30():
    deopt 119 [r63];
  L53():
    st callerFrame = r40;
    sys_function = ldf `sys.function`;
    check L54() else D21();
  L65():
    st call = r61;
    goto L13();
  L67():
    l3 = ld call;
    c8 = `is.object`(l3);
    if c8 then L68() else L69(r63, l3);
  D21():
    deopt 88 [];
  L14(dx7):
    st call = dx7;
    eval = ldf eval;
    check L71() else D31();
  L54():
    p9 = prom<V +>{
      sys_parent3 = ldf `sys.parent`;
      r41 = dyn sys_parent3(1);
      return r41;
    };
    r43 = dyn sys_function(p9);
    check L55() else D22();
  L68():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r63);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L70() else L69(r63, dr6);
  L69(r65, l5):
    ____ = ldf `[[<-` in base;
    r68 = dyn ____(l5, r63, 1);
    goto L14(r68);
  D22():
    deopt 90 [r43];
  D31():
    deopt 126 [];
  L55():
    st methodDef = r43;
    match_call = ldf `match.call`;
    check L56() else D23();
  L70():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(dx6);
  L71():
    p16 = prom<V +>{
      call8 = ld call;
      call9 = force? call8;
      checkMissing(call9);
      return call9;
    };
    p17 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r70 = dyn parent_frame1();
      return r70;
    };
    r72 = dyn eval(p16, p17);
    check L72() else D32();
  D23():
    deopt 93 [];
  D32():
    deopt 129 [r72];
  L56():
    p10 = prom<V +>{
      methodDef = ld methodDef;
      methodDef1 = force? methodDef;
      checkMissing(methodDef1);
      return methodDef1;
    };
    p11 = prom<V +>{
      methodCall4 = ld methodCall;
      methodCall5 = force? methodCall4;
      checkMissing(methodCall5);
      return methodCall5;
    };
    p12 = prom<V +>{
      callerFrame = ld callerFrame;
      callerFrame1 = force? callerFrame;
      checkMissing(callerFrame1);
      return callerFrame1;
    };
    r47 = dyn match_call[, , `expand.dots`, envir](p10, p11, FALSE, p12);
    check L57() else D24();
  L72():
    popenv;
    return r72;
  D24():
    deopt 100 [r47];
  L57():
    st call = r47;
    lapply = ldf lapply;
    check L58() else D25();
  D25():
    deopt 103 [];
  L58():
    p13 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r49):
      return r49;
    L2():
      call4 = ld call;
      call5 = force? call4;
      checkMissing(call5);
      c6 = `is.object`(call5);
      if c6 then L4() else L5(call5);
    L3():
      r48 = dyn base4(<lang `[`(call, `-`(1))>);
      goto L0(r48);
    L1(dx3):
      names = ldf names in base;
      r51 = dyn names(dx3);
      goto L0(r51);
    L4():
      dr2 = tryDispatchBuiltin.1("[", call5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(call7):
      __1 = ldf `[` in base;
      r50 = dyn __1(call7, -1);
      goto L1(r50);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    p14 = prom<V +>{
      as_name = ld `as.name`;
      as_name1 = force? as_name;
      checkMissing(as_name1);
      return as_name1;
    };
    r54 = dyn lapply(p13, p14);
    check L59() else D26();
  D26():
    deopt 106 [r54];
  L59():
    l = ld call;
    c7 = `is.object`(l);
    if c7 then L60() else L61(r54, l);
  L12(r58, dx5):
    st call = dx5;
    goto L13();
  L60():
    dr4 = tryDispatchBuiltin.0("[<-", l, r54);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(r54, dr4);
  L61(r56, l2):
    ___ = ldf `[<-` in base;
    r59 = dyn ___(l2, r54, -1);
    goto L12(r56, r59);
  L62():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(r54, dx4);
  }
}
fun inner4284372013(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg callGeneric:cls, reg __:cls, reg r:V, reg p:p(V +), reg e3:*, reg e4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg value:*, reg value1:V, reg length:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg r11:V, reg e5:*, reg e6:V, reg length1:cls, reg r12:V, reg r13:V, reg c:L, reg value2:*, reg value3:V, reg l:*, reg ___:cls, reg r14:V, reg e7:*, reg e8:V, reg value4:*, reg value5:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    callGeneric = ldf callGeneric;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym e1>, <sym .Data>);
      return r;
    };
    p1 = prom<V +>{
      e3 = ld e2;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r3 = dyn callGeneric(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r3];
  L4():
    st value = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r5):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    value = ld value;
    check L7() else D2();
  L6():
    r4 = dyn base(<sym value>);
    goto L0(r4);
  D2():
    deopt 8 [value];
  L1(r10, r11):
    r13 = `==`(r10, r11);
    c = `as.logical`(r13);
    if c then L13() else L2();
  L7():
    value1 = force? value;
    checkMissing(value1);
    length = ldf length in base;
    r6 = dyn length(value1);
    check L8() else D3();
  L9():
    e5 = ld e1;
    check L11() else D4();
  L10():
    r9 = dyn base1(<sym e1>);
    goto L1(r5, r9);
  D3():
    deopt 11 [r6];
  D4():
    deopt 13 [r5, e5];
  L2():
    value4 = ld value;
    check L19() else D10();
  L8():
    goto L0(r6);
  L11():
    e6 = force? e5;
    checkMissing(e6);
    length1 = ldf length in base;
    r12 = dyn length1(e6);
    check L12() else D5();
  L13():
    value2 = ld value;
    check L14() else D6();
  D5():
    deopt 16 [r5, r12];
  D6():
    deopt 18 [value2];
  D10():
    deopt 28 [value4];
  L12():
    goto L1(r5, r12);
  L14():
    value3 = force? value2;
    checkMissing(value3);
    l = ld e1;
    ___ = ldf `@<-`;
    check L15() else D7();
  L19():
    value5 = force? value4;
    checkMissing(value5);
    popenv;
    return value5;
  D7():
    deopt 21 [value3, l, value3];
  L15():
    r14 = dyn ___(l, NULL, ".Data", value3);
    check L16() else D8();
  D8():
    deopt 24 [value3, r14];
  L16():
    st e1 = r14;
    e7 = ld e1;
    check L17() else D9();
  D9():
    deopt 26 [e7];
  L17():
    e8 = force? e7;
    checkMissing(e8);
    popenv;
    return e8;
  }
}