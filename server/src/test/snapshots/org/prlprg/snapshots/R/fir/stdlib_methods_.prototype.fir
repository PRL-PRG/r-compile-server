fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.prototype` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg allNames:cls, reg props:*, reg props1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg names:*, reg names1:V, reg nzchar:cls, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg data:*, reg data1:V, reg any:cls, reg r11:V, reg dataPart:*, reg dataPart1:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg data2:*, reg data3:V, reg sum:cls, reg r14:V, reg r15:V, reg c1:L, reg stop:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg props2:*, reg props3:V, reg c2:L, reg props5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg props8:V, reg r21:V, reg data4:*, reg data5:V, reg r22:I, reg c3:L, reg props10:V, reg r24:V, reg dr2:V, reg dc1:L, reg dx2:V, reg props12:V, reg dx3:V, reg data6:*, reg data7:V, reg __:cls, reg r25:V, reg __1:cls, reg r26:V, reg unclass:cls, reg r27:V, reg props13:*, reg props14:V, reg c4:L, reg props16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg data8:*, reg data9:V, reg r28:V, reg __2:cls, reg r29:V, reg names2:*, reg names3:V, reg c5:L, reg names5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg data10:*, reg data11:V, reg r30:V, reg __3:cls, reg r31:V, reg defaultPrototype:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg names6:*, reg names7:V, reg r35:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg props17:*, reg props18:V, reg c7:L, reg i6:I, reg props20:V, reg dr8:V, reg dc4:L, reg dx9:V, reg i8:I, reg dx10:V, reg i9:*, reg i10:V, reg __4:cls, reg r36:V, reg l1:*, reg slot__:cls, reg names8:*, reg names9:V, reg c8:L, reg names11:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg i11:*, reg i12:V, reg __5:cls, reg r37:V, reg p1:p(V +), reg r39:V, reg new:cls, reg obj:*, reg obj1:V, reg p2:p(V +), reg names12:*, reg names13:V, reg p3:p(V +), reg dataPart2:*, reg dataPart3:V, reg p4:p(V +), reg r43:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    st props = r1;
    allNames = ldf allNames;
    check L22() else D2();
  L18():
    list = ldf list;
    check L20() else D0();
  L19():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 7 [];
  L20():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L21() else D1();
  L22():
    p = prom<V +>{
      props = ld props;
      props1 = force? props;
      checkMissing(props1);
      return props1;
    };
    r4 = dyn allNames(p);
    check L23() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 9 [r4];
  L21():
    goto L0(r2);
  L23():
    st names = r4;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L1(r6):
    r8 = `!`(r6);
    st data = r8;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L24():
    names = ld names;
    check L26() else D4();
  L25():
    r5 = dyn base1(<sym names>);
    goto L1(r5);
  D4():
    deopt 13 [names];
  L2(r10):
    st dataPart = r10;
    dataPart = ld dataPart;
    check L32() else D8();
  L26():
    names1 = force? names;
    checkMissing(names1);
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(names1);
    check L27() else D5();
  L28():
    data = ld data;
    check L30() else D6();
  L29():
    r9 = dyn base2(<sym data>);
    goto L2(r9);
  D5():
    deopt 16 [r7];
  D6():
    deopt 21 [data];
  D8():
    deopt 26 [dataPart];
  L27():
    goto L1(r7);
  L30():
    data1 = force? data;
    checkMissing(data1);
    any = ldf any in base;
    r11 = dyn any(data1);
    check L31() else D7();
  L32():
    dataPart1 = force? dataPart;
    checkMissing(dataPart1);
    c = `as.logical`(dataPart1);
    if c then L33() else L3();
  D7():
    deopt 24 [r11];
  L3():
    defaultPrototype = ldf defaultPrototype;
    check L67() else D21();
  L13():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L31():
    goto L2(r11);
  L33():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  D21():
    deopt 72 [];
  L4(r13):
    r15 = `>`(r13, 1.0);
    c1 = `as.logical`(r15);
    if c1 then L38() else L5();
  L14(r34):
    s = toForSeq(r34);
    l = length(s);
    i = 0;
    goto L15(i);
  L34():
    data2 = ld data;
    check L36() else D9();
  L35():
    r12 = dyn base3(<sym data>);
    goto L4(r12);
  L67():
    r32 = dyn defaultPrototype();
    check L68() else D22();
  L69():
    names6 = ld names;
    check L71() else D23();
  L70():
    r33 = dyn base6(<sym names>);
    goto L14(r33);
  D9():
    deopt 30 [data2];
  D22():
    deopt 73 [r32];
  D23():
    deopt 76 [names6];
  L5():
    goto L6();
  L6():
    sym4 = ldf unclass;
    base4 = ldf unclass in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L15(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L72() else L17();
  L36():
    data3 = force? data2;
    checkMissing(data3);
    sum = ldf sum in base;
    r14 = dyn sum(data3);
    check L37() else D10();
  L38():
    stop = ldf stop;
    check L39() else D11();
  L68():
    st obj = r32;
    goto L13();
  L71():
    names7 = force? names6;
    checkMissing(names7);
    r35 = seq_along(names7);
    goto L14(r35);
  D10():
    deopt 33 [r14];
  D11():
    deopt 37 [];
  L7(r19):
    st obj = r19;
    props13 = ld props;
    check L56() else D17();
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    props17 = ld props;
    check L73() else D24();
  L37():
    goto L4(r14);
  L39():
    r16 = dyn stop("only one data object (unnamed argument to prototype) allowed");
    check L40() else D12();
  L42():
    props2 = ld props;
    check L44() else D13();
  L43():
    r18 = dyn base4(<lang `[[`(props, `[`(seq_along(data), data))>);
    goto L7(r18);
  L72():
    new = ldf new;
    check L80() else D28();
  D12():
    deopt 39 [r16];
  D13():
    deopt 44 [props2];
  D17():
    deopt 57 [props13];
  D24():
    deopt 79 [i2, props17];
  D28():
    deopt 95 [];
  L40():
    goto L6();
  L44():
    props3 = force? props2;
    checkMissing(props3);
    c2 = `is.object`(props3);
    if c2 then L45() else L46(props3);
  L56():
    props14 = force? props13;
    checkMissing(props14);
    c4 = `is.object`(props14);
    if c4 then L57() else L58(props14);
  L73():
    props18 = force? props17;
    checkMissing(props18);
    c7 = `is.object`(props18);
    if c7 then L74() else L75(i2, props18);
  L80():
    p2 = prom<V +>{
      obj = ld obj;
      obj1 = force? obj;
      checkMissing(obj1);
      return obj1;
    };
    p3 = prom<V +>{
      names12 = ld names;
      names13 = force? names12;
      checkMissing(names13);
      return names13;
    };
    p4 = prom<V +>{
      dataPart2 = ld dataPart;
      dataPart3 = force? dataPart2;
      checkMissing(dataPart3);
      return dataPart3;
    };
    r43 = dyn new[, object, slots, dataPart]("classPrototypeDef", p2, p3, p4);
    check L81() else D29();
  D29():
    deopt 103 [r43];
  L8(dx1):
    unclass = ldf unclass in base;
    r27 = dyn unclass(dx1);
    check L55() else D16();
  L11(dx5):
    st props = dx5;
    names2 = ld names;
    check L61() else D19();
  L16(i8, dx10):
    l1 = ld obj;
    slot__ = ldf `slot<-`;
    check L78() else D26();
  L45():
    dr = tryDispatchBuiltin.1("[[", props3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(props5):
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L57():
    dr4 = tryDispatchBuiltin.1("[", props14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L59() else L58(dr4);
  L58(props16):
    data8 = ld data;
    check L60() else D18();
  L74():
    dr8 = tryDispatchBuiltin.1("[[", props18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(i2, dr8);
  L75(i6, props20):
    i9 = ld i;
    check L77() else D25();
  L81():
    popenv;
    return r43;
  D16():
    deopt 55 [r27];
  D18():
    deopt 59 [props16, data8];
  D19():
    deopt 64 [names2];
  D25():
    deopt 81 [i6, props20, i9];
  D26():
    deopt 85 [i8, dx10, l1, dx10];
  L9(props8, r21):
    c3 = `is.object`(r21);
    if c3 then L51() else L52(props8, r21);
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L48():
    data4 = ld data;
    check L50() else D14();
  L49():
    r20 = dyn base5(<sym data>);
    goto L9(props5, r20);
  L55():
    goto L7(r27);
  L59():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L60():
    data9 = force? data8;
    checkMissing(data9);
    r28 = `!`(data9);
    __2 = ldf `[` in base;
    r29 = dyn __2(props16, r28);
    goto L11(r29);
  L61():
    names3 = force? names2;
    checkMissing(names3);
    c5 = `is.object`(names3);
    if c5 then L62() else L63(names3);
  L76():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L16(i2, dx9);
  L77():
    i10 = force? i9;
    __4 = ldf `[[` in base;
    r36 = dyn __4(props20, i10);
    goto L16(i6, r36);
  L78():
    p1 = prom<V +>{
      names8 = ld names;
      names9 = force? names8;
      checkMissing(names9);
      c8 = `is.object`(names9);
      if c8 then L1() else L2(names9);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", names9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(names11):
      i11 = ld i;
      i12 = force? i11;
      __5 = ldf `[[` in base;
      r37 = dyn __5(names11, i12);
      goto L0(r37);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r39 = dyn slot__(l1, NULL, p1, FALSE, dx10);
    check L79() else D27();
  D14():
    deopt 47 [props5, data4];
  D27():
    deopt 89 [i8, dx10, r39];
  L10(props12, dx3):
    __1 = ldf `[[` in base;
    r26 = dyn __1(props12, dx3);
    goto L8(r26);
  L12(dx7):
    st names = dx7;
    goto L13();
  L50():
    data5 = force? data4;
    checkMissing(data5);
    r22 = seq_along(data5);
    goto L9(props5, r22);
  L51():
    dr2 = tryDispatchBuiltin.1("[", r21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(props8, dr2);
  L52(props10, r24):
    data6 = ld data;
    check L54() else D15();
  L62():
    dr6 = tryDispatchBuiltin.1("[", names3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(dr6);
  L63(names5):
    data10 = ld data;
    check L65() else D20();
  L79():
    st obj = r39;
    goto L15(i8);
  D15():
    deopt 50 [props10, r24, data6];
  D20():
    deopt 66 [names5, data10];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(props8, dx2);
  L54():
    data7 = force? data6;
    __ = ldf `[` in base;
    r25 = dyn __(r24, data7);
    goto L10(props10, r25);
  L64():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L65():
    data11 = force? data10;
    checkMissing(data11);
    r30 = `!`(data11);
    __3 = ldf `[` in base;
    r31 = dyn __3(names5, r30);
    goto L12(r31);
  }
}