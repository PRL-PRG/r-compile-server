fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2240141643;
    st `.find_calls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2240141643(x, predicate, recursive) {
  (reg x:*, reg predicate:*, reg recursive:*) -+> V { var x:*, var predicate:*, reg predicate_isMissing:L, reg predicate_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg is_recursive:cls, reg r5:V, reg r6:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg x3:*, reg x4:V, reg isS4:cls, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg calls:*, reg calls1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg is_call:cls, reg r14:V, reg c10:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x7:*, reg x8:V, reg list1:cls, reg r17:V, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg x9:*, reg x10:V, reg c11:L, reg c12:L, reg l:*, reg class__:cls, reg r21:V, reg as_list:cls, reg x11:*, reg x12:V, reg p:p(V +), reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg predicate1:*, reg predicate2:V, reg c13:V, reg c14:L, reg r27:cls, reg r28:cls, reg r29:cls, reg recursive1:*, reg recursive2:V, reg r30:V, reg c15:L, reg Filter:cls, reg f:*, reg f1:V, reg p1:p(V +), reg x13:*, reg x14:V, reg p2:p(V +), reg r33:V, reg r36:cls, reg gatherer:cls, reg x15:*, reg x16:V, reg p3:p(V +), reg r38:V, reg calls2:*, reg calls3:V |
    mkenv;
    st x = x;
    predicate_isMissing = missing.0(predicate);
    if predicate_isMissing then L0(NULL) else L0(predicate);
  L0(predicate_orDefault):
    st predicate = predicate_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(FALSE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L2(r1):
    st calls = r1;
    sym1 = ldf `is.recursive`;
    base1 = ldf `is.recursive` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L20():
    list = ldf list in base;
    r2 = dyn list();
    check L22() else D0();
  L21():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  L3(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L4(c) else L27();
  L22():
    goto L2(r2);
  L23():
    x1 = ld x;
    check L25() else D1();
  L24():
    r3 = dyn base1(<sym x>);
    goto L3(r3);
  D1():
    deopt 7 [x1];
  L4(c1):
    c9 = `as.logical`(c1);
    if c9 then L33() else L6();
  L25():
    x2 = force? x1;
    checkMissing(x2);
    is_recursive = ldf `is.recursive` in base;
    r5 = dyn is_recursive(x2);
    check L26() else D2();
  L27():
    sym2 = ldf isS4;
    base2 = ldf isS4 in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  D2():
    deopt 10 [r5];
  L5(c5, r8):
    c6 = `as.logical`(r8);
    c7 = `||`(c5, c6);
    goto L4(c7);
  L6():
    sym3 = ldf `is.call`;
    base3 = ldf `is.call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L26():
    goto L3(r5);
  L28():
    x3 = ld x;
    check L30() else D3();
  L29():
    r7 = dyn base2(<sym x>);
    goto L5(c, r7);
  L33():
    calls = ld calls;
    check L34() else D5();
  D3():
    deopt 14 [c, x3];
  D5():
    deopt 19 [calls];
  L8(r13):
    c10 = `as.logical`(r13);
    if c10 then L41() else L9();
  L30():
    x4 = force? x3;
    checkMissing(x4);
    isS4 = ldf isS4 in base;
    r9 = dyn isS4(x4);
    check L31() else D4();
  L34():
    calls1 = force? calls;
    checkMissing(calls1);
    popenv;
    return calls1;
  L37():
    x5 = ld x;
    check L39() else D6();
  L38():
    r12 = dyn base3(<sym x>);
    goto L8(r12);
  D4():
    deopt 17 [c, r9];
  D6():
    deopt 26 [x5];
  L9():
    sym5 = ldf `is.object`;
    base5 = ldf `is.object` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L11(r18):
    st x = r18;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  L31():
    goto L5(c, r9);
  L39():
    x6 = force? x5;
    checkMissing(x6);
    is_call = ldf `is.call` in base;
    r14 = dyn is_call(x6);
    check L40() else D7();
  L41():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  D7():
    deopt 29 [r14];
  L10(r16):
    goto L11(r16);
  L12(r20):
    c12 = `as.logical`(r20);
    if c12 then L50() else L13();
  L15(r26):
    c14 = `as.logical`(r26);
    if c14 then L59() else L16();
  L40():
    goto L8(r14);
  L42():
    x7 = ld x;
    check L44() else D8();
  L43():
    r15 = dyn base4(<sym x>);
    goto L10(r15);
  L47():
    x9 = ld x;
    check L49() else D10();
  L48():
    r19 = dyn base5(<sym x>);
    goto L12(r19);
  L56():
    predicate1 = ld predicate;
    check L58() else D15();
  L57():
    r25 = dyn base6(<sym predicate>);
    goto L15(r25);
  D8():
    deopt 32 [x7];
  D10():
    deopt 37 [x9];
  D15():
    deopt 55 [predicate1];
  L13():
    goto L14();
  L14():
    as_list = ldf `as.list`;
    check L54() else D13();
  L16():
    r29 = clos inner3708401697;
    goto L17(r29);
  L17(r28):
    st f = r28;
    recursive1 = ld recursive;
    check L61() else D16();
  L44():
    x8 = force? x7;
    checkMissing(x8);
    list1 = ldf list in base;
    r17 = dyn list1(x8);
    check L45() else D9();
  L49():
    x10 = force? x9;
    checkMissing(x10);
    c11 = `is.object`(x10);
    goto L12(c11);
  L50():
    l = ld x;
    class__ = ldf `class<-`;
    check L51() else D11();
  L58():
    predicate2 = force? predicate1;
    checkMissing(predicate2);
    c13 = `==`(predicate2, NULL);
    goto L15(c13);
  L59():
    r27 = clos inner3708401697;
    goto L17(r27);
  D9():
    deopt 35 [r17];
  D11():
    deopt 43 [NULL, l, NULL];
  D13():
    deopt 50 [];
  D16():
    deopt 63 [recursive1];
  L45():
    goto L10(r17);
  L51():
    r21 = dyn class__(l, NULL, NULL);
    check L52() else D12();
  L54():
    p = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r24 = dyn as_list(p);
    check L55() else D14();
  L61():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    r30 = `!`(recursive2);
    c15 = `as.logical`(r30);
    if c15 then L62() else L18();
  D12():
    deopt 45 [NULL, r21];
  D14():
    deopt 52 [r24];
  L18():
    r36 = clos inner3708401697;
    st gatherer = r36;
    gatherer = ldf gatherer;
    check L67() else D19();
  L52():
    st x = r21;
    goto L14();
  L55():
    goto L11(r24);
  L62():
    Filter = ldf Filter;
    check L63() else D17();
  D17():
    deopt 67 [];
  D19():
    deopt 78 [];
  L63():
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r33 = dyn Filter(p1, p2);
    check L64() else D18();
  L67():
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r38 = dyn gatherer(p3);
    check L68() else D20();
  D18():
    deopt 70 [r33];
  D20():
    deopt 80 [r38];
  L64():
    popenv;
    return r33;
  L68():
    calls2 = ld calls;
    check L69() else D21();
  D21():
    deopt 81 [calls2];
  L69():
    calls3 = force? calls2;
    checkMissing(calls3);
    popenv;
    return calls3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    e1 = ld e;
    check L3() else D0();
  L2():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L3():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}