fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner849573221;
    st showExtraSlots = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner849573221(object, ignore) {
  (reg object:*, reg ignore:*) -+> V { var object:*, var ignore:*, reg is:cls, reg ignore1:*, reg ignore2:V, reg p:p(V +), reg r1:V, reg c:L, reg slotNames:cls, reg ignore3:*, reg ignore4:V, reg p1:p(V +), reg r3:V, reg is1:cls, reg ignore5:*, reg ignore6:V, reg p2:p(V +), reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg ignore7:*, reg ignore8:V, reg class:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg slotNames1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg object1:*, reg object2:V, reg class1:cls, reg r19:V, reg p6:p(V +), reg r21:V, reg slots:*, reg slots1:V, reg c2:L, reg slots3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg slots6:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg slots9:V, reg r25:V, reg slots10:*, reg slots11:V, reg ignore9:*, reg ignore10:V, reg match:cls, reg r26:V, reg is_na:cls, reg r27:V, reg __:cls, reg r28:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg cat:cls, reg s1:*, reg s2:V, reg p7:p(V +), reg r30:V, reg show:cls, reg slot:cls, reg object3:*, reg object4:V, reg p8:p(V +), reg s3:*, reg s4:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg _extraSlotsDone:*, reg _extraSlotsDone1:V |
    mkenv;
    st object = object;
    st ignore = ignore;
    is = ldf is;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      return ignore2;
    };
    r1 = dyn is(p, "classRepresentation");
    check L9() else D1();
  D1():
    deopt 4 [r1];
  L9():
    c = `as.logical`(r1);
    if c then L10() else L0();
  L0():
    is1 = ldf is;
    check L14() else D4();
  L1():
    slotNames1 = ldf slotNames;
    check L20() else D8();
  L10():
    slotNames = ldf slotNames;
    check L11() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [];
  D8():
    deopt 25 [];
  L11():
    p1 = prom<V +>{
      ignore3 = ld ignore;
      ignore4 = force? ignore3;
      checkMissing(ignore4);
      return ignore4;
    };
    r3 = dyn slotNames(p1);
    check L12() else D3();
  L14():
    p2 = prom<V +>{
      ignore5 = ld ignore;
      ignore6 = force? ignore5;
      checkMissing(ignore6);
      return ignore6;
    };
    r6 = dyn is1(p2, "character");
    check L15() else D5();
  L20():
    p6 = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      class1 = ldf class in base;
      r19 = dyn class1(object2);
      goto L0(r19);
    L2():
      r17 = dyn base1(<sym object>);
      goto L0(r17);
    };
    r21 = dyn slotNames1(p6);
    check L21() else D9();
  D3():
    deopt 8 [r3];
  D5():
    deopt 14 [r6];
  D9():
    deopt 27 [r21];
  L12():
    st ignore = r3;
    goto L1();
  L15():
    r7 = `!`(r6);
    c1 = `as.logical`(r7);
    if c1 then L16() else L2();
  L21():
    st slots = r21;
    slots = ld slots;
    check L22() else D10();
  D10():
    deopt 29 [slots];
  L2():
    goto L1();
  L16():
    stop = ldf stop;
    check L17() else D6();
  L22():
    slots1 = force? slots;
    checkMissing(slots1);
    c2 = `is.object`(slots1);
    if c2 then L23() else L24(slots1);
  D6():
    deopt 17 [];
  L3(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L6(i);
  L17():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        dQuote = ldf dQuote;
        p3 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r9):
          return r9;
        L1():
          ignore7 = ld ignore;
          ignore8 = force? ignore7;
          checkMissing(ignore8);
          class = ldf class in base;
          r10 = dyn class(ignore8);
          goto L0(r10);
        L2():
          r8 = dyn base(<sym ignore>);
          goto L0(r8);
        };
        r12 = dyn dQuote(p3);
        return r12;
      };
      r14 = dyn gettextf("invalid 'ignore' argument; should be a class definition or a character vector, got an object of class %s", p4);
      return r14;
    };
    r16 = dyn stop[, domain](p5, NA_LGL);
    check L18() else D7();
  L23():
    dr = tryDispatchBuiltin.1("[", slots1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(slots3):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D7():
    deopt 21 [r16];
  L4(slots6, r23):
    __ = ldf `[` in base;
    r28 = dyn __(slots6, r23);
    goto L3(r28);
  L6(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L34() else L7();
  L18():
    goto L1();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L26():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    r22 = dyn base2(<lang match(slots, ignore)>);
    goto L4(slots3, r22);
  L5(slots9, r25):
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(r25);
    check L33() else D14();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st s = x;
    cat = ldf cat;
    check L35() else D15();
  L28():
    slots10 = ld slots;
    check L30() else D11();
  L29():
    r24 = dyn base3(<sym slots>, <sym ignore>);
    goto L5(slots3, r24);
  L34():
    _extraSlotsDone = ld `.extraSlotsDone`;
    check L39() else D19();
  D11():
    deopt 35 [slots3, slots10];
  D14():
    deopt 44 [slots9, r27];
  D15():
    deopt 47 [i2];
  D19():
    deopt 61 [_extraSlotsDone];
  L30():
    slots11 = force? slots10;
    checkMissing(slots11);
    ignore9 = ld ignore;
    check L31() else D12();
  L33():
    goto L4(slots9, r27);
  L35():
    p7 = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r30 = dyn cat[, , , sep]("Slot ", p7, ":\n", "");
    check L36() else D16();
  L39():
    _extraSlotsDone1 = force? _extraSlotsDone;
    checkMissing(_extraSlotsDone1);
    popenv;
    return _extraSlotsDone1;
  D12():
    deopt 37 [slots3, ignore9];
  D16():
    deopt 53 [i2, r30];
  L31():
    ignore10 = force? ignore9;
    checkMissing(ignore10);
    match = ldf match in base;
    r26 = dyn match(slots11, ignore10, NA_INT, NULL);
    check L32() else D13();
  L36():
    show = ldf show;
    check L37() else D17();
  D13():
    deopt 42 [slots3, r26];
  D17():
    deopt 55 [i2];
  L32():
    goto L5(slots3, r26);
  L37():
    p10 = prom<V +>{
      slot = ldf slot;
      p8 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      p9 = prom<V +>{
        s3 = ld s;
        s4 = force? s3;
        checkMissing(s4);
        return s4;
      };
      r33 = dyn slot(p8, p9);
      return r33;
    };
    r35 = dyn show(p10);
    check L38() else D18();
  D18():
    deopt 57 [i2, r35];
  L38():
    goto L6(i2);
  }
}