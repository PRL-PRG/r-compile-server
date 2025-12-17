fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3906769723;
    st `.getGroupMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3906769723(labels, generics, found) {
  (reg labels:*, reg generics:*, reg found:*) -+> V { var labels:*, var generics:*, var found:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg generics1:*, reg generics2:V, reg r5:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg generics3:*, reg generics4:V, reg c1:L, reg i6:I, reg generics6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r6:V, reg is:cls, reg gen:*, reg gen1:V, reg p:p(V +), reg r8:V, reg r9:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg gen2:*, reg gen3:V, reg class:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg i13:I, reg _getMethodsTable:cls, reg gen4:*, reg gen5:V, reg p4:p(V +), reg r21:V, reg sort:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg table:*, reg table1:V, reg names:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg i16:I, reg r28:V, reg rep:cls, reg r29:V, reg _in_:cls, reg labels1:*, reg labels2:V, reg c3:L, reg labels4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg found1:*, reg found2:V, reg r30:V, reg __1:cls, reg r31:V, reg p6:p(V +), reg allMethods:*, reg allMethods1:V, reg p7:p(V +), reg r34:V, reg l1:*, reg c4:L, reg i18:I, reg r36:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i20:I, reg dx5:V, reg found3:*, reg found4:V, reg r39:V, reg ___:cls, reg r40:V, reg found5:*, reg found6:V, reg newFound:*, reg newFound1:V, reg r41:V, reg mget:cls, reg labels5:*, reg labels6:V, reg c5:L, reg labels8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg newFound2:*, reg newFound3:V, reg __2:cls, reg r42:V, reg p8:p(V +), reg table2:*, reg table3:V, reg p9:p(V +), reg r45:V, reg l4:*, reg c6:L, reg i22:I, reg r47:V, reg l6:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i24:I, reg dx9:V, reg labels9:*, reg labels10:V, reg c7:L, reg i26:I, reg r52:V, reg l8:*, reg r53:V, reg labels12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i28:I, reg r56:V, reg l10:*, reg r57:V, reg dx11:V, reg newFound4:*, reg newFound5:V, reg __3:cls, reg r58:V, reg ___1:cls, reg r59:V, reg methods:*, reg methods1:V |
    mkenv;
    st labels = labels;
    st generics = generics;
    st found = found;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    st methods = r1;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L11():
    list = ldf list in base;
    r2 = dyn list();
    check L13() else D0();
  L12():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L13():
    goto L0(r2);
  L14():
    generics1 = ld generics;
    check L16() else D1();
  L15():
    r3 = dyn base1(<sym generics>);
    goto L1(r3);
  D1():
    deopt 6 [generics1];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L17() else L10();
  L16():
    generics2 = force? generics1;
    checkMissing(generics2);
    r5 = seq_along(generics2);
    goto L1(r5);
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    generics3 = ld generics;
    check L18() else D2();
  L17():
    methods = ld methods;
    check L53() else D21();
  D2():
    deopt 9 [i2, generics3];
  D21():
    deopt 75 [methods];
  L18():
    generics4 = force? generics3;
    checkMissing(generics4);
    c1 = `is.object`(generics4);
    if c1 then L19() else L20(i2, generics4);
  L53():
    methods1 = force? methods;
    checkMissing(methods1);
    popenv;
    return methods1;
  L3(i8, dx1):
    st gen = dx1;
    is = ldf is;
    check L23() else D4();
  L19():
    dr = tryDispatchBuiltin.1("[[", generics4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(i2, dr);
  L20(i6, generics6):
    i9 = ld i;
    check L22() else D3();
  D3():
    deopt 11 [i6, generics6, i9];
  D4():
    deopt 16 [i8];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L22():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r6 = dyn __(generics6, i10);
    goto L3(i6, r6);
  L23():
    p = prom<V +>{
      gen = ld gen;
      gen1 = force? gen;
      checkMissing(gen1);
      return gen1;
    };
    r8 = dyn is(p, "genericFunction");
    check L24() else D5();
  D5():
    deopt 19 [i8, r8];
  L24():
    r9 = `!`(r8);
    c2 = `as.logical`(r9);
    if c2 then L25() else L4();
  L4():
    goto L5(i8);
  L5(i13):
    _getMethodsTable = ldf `.getMethodsTable`;
    check L29() else D8();
  L25():
    stop = ldf stop;
    check L26() else D6();
  D6():
    deopt 22 [i8];
  D8():
    deopt 30 [i13];
  L26():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          sym2 = ldf class;
          base2 = ldf class in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r11):
          return r11;
        L1():
          gen2 = ld gen;
          gen3 = force? gen2;
          checkMissing(gen3);
          class = ldf class in base;
          r12 = dyn class(gen3);
          goto L0(r12);
        L2():
          r10 = dyn base2(<sym gen>);
          goto L0(r10);
        };
        r14 = dyn dQuote(p1);
        return r14;
      };
      r16 = dyn gettextf("invalid group generic function in search for inherited method (class %s)", p2);
      return r16;
    };
    r18 = dyn stop[, domain](p3, NA_LGL);
    check L27() else D7();
  L29():
    p4 = prom<V +>{
      gen4 = ld gen;
      gen5 = force? gen4;
      checkMissing(gen5);
      return gen5;
    };
    r21 = dyn _getMethodsTable(p4);
    check L30() else D9();
  D7():
    deopt 26 [i8, r18];
  D9():
    deopt 32 [i13, r21];
  L27():
    goto L5(i8);
  L30():
    st table = r21;
    sort = ldf sort;
    check L31() else D10();
  D10():
    deopt 35 [i13];
  L31():
    p5 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      names = ldf names in base;
      r24 = dyn names(table1);
      goto L0(r24);
    L2():
      r22 = dyn base3(<sym table>);
      goto L0(r22);
    };
    r26 = dyn sort(p5);
    check L32() else D11();
  D11():
    deopt 37 [i13, r26];
  L32():
    st allMethods = r26;
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L6(i16, r28):
    st newFound = r28;
    _in_ = ldf `%in%`;
    check L35() else D12();
  L33():
    rep = ldf rep in base;
    r29 = dyn rep(FALSE, <lang length(found)>);
    goto L6(i13, r29);
  L34():
    r27 = dyn base4(FALSE, <lang length(found)>);
    goto L6(i13, r27);
  D12():
    deopt 44 [i16];
  L35():
    p6 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      c3 = `is.object`(labels2);
      if c3 then L1() else L2(labels2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", labels2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(labels4):
      found1 = ld found;
      found2 = force? found1;
      checkMissing(found2);
      r30 = `!`(found2);
      __1 = ldf `[` in base;
      r31 = dyn __1(labels4, r30);
      goto L0(r31);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p7 = prom<V +>{
      allMethods = ld allMethods;
      allMethods1 = force? allMethods;
      checkMissing(allMethods1);
      return allMethods1;
    };
    r34 = dyn _in_(p6, p7);
    check L36() else D13();
  D13():
    deopt 47 [i16, r34];
  L36():
    l1 = ld newFound;
    c4 = `is.object`(l1);
    if c4 then L37() else L38(i16, r34, l1);
  L7(i20, dx5):
    st newFound = dx5;
    found5 = ld found;
    check L41() else D15();
  L37():
    dr4 = tryDispatchBuiltin.0("[<-", l1, r34);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L39() else L38(i16, r34, dr4);
  L38(i18, r36, l3):
    found3 = ld found;
    check L40() else D14();
  D14():
    deopt 49 [i18, r36, l3, r34, found3];
  D15():
    deopt 54 [i20, found5];
  L39():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(i16, dx4);
  L40():
    found4 = force? found3;
    checkMissing(found4);
    r39 = `!`(found4);
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l3, r34, r39);
    goto L7(i18, r40);
  L41():
    found6 = force? found5;
    checkMissing(found6);
    newFound = ld newFound;
    check L42() else D16();
  D16():
    deopt 55 [i20, found6, newFound];
  L42():
    newFound1 = force? newFound;
    checkMissing(newFound1);
    r41 = `||`(found6, newFound1);
    st found = r41;
    mget = ldf mget;
    check L43() else D17();
  D17():
    deopt 60 [i20];
  L43():
    p8 = prom<V +>{
      labels5 = ld labels;
      labels6 = force? labels5;
      checkMissing(labels6);
      c5 = `is.object`(labels6);
      if c5 then L1() else L2(labels6);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", labels6);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(labels8):
      newFound2 = ld newFound;
      newFound3 = force? newFound2;
      __2 = ldf `[` in base;
      r42 = dyn __2(labels8, newFound3);
      goto L0(r42);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p9 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    r45 = dyn mget(p8, p9);
    check L44() else D18();
  D18():
    deopt 63 [i20, r45];
  L44():
    l4 = ld methods;
    c6 = `is.object`(l4);
    if c6 then L45() else L46(i20, r45, l4);
  L8(i24, dx9):
    st methods = dx9;
    goto L2(i24);
  L45():
    dr8 = tryDispatchBuiltin.0("[<-", l4, r45);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L47() else L46(i20, r45, dr8);
  L46(i22, r47, l6):
    labels9 = ld labels;
    check L48() else D19();
  D19():
    deopt 65 [i22, r47, l6, r45, labels9];
  L47():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(i20, dx8);
  L48():
    labels10 = force? labels9;
    checkMissing(labels10);
    c7 = `is.object`(labels10);
    if c7 then L49() else L50(i22, r47, l6, r45, labels10);
  L9(i28, r56, l10, r57, dx11):
    ___1 = ldf `[<-` in base;
    r59 = dyn ___1(l10, r57, dx11);
    goto L8(i28, r59);
  L49():
    dr10 = tryDispatchBuiltin.1("[", labels10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L51() else L50(i22, r47, l6, r45, dr10);
  L50(i26, r52, l8, r53, labels12):
    newFound4 = ld newFound;
    check L52() else D20();
  D20():
    deopt 67 [i26, r52, l8, r53, labels12, newFound4];
  L51():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(i22, r47, l6, r45, dx10);
  L52():
    newFound5 = force? newFound4;
    __3 = ldf `[` in base;
    r58 = dyn __3(labels12, newFound5);
    goto L9(i26, r52, l8, r53, r58);
  }
}