fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg cat:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg list:cls, reg ddd1:dots?, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg object3:*, reg object4:V, reg names:cls, reg r13:V, reg strata:*, reg strata1:V, reg c2:L, reg strata3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg r15:V, reg c3:L, reg strata4:*, reg strata5:V, reg c4:L, reg strata7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg object5:*, reg object6:V, reg c5:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r17:V, reg setNames:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg strata8:*, reg strata9:V, reg length:cls, reg r22:V, reg vector:cls, reg r23:V, reg p:p(V +), reg paste:cls, reg strata10:*, reg strata11:V, reg p1:p(V +), reg r26:V, reg p2:p(V +), reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg strata12:*, reg strata13:V, reg r31:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg do_call:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg object9:*, reg object10:V, reg c7:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg i5:*, reg i6:V, reg __3:cls, reg r36:V, reg list1:cls, reg r37:V, reg dots:*, reg dots1:V, reg c8:cls, reg r38:V, reg p3:p(V +), reg r40:V, reg l1:*, reg c9:L, reg i8:I, reg r42:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx9:V, reg i10:I, reg dx10:V, reg i11:*, reg i12:V, reg ____:cls, reg r45:V, reg l4:*, reg class__:cls, reg r46:V, reg x1:*, reg x2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L21() else L2();
  L15():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L16():
    r = dyn base(<lang attr(object, "weights")>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    goto L3();
  L3():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L17():
    object1 = ld object;
    check L19() else D0();
  L18():
    r2 = dyn base1(<sym object>, "weights");
    goto L1(r2);
  L21():
    cat = ldf cat;
    check L22() else D2();
  D0():
    deopt 3 [object1];
  D2():
    deopt 11 [];
  L4(r9):
    st dots = r9;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L19():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r4 = dyn attr(object2, "weights");
    check L20() else D1();
  L22():
    r6 = dyn cat("Note: The results below are on the weighted scale\n");
    check L23() else D3();
  L25():
    list = ldf list;
    check L27() else D4();
  L26():
    r8 = dyn base2(<sym ...>);
    goto L4(r8);
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r6];
  D4():
    deopt 18 [];
  L5(r12):
    st strata = r12;
    strata = ld strata;
    check L33() else D8();
  L20():
    goto L1(r4);
  L23():
    goto L3();
  L27():
    ddd1 = ld `...`;
    r10 = dyn list[`...`](ddd1);
    check L28() else D5();
  L29():
    object3 = ld object;
    check L31() else D6();
  L30():
    r11 = dyn base3(<sym object>);
    goto L5(r11);
  D5():
    deopt 20 [r10];
  D6():
    deopt 24 [object3];
  D8():
    deopt 29 [strata];
  L28():
    goto L4(r10);
  L31():
    object4 = force? object3;
    checkMissing(object4);
    names = ldf names in base;
    r13 = dyn names(object4);
    check L32() else D7();
  L33():
    strata1 = force? strata;
    checkMissing(strata1);
    c2 = `is.object`(strata1);
    if c2 then L34() else L35(strata1);
  D7():
    deopt 27 [r13];
  L6(dx1):
    r15 = `==`(dx1, "(Intercept)");
    c3 = `as.logical`(r15);
    if c3 then L37() else L7();
  L32():
    goto L5(r13);
  L34():
    dr = tryDispatchBuiltin.1("[", strata1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(strata3):
    __ = ldf `[` in base;
    r14 = dyn __(strata3, 1);
    goto L6(r14);
  L7():
    goto L10();
  L10():
    setNames = ldf setNames;
    check L47() else D11();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L37():
    strata4 = ld strata;
    check L38() else D9();
  D9():
    deopt 36 [strata4];
  D11():
    deopt 51 [];
  L38():
    strata5 = force? strata4;
    checkMissing(strata5);
    c4 = `is.object`(strata5);
    if c4 then L39() else L40(strata5);
  L47():
    p = prom<V +>{
      sym4 = ldf vector;
      base4 = ldf vector in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r19):
      return r19;
    L2():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r18 = dyn base4[length, mode](<lang length(strata)>, "list");
      goto L0(r18);
    L1(r21):
      vector = ldf vector in base;
      r23 = dyn vector("list", r21);
      goto L0(r23);
    L4():
      strata8 = ld strata;
      strata9 = force? strata8;
      checkMissing(strata9);
      length = ldf length in base;
      r22 = dyn length(strata9);
      goto L1(r22);
    L5():
      r20 = dyn base5(<sym strata>);
      goto L1(r20);
    };
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        strata10 = ld strata;
        strata11 = force? strata10;
        checkMissing(strata11);
        return strata11;
      };
      r26 = dyn paste("Error:", p1);
      return r26;
    };
    r28 = dyn setNames(p, p2);
    check L48() else D12();
  D12():
    deopt 54 [r28];
  L8(dx3):
    st strata = dx3;
    object5 = ld object;
    check L42() else D10();
  L39():
    dr2 = tryDispatchBuiltin.1("[", strata5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(strata7):
    __1 = ldf `[` in base;
    r16 = dyn __1(strata7, -1);
    goto L8(r16);
  L48():
    st x = r28;
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  D10():
    deopt 42 [object5];
  L11(r30):
    s = toForSeq(r30);
    l = length(s);
    i = 0;
    goto L12(i);
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L42():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.object`(object6);
    if c5 then L43() else L44(object6);
  L49():
    strata12 = ld strata;
    check L51() else D13();
  L50():
    r29 = dyn base6(<sym strata>);
    goto L11(r29);
  D13():
    deopt 57 [strata12];
  L9(dx5):
    st object = dx5;
    goto L10();
  L12(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L52() else L14();
  L43():
    dr4 = tryDispatchBuiltin.1("[", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(dr4);
  L44(object8):
    __2 = ldf `[` in base;
    r17 = dyn __2(object8, -1);
    goto L9(r17);
  L51():
    strata13 = force? strata12;
    checkMissing(strata13);
    r31 = seq_along(strata13);
    goto L11(r31);
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    do_call = ldf `do.call`;
    check L53() else D14();
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L52():
    l4 = ld x;
    class__ = ldf `class<-`;
    check L59() else D17();
  D14():
    deopt 61 [i2];
  D17():
    deopt 76 ["summary.aovlist", l4, "summary.aovlist"];
  L53():
    p3 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L3() else L4();
    L0(r33):
      return r33;
    L3():
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L4():
      r32 = dyn base7(<lang list(object=`[[`(object, i))>, <sym dots>);
      goto L0(r32);
    L1(r35):
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      c8 = ldf c in base;
      r38 = dyn c8(r35, dots1);
      goto L0(r38);
    L5():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c7 = `is.object`(object10);
      if c7 then L7() else L8(object10);
    L6():
      r34 = dyn base8[object](<lang `[[`(object, i)>);
      goto L1(r34);
    L2(dx8):
      list1 = ldf list in base;
      r37 = dyn list1(dx8);
      goto L1(r37);
    L7():
      dr6 = tryDispatchBuiltin.1("[[", object10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L9() else L8(dr6);
    L8(object12):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r36 = dyn __3(object12, i6);
      goto L2(r36);
    L9():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx7);
    };
    r40 = dyn do_call("summary", p3);
    check L54() else D15();
  L59():
    r46 = dyn class__(l4, NULL, "summary.aovlist");
    check L60() else D18();
  D15():
    deopt 64 [i2, r40];
  D18():
    deopt 78 ["summary.aovlist", r46];
  L54():
    l1 = ld x;
    c9 = `is.object`(l1);
    if c9 then L55() else L56(i2, r40, l1);
  L60():
    st x = r46;
    x1 = ld x;
    check L61() else D19();
  D19():
    deopt 80 [x1];
  L13(i10, dx10):
    st x = dx10;
    goto L12(i10);
  L55():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, r40);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L57() else L56(i2, r40, dr8);
  L56(i8, r42, l3):
    i11 = ld i;
    check L58() else D16();
  L61():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  D16():
    deopt 66 [i8, r42, l3, r40, i11];
  L57():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L13(i2, dx9);
  L58():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l3, r40, i12);
    goto L13(i8, r45);
  }
}