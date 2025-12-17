fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1131944331;
    st sigToEnv = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1131944331(signature, generic) {
  (reg signature:*, reg generic:*) -+> V { var signature:*, var generic:*, reg __:cls, reg r:V, reg packageSlot:cls, reg signature1:*, reg signature2:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg package:*, reg package1:V, reg c:V, reg c1:L, reg environment:cls, reg generic1:*, reg generic2:V, reg p1:p(V +), reg r6:V, reg _requirePackage:cls, reg package2:*, reg package3:V, reg p2:p(V +), reg r9:V, reg new_env:cls, reg parent:*, reg parent1:V, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg signature3:*, reg signature4:V, reg as_character:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg signature5:*, reg signature6:V, reg names:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg args:*, reg args1:V, reg r20:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg assign:cls, reg args2:*, reg args3:V, reg c3:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __1:cls, reg r21:V, reg p4:p(V +), reg classes:*, reg classes1:V, reg c4:L, reg classes3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __2:cls, reg r23:V, reg p5:p(V +), reg value:*, reg value1:V, reg p6:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg args6:*, reg args7:V, reg length:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg r34:V, reg genericSig:*, reg genericSig1:V, reg length1:cls, reg r35:V, reg r36:V, reg c5:L, reg genericSig2:*, reg genericSig3:V, reg c6:L, reg genericSig5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg genericSig8:V, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg genericSig11:V, reg r40:V, reg genericSig12:*, reg genericSig13:V, reg args8:*, reg args9:V, reg match:cls, reg r41:V, reg is_na:cls, reg r42:V, reg __3:cls, reg r43:V, reg s1:V, reg l1:I, reg i9:I, reg i10:I, reg i11:I, reg c7:L, reg x1:V, reg assign1:cls, reg other:*, reg other1:V, reg p7:p(V +), reg value2:*, reg value3:V, reg p8:p(V +), reg r46:V, reg value4:*, reg value5:V |
    mkenv;
    st signature = signature;
    st generic = generic;
    __ = ldf `@` in base;
    r = dyn __(<sym generic>, <sym signature>);
    st genericSig = r;
    packageSlot = ldf packageSlot;
    check L17() else D0();
  D0():
    deopt 4 [];
  L17():
    p = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r2 = dyn packageSlot(p);
    check L18() else D1();
  D1():
    deopt 6 [r2];
  L18():
    st package = r2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r4):
    c1 = `as.logical`(r4);
    if c1 then L22() else L1();
  L19():
    package = ld package;
    check L21() else D2();
  L20():
    r3 = dyn base(<sym package>);
    goto L0(r3);
  D2():
    deopt 9 [package];
  L1():
    _requirePackage = ldf `.requirePackage`;
    check L26() else D5();
  L2():
    new_env = ldf `new.env`;
    check L28() else D7();
  L21():
    package1 = force? package;
    checkMissing(package1);
    c = `==`(package1, NULL);
    goto L0(c);
  L22():
    environment = ldf environment;
    check L23() else D3();
  D3():
    deopt 13 [];
  D5():
    deopt 18 [];
  D7():
    deopt 23 [];
  L23():
    p1 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r6 = dyn environment(p1);
    check L24() else D4();
  L26():
    p2 = prom<V +>{
      package2 = ld package;
      package3 = force? package2;
      checkMissing(package3);
      return package3;
    };
    r9 = dyn _requirePackage(p2);
    check L27() else D6();
  L28():
    p3 = prom<V +>{
      parent = ld parent;
      parent1 = force? parent;
      checkMissing(parent1);
      return parent1;
    };
    r11 = dyn new_env[parent](p3);
    check L29() else D8();
  D4():
    deopt 15 [r6];
  D6():
    deopt 20 [r9];
  D8():
    deopt 26 [r11];
  L24():
    st parent = r6;
    goto L2();
  L27():
    st parent = r9;
    goto L2();
  L29():
    st value = r11;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L3(r13):
    st classes = r13;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L30():
    signature3 = ld signature;
    check L32() else D9();
  L31():
    r12 = dyn base1(<sym signature>);
    goto L3(r12);
  D9():
    deopt 30 [signature3];
  L4(r16):
    st args = r16;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L32():
    signature4 = force? signature3;
    checkMissing(signature4);
    as_character = ldf `as.character` in base;
    r14 = dyn as_character(signature4);
    check L33() else D10();
  L34():
    signature5 = ld signature;
    check L36() else D11();
  L35():
    r15 = dyn base2(<sym signature>);
    goto L4(r15);
  D10():
    deopt 33 [r14];
  D11():
    deopt 37 [signature5];
  L5(r19):
    s = toForSeq(r19);
    l = length(s);
    i = 0;
    goto L6(i);
  L33():
    goto L3(r14);
  L36():
    signature6 = force? signature5;
    checkMissing(signature6);
    names = ldf names in base;
    r17 = dyn names(signature6);
    check L37() else D12();
  L38():
    args = ld args;
    check L40() else D13();
  L39():
    r18 = dyn base3(<sym args>);
    goto L5(r18);
  D12():
    deopt 40 [r17];
  D13():
    deopt 43 [args];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L41() else L7();
  L37():
    goto L4(r17);
  L40():
    args1 = force? args;
    checkMissing(args1);
    r20 = seq_along(args1);
    goto L5(r20);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    assign = ldf assign;
    check L42() else D14();
  L41():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D14():
    deopt 47 [i2];
  L8(r28):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L42():
    p4 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      c3 = `is.object`(args3);
      if c3 then L1() else L2(args3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", args3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(args5):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r21 = dyn __1(args5, i6);
      goto L0(r21);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      c4 = `is.object`(classes1);
      if c4 then L1() else L2(classes1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", classes1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(classes3):
      i7 = ld i;
      i8 = force? i7;
      __2 = ldf `[[` in base;
      r23 = dyn __2(classes3, i8);
      goto L0(r23);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r26 = dyn assign[, , envir](p4, p5, p6);
    check L43() else D15();
  L44():
    args6 = ld args;
    check L46() else D16();
  L45():
    r27 = dyn base4(<sym args>);
    goto L8(r27);
  D15():
    deopt 52 [i2, r26];
  D16():
    deopt 58 [args6];
  L9(r33, r34):
    r36 = `<`(r33, r34);
    c5 = `as.logical`(r36);
    if c5 then L52() else L10();
  L43():
    goto L6(i2);
  L46():
    args7 = force? args6;
    checkMissing(args7);
    length = ldf length in base;
    r29 = dyn length(args7);
    check L47() else D17();
  L48():
    genericSig = ld genericSig;
    check L50() else D18();
  L49():
    r32 = dyn base5(<sym genericSig>);
    goto L9(r28, r32);
  D17():
    deopt 61 [r29];
  D18():
    deopt 63 [r28, genericSig];
  L10():
    goto L16();
  L16():
    value4 = ld value;
    check L69() else D27();
  L47():
    goto L8(r29);
  L50():
    genericSig1 = force? genericSig;
    checkMissing(genericSig1);
    length1 = ldf length in base;
    r35 = dyn length1(genericSig1);
    check L51() else D19();
  L52():
    genericSig2 = ld genericSig;
    check L53() else D20();
  D19():
    deopt 66 [r28, r35];
  D20():
    deopt 68 [genericSig2];
  D27():
    deopt 97 [value4];
  L51():
    goto L9(r28, r35);
  L53():
    genericSig3 = force? genericSig2;
    checkMissing(genericSig3);
    c6 = `is.object`(genericSig3);
    if c6 then L54() else L55(genericSig3);
  L69():
    value5 = force? value4;
    checkMissing(value5);
    popenv;
    return value5;
  L11(dx5):
    s1 = toForSeq(dx5);
    l1 = length(s1);
    i9 = 0;
    goto L14(i9);
  L54():
    dr4 = tryDispatchBuiltin.1("[", genericSig3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(dr4);
  L55(genericSig5):
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L12(genericSig8, r38):
    __3 = ldf `[` in base;
    r43 = dyn __3(genericSig8, r38);
    goto L11(r43);
  L14(i10):
    i11 = `+`.1(i10, 1);
    c7 = `<`.1(l1, i11);
    if c7 then L65() else L15();
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L57():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  L58():
    r37 = dyn base6(<lang match(genericSig, args)>);
    goto L12(genericSig5, r37);
  L13(genericSig11, r40):
    is_na = ldf `is.na` in base;
    r42 = dyn is_na(r40);
    check L64() else D24();
  L15():
    x1 = `[[`(s1, i11, NULL, TRUE);
    st other = x1;
    assign1 = ldf assign;
    check L66() else D25();
  L59():
    genericSig12 = ld genericSig;
    check L61() else D21();
  L60():
    r39 = dyn base7(<sym genericSig>, <sym args>);
    goto L13(genericSig5, r39);
  L65():
    goto L16();
  D21():
    deopt 74 [genericSig5, genericSig12];
  D24():
    deopt 83 [genericSig11, r42];
  D25():
    deopt 86 [i11];
  L61():
    genericSig13 = force? genericSig12;
    checkMissing(genericSig13);
    args8 = ld args;
    check L62() else D22();
  L64():
    goto L12(genericSig11, r42);
  L66():
    p7 = prom<V +>{
      other = ld other;
      other1 = force? other;
      checkMissing(other1);
      return other1;
    };
    p8 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r46 = dyn assign1[, , envir](p7, "ANY", p8);
    check L67() else D26();
  D22():
    deopt 76 [genericSig5, args8];
  D26():
    deopt 91 [i11, r46];
  L62():
    args9 = force? args8;
    checkMissing(args9);
    match = ldf match in base;
    r41 = dyn match(genericSig13, args9, NA_INT, NULL);
    check L63() else D23();
  L67():
    goto L14(i11);
  D23():
    deopt 81 [genericSig5, r41];
  L63():
    goto L13(genericSig5, r41);
  }
}