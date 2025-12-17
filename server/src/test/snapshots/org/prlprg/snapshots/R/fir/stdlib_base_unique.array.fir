fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1087190710;
    st `unique.array` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1087190710(x, incomparables, MARGIN, fromLast, `...`) {
  (reg x:*, reg incomparables:*, reg MARGIN:*, reg fromLast:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var MARGIN:*, reg MARGIN_isMissing:L, reg MARGIN_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var `...`:dots?, reg isFALSE:cls, reg incomparables1:*, reg incomparables2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _NotYetUsed:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg dim:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg dx:*, reg dx1:V, reg length:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg MARGIN1:*, reg MARGIN2:V, reg length1:cls, reg r13:V, reg r14:V, reg c1:L, reg c2:V, reg MARGIN3:*, reg MARGIN4:V, reg ndim:*, reg ndim1:V, reg r15:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg gettextf:cls, reg paste:cls, reg MARGIN5:*, reg MARGIN6:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg paste1:cls, reg dx2:*, reg dx3:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg r24:V, reg ndim2:*, reg ndim3:V, reg r26:V, reg c8:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg c13:L, reg r28:V, reg dx4:*, reg dx5:V, reg c14:L, reg c16:L, reg dx7:V, reg dr:V, reg dc:L, reg dx8:V, reg c18:L, reg dx9:V, reg MARGIN7:*, reg MARGIN8:V, reg r29:V, reg __:cls, reg r30:V, reg prod:cls, reg r31:V, reg r32:V, reg c19:L, reg c20:V, reg c22:L, reg asplit:cls, reg x3:*, reg x4:V, reg p6:p(V +), reg MARGIN9:*, reg MARGIN10:V, reg p7:p(V +), reg r35:V, reg r36:V, reg x5:*, reg x6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg rep:cls, reg r39:V, reg l:*, reg names__:cls, reg r40:V, reg duplicated_default:cls, reg temp:*, reg temp1:V, reg p8:p(V +), reg fromLast1:*, reg fromLast2:V, reg p9:p(V +), reg ddd1:dots?, reg r43:V, reg r44:V, reg l1:*, reg c23:L, reg r46:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx10:V, reg dx11:V, reg MARGIN11:*, reg MARGIN12:V, reg ____:cls, reg r49:V, reg do_call:cls, reg __1:*, reg __2:V, reg p10:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg x7:*, reg x8:V, reg list:cls, reg r55:V, reg args:*, reg args1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg list1:cls, reg r58:V, reg c24:cls, reg r59:V, reg p11:p(V +), reg r61:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    MARGIN_isMissing = missing.0(MARGIN);
    if MARGIN_isMissing then L1(1.0) else L1(MARGIN);
  L1(MARGIN_orDefault):
    st MARGIN = MARGIN_orDefault;
    fromLast_isMissing = missing.0(fromLast);
    if fromLast_isMissing then L2(FALSE) else L2(fromLast);
  L2(fromLast_orDefault):
    st fromLast = fromLast_orDefault;
    st `...` = ddd;
    isFALSE = ldf isFALSE;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    r1 = dyn isFALSE(p);
    check L19() else D1();
  D1():
    deopt 3 [r1];
  L19():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L20() else L3();
  L3():
    goto L4();
  L4():
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L20():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L21() else D2();
  D2():
    deopt 6 [];
  L5(r6):
    st dx = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L21():
    r3 = dyn _NotYetUsed("incomparables != FALSE");
    check L22() else D3();
  L24():
    x1 = ld x;
    check L26() else D4();
  L25():
    r5 = dyn base(<sym x>);
    goto L5(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 13 [x1];
  L6(r9):
    st ndim = r9;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L22():
    goto L4();
  L26():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r7 = dyn dim(x2);
    check L27() else D5();
  L28():
    dx = ld dx;
    check L30() else D6();
  L29():
    r8 = dyn base1(<sym dx>);
    goto L6(r8);
  D5():
    deopt 16 [r7];
  D6():
    deopt 20 [dx];
  L7(r12):
    r14 = `!=`(r12, 1);
    c1 = `as.logical`(r14);
    if c1 then L8(c1) else L36();
  L27():
    goto L5(r7);
  L30():
    dx1 = force? dx;
    checkMissing(dx1);
    length = ldf length in base;
    r10 = dyn length(dx1);
    check L31() else D7();
  L32():
    MARGIN1 = ld MARGIN;
    check L34() else D8();
  L33():
    r11 = dyn base2(<sym MARGIN>);
    goto L7(r11);
  D7():
    deopt 23 [r10];
  D8():
    deopt 27 [MARGIN1];
  L8(c2):
    c7 = `as.logical`(c2);
    if c7 then L40() else L9();
  L31():
    goto L6(r10);
  L34():
    MARGIN2 = force? MARGIN1;
    checkMissing(MARGIN2);
    length1 = ldf length in base;
    r13 = dyn length1(MARGIN2);
    check L35() else D9();
  L36():
    MARGIN3 = ld MARGIN;
    check L37() else D10();
  D9():
    deopt 30 [r13];
  D10():
    deopt 33 [c1, MARGIN3];
  L9():
    goto L10();
  L10():
    ndim2 = ld ndim;
    check L44() else D14();
  L35():
    goto L7(r13);
  L37():
    MARGIN4 = force? MARGIN3;
    checkMissing(MARGIN4);
    ndim = ld ndim;
    check L38() else D11();
  L40():
    stop = ldf stop;
    check L41() else D12();
  D11():
    deopt 34 [c1, MARGIN4, ndim];
  D12():
    deopt 39 [];
  D14():
    deopt 46 [ndim2];
  L38():
    ndim1 = force? ndim;
    checkMissing(ndim1);
    r15 = `>`(MARGIN4, ndim1);
    c4 = `as.logical`(r15);
    c5 = `||`(c1, c4);
    goto L8(c5);
  L41():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        paste = ldf paste;
        p1 = prom<V +>{
          MARGIN5 = ld MARGIN;
          MARGIN6 = force? MARGIN5;
          checkMissing(MARGIN6);
          return MARGIN6;
        };
        r17 = dyn paste[, collapse](p1, ",");
        return r17;
      };
      p4 = prom<V +>{
        paste1 = ldf paste;
        p3 = prom<V +>{
          dx2 = ld dx;
          dx3 = force? dx2;
          checkMissing(dx3);
          return dx3;
        };
        r20 = dyn paste1[, collapse](p3, ",");
        return r20;
      };
      r22 = dyn gettextf("MARGIN = %s is invalid for dim = %s", p2, p4);
      return r22;
    };
    r24 = dyn stop[, domain](p5, NA_LGL);
    check L42() else D13();
  L44():
    ndim3 = force? ndim2;
    checkMissing(ndim3);
    r26 = `>`(ndim3, 1);
    c8 = `as.logical`(r26);
    if c8 then L45() else L11(c8);
  D13():
    deopt 43 [r24];
  L11(c10):
    c22 = `as.logical`(c10);
    if c22 then L55() else L14();
  L42():
    goto L10();
  L45():
    sym3 = ldf prod;
    base3 = ldf prod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L12(c13, r28):
    r32 = `>`(r28, 1);
    c19 = `as.logical`(r32);
    c20 = `&&`(c13, c19);
    goto L11(c20);
  L14():
    x5 = ld x;
    check L59() else D20();
  L15(r36):
    st temp = r36;
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L46():
    dx4 = ld dx;
    check L48() else D15();
  L47():
    r27 = dyn base3(<lang `[`(dx, `-`(MARGIN))>);
    goto L12(c8, r27);
  L55():
    asplit = ldf asplit;
    check L56() else D18();
  D15():
    deopt 52 [c8, dx4];
  D18():
    deopt 64 [];
  D20():
    deopt 68 [x5];
  L16(r38):
    st args = r38;
    l = ld args;
    names__ = ldf `names<-`;
    check L62() else D21();
  L48():
    dx5 = force? dx4;
    checkMissing(dx5);
    c14 = `is.object`(dx5);
    if c14 then L49() else L50(c8, dx5);
  L56():
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p7 = prom<V +>{
      MARGIN9 = ld MARGIN;
      MARGIN10 = force? MARGIN9;
      checkMissing(MARGIN10);
      return MARGIN10;
    };
    r35 = dyn asplit(p6, p7);
    check L57() else D19();
  L59():
    x6 = force? x5;
    checkMissing(x6);
    goto L15(x6);
  L60():
    rep = ldf rep in base;
    r39 = dyn rep(<lang alist(a=)>, <sym ndim>);
    goto L16(r39);
  L61():
    r37 = dyn base4(<lang alist(a=)>, <sym ndim>);
    goto L16(r37);
  D19():
    deopt 67 [r35];
  D21():
    deopt 78 [NULL, l, NULL];
  L13(c18, dx9):
    prod = ldf prod in base;
    r31 = dyn prod(dx9);
    check L53() else D17();
  L49():
    dr = tryDispatchBuiltin.1("[", dx5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(c8, dr);
  L50(c16, dx7):
    MARGIN7 = ld MARGIN;
    check L52() else D16();
  L57():
    goto L15(r35);
  L62():
    r40 = dyn names__(l, NULL, NULL);
    check L63() else D22();
  D16():
    deopt 54 [c16, dx7, MARGIN7];
  D17():
    deopt 59 [c18, r31];
  D22():
    deopt 80 [NULL, r40];
  L51():
    dx8 = getTryDispatchBuiltinValue(dr);
    goto L13(c8, dx8);
  L52():
    MARGIN8 = force? MARGIN7;
    checkMissing(MARGIN8);
    r29 = `-`(<missing>, MARGIN8);
    __ = ldf `[` in base;
    r30 = dyn __(dx7, r29);
    goto L13(c16, r30);
  L53():
    goto L12(c18, r31);
  L63():
    st args = r40;
    duplicated_default = ldf `duplicated.default`;
    check L64() else D23();
  D23():
    deopt 83 [];
  L64():
    p8 = prom<V +>{
      temp = ld temp;
      temp1 = force? temp;
      checkMissing(temp1);
      return temp1;
    };
    p9 = prom<V +>{
      fromLast1 = ld fromLast;
      fromLast2 = force? fromLast1;
      checkMissing(fromLast2);
      return fromLast2;
    };
    ddd1 = ld `...`;
    r43 = dyn duplicated_default[, fromLast, `...`](p8, p9, ddd1);
    check L65() else D24();
  D24():
    deopt 88 [r43];
  L65():
    r44 = `!`(r43);
    l1 = ld args;
    c23 = `is.object`(l1);
    if c23 then L66() else L67(r44, l1);
  L17(dx11):
    st args = dx11;
    do_call = ldf `do.call`;
    check L70() else D26();
  L66():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r44);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L68() else L67(r44, dr2);
  L67(r46, l3):
    MARGIN11 = ld MARGIN;
    check L69() else D25();
  D25():
    deopt 91 [r46, l3, r44, MARGIN11];
  D26():
    deopt 96 [];
  L68():
    dx10 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx10);
  L69():
    MARGIN12 = force? MARGIN11;
    ____ = ldf `[[<-` in base;
    r49 = dyn ____(l3, r44, MARGIN12);
    goto L17(r49);
  L70():
    p10 = prom<V +>{
      __1 = ld `[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    p11 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r52):
      return r52;
    L3():
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L4():
      r51 = dyn base5(<lang list(x)>, <sym args>, <lang list(drop=FALSE)>);
      goto L0(r51);
    L1(r54):
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L7() else L8();
    L5():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      list = ldf list in base;
      r55 = dyn list(x8);
      goto L1(r55);
    L6():
      r53 = dyn base6(<sym x>);
      goto L1(r53);
    L2(r57):
      c24 = ldf c in base;
      r59 = dyn c24(r54, args1, r57);
      goto L0(r59);
    L7():
      list1 = ldf list in base;
      r58 = dyn list1(FALSE);
      goto L2(r58);
    L8():
      r56 = dyn base7[drop](FALSE);
      goto L2(r56);
    };
    r61 = dyn do_call(p10, p11);
    check L71() else D27();
  D27():
    deopt 99 [r61];
  L71():
    popenv;
    return r61;
  }
}