fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2869694445;
    st `.validS3Extends` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2869694445(classDef1, classDef2) {
  (reg classDef1:*, reg classDef2:*) -+> V { var classDef1:*, var classDef2:*, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg slots2:*, reg slots3:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg slots4:*, reg slots5:V, reg names:cls, reg r7:V, reg __1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg slots6:*, reg slots7:V, reg names1:cls, reg r11:V, reg character:cls, reg r12:V, reg n2:*, reg n3:V, reg c1:L, reg n5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg n6:*, reg n7:V, reg p:p(V +), reg n8:*, reg n9:V, reg p1:p(V +), reg r15:V, reg __2:cls, reg r16:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg extends:cls, reg slots8:*, reg slots9:V, reg c3:L, reg slots11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg what:*, reg what1:V, reg __3:cls, reg r17:V, reg p2:p(V +), reg slots12:*, reg slots13:V, reg c4:L, reg slots15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg what2:*, reg what3:V, reg __4:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg r22:V, reg c5:L, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg what4:*, reg what5:V, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg dQuote:cls, reg slots16:*, reg slots17:V, reg c6:L, reg slots19:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg what6:*, reg what7:V, reg __5:cls, reg r26:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg dQuote1:cls, reg slots20:*, reg slots21:V, reg c7:L, reg slots23:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg what8:*, reg what9:V, reg __6:cls, reg r30:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg i9:I, reg r38:V, reg bad:*, reg bad1:V, reg what10:*, reg what11:V, reg c8:cls, reg r39:V, reg i10:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg bad2:*, reg bad3:V, reg length1:cls, reg r43:V, reg r44:V, reg c9:L, reg stop:cls, reg gettextf1:cls, reg paste0:cls, reg bad4:*, reg bad5:V, reg p11:p(V +), reg r46:V, reg p12:p(V +), reg r48:V, reg p13:p(V +), reg r50:V, reg r51:V |
    mkenv;
    st classDef1 = classDef1;
    st classDef2 = classDef2;
    __ = ldf `@` in base;
    r = dyn __(<sym classDef2>, <sym slots>);
    st slots2 = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r2):
    r4 = `>`(r2, 0.0);
    c = `as.logical`(r4);
    if c then L18() else L1();
  L14():
    slots2 = ld slots2;
    check L16() else D0();
  L15():
    r1 = dyn base(<sym slots2>);
    goto L0(r1);
  D0():
    deopt 5 [slots2];
  L1():
    goto L13();
  L13():
    popenv;
    return TRUE;
  L16():
    slots3 = force? slots2;
    checkMissing(slots3);
    length = ldf length in base;
    r3 = dyn length(slots3);
    check L17() else D1();
  L18():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D1():
    deopt 8 [r3];
  L2(r6):
    st n2 = r6;
    __1 = ldf `@` in base;
    r8 = dyn __1(<sym classDef1>, <sym slots>);
    st slots1 = r8;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L17():
    goto L0(r3);
  L19():
    slots4 = ld slots2;
    check L21() else D2();
  L20():
    r5 = dyn base1(<sym slots2>);
    goto L2(r5);
  D2():
    deopt 13 [slots4];
  L3(r10):
    st n1 = r10;
    character = ldf character;
    check L27() else D6();
  L21():
    slots5 = force? slots4;
    checkMissing(slots5);
    names = ldf names in base;
    r7 = dyn names(slots5);
    check L22() else D3();
  L23():
    slots6 = ld slots1;
    check L25() else D4();
  L24():
    r9 = dyn base2(<sym slots1>);
    goto L3(r9);
  D3():
    deopt 16 [r7];
  D4():
    deopt 23 [slots6];
  D6():
    deopt 29 [];
  L22():
    goto L2(r7);
  L25():
    slots7 = force? slots6;
    checkMissing(slots7);
    names1 = ldf names in base;
    r11 = dyn names1(slots7);
    check L26() else D5();
  L27():
    r12 = dyn character();
    check L28() else D7();
  D5():
    deopt 26 [r11];
  D7():
    deopt 30 [r12];
  L26():
    goto L3(r11);
  L28():
    st bad = r12;
    n2 = ld n2;
    check L29() else D8();
  D8():
    deopt 32 [n2];
  L29():
    n3 = force? n2;
    checkMissing(n3);
    c1 = `is.object`(n3);
    if c1 then L30() else L31(n3);
  L4(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L5(i);
  L30():
    dr = tryDispatchBuiltin.1("[", n3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(n5):
    _in_ = ldf `%in%`;
    check L33() else D9();
  D9():
    deopt 35 [n5];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L35() else L9();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L33():
    p = prom<V +>{
      n6 = ld n2;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    p1 = prom<V +>{
      n8 = ld n1;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    r15 = dyn _in_(p, p1);
    check L34() else D10();
  D10():
    deopt 38 [n5, r15];
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    extends = ldf extends;
    check L36() else D11();
  L34():
    __2 = ldf `[` in base;
    r16 = dyn __2(n5, r15);
    goto L4(r16);
  L35():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  D11():
    deopt 41 [i2];
  L10(r42):
    r44 = `>`(r42, 0.0);
    c9 = `as.logical`(r44);
    if c9 then L51() else L11();
  L36():
    p2 = prom<V +>{
      slots8 = ld slots1;
      slots9 = force? slots8;
      checkMissing(slots9);
      c3 = `is.object`(slots9);
      if c3 then L1() else L2(slots9);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", slots9);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(slots11):
      what = ld what;
      what1 = force? what;
      __3 = ldf `[[` in base;
      r17 = dyn __3(slots11, what1);
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      slots12 = ld slots2;
      slots13 = force? slots12;
      checkMissing(slots13);
      c4 = `is.object`(slots13);
      if c4 then L1() else L2(slots13);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", slots13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(slots15):
      what2 = ld what;
      what3 = force? what2;
      __4 = ldf `[[` in base;
      r19 = dyn __4(slots15, what3);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r21 = dyn extends(p2, p3);
    check L37() else D12();
  L47():
    bad2 = ld bad;
    check L49() else D18();
  L48():
    r41 = dyn base4(<sym bad>);
    goto L10(r41);
  D12():
    deopt 44 [i2, r21];
  D18():
    deopt 68 [bad2];
  L11():
    goto L12(NULL);
  L12(r51):
    goto L13();
  L37():
    r22 = `!`(r21);
    c5 = `as.logical`(r22);
    if c5 then L38() else L6();
  L49():
    bad3 = force? bad2;
    checkMissing(bad3);
    length1 = ldf length in base;
    r43 = dyn length1(bad3);
    check L50() else D19();
  L51():
    stop = ldf stop;
    check L52() else D20();
  D19():
    deopt 71 [r43];
  D20():
    deopt 75 [];
  L6():
    goto L8(i2);
  L8(i10):
    goto L5(i10);
  L38():
    message = ldf message;
    check L39() else D13();
  L50():
    goto L10(r43);
  L52():
    p13 = prom<V +>{
      gettextf1 = ldf gettextf;
      p12 = prom<V +>{
        paste0 = ldf paste0;
        p11 = prom<V +>{
          bad4 = ld bad;
          bad5 = force? bad4;
          checkMissing(bad5);
          return bad5;
        };
        r46 = dyn paste0[, , , collapse]("\"", p11, "\"", ", ");
        return r46;
      };
      r48 = dyn gettextf1("invalid S4 class corresponding to S3 class: slots in  S4 version must extend corresponding slots in S3 version: fails for %s", p12);
      return r48;
    };
    r50 = dyn stop[, domain](p13, NA_LGL);
    check L53() else D21();
  D13():
    deopt 47 [i2];
  D21():
    deopt 79 [r50];
  L39():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          what4 = ld what;
          what5 = force? what4;
          checkMissing(what5);
          return what5;
        };
        r24 = dyn sQuote(p4);
        return r24;
      };
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          slots16 = ld slots1;
          slots17 = force? slots16;
          checkMissing(slots17);
          c6 = `is.object`(slots17);
          if c6 then L1() else L2(slots17);
        L0(dx7):
          return dx7;
        L1():
          dr6 = tryDispatchBuiltin.1("[[", slots17);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2(dr6);
        L2(slots19):
          what6 = ld what;
          what7 = force? what6;
          __5 = ldf `[[` in base;
          r26 = dyn __5(slots19, what7);
          goto L0(r26);
        L3():
          dx6 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx6);
        };
        r28 = dyn dQuote(p6);
        return r28;
      };
      p9 = prom<V +>{
        dQuote1 = ldf dQuote;
        p8 = prom<V +>{
          slots20 = ld slots2;
          slots21 = force? slots20;
          checkMissing(slots21);
          c7 = `is.object`(slots21);
          if c7 then L1() else L2(slots21);
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("[[", slots21);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2(dr8);
        L2(slots23):
          what8 = ld what;
          what9 = force? what8;
          __6 = ldf `[[` in base;
          r30 = dyn __6(slots23, what9);
          goto L0(r30);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r32 = dyn dQuote1(p8);
        return r32;
      };
      r34 = dyn gettextf("slot %s: class %s should extend class %s", p5, p7, p9);
      return r34;
    };
    r36 = dyn message[, domain](p10, NA_LGL);
    check L40() else D14();
  L53():
    goto L12(r50);
  D14():
    deopt 51 [i2, r36];
  L40():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L7(i9, r38):
    st bad = r38;
    goto L8(i9);
  L41():
    bad = ld bad;
    check L43() else D15();
  L42():
    r37 = dyn base3(<sym bad>, <sym what>);
    goto L7(i2, r37);
  D15():
    deopt 54 [i2, bad];
  L43():
    bad1 = force? bad;
    checkMissing(bad1);
    what10 = ld what;
    check L44() else D16();
  D16():
    deopt 56 [i2, what10];
  L44():
    what11 = force? what10;
    checkMissing(what11);
    c8 = ldf c in base;
    r39 = dyn c8(bad1, what11);
    check L45() else D17();
  D17():
    deopt 59 [i2, r39];
  L45():
    goto L7(i2, r39);
  }
}