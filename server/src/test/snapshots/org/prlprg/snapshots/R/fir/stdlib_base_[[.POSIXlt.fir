fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-839419544`;
    st `[[.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-839419544`(x, i, drop) {
  (reg x:*, reg i:*, reg drop:*) -+> V { var x:*, var i:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg i1:*, reg i2:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg i3:*, reg i4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg names:cls, reg r10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg c11:cls, reg r13:V, reg match:cls, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg i5:*, reg i6:V, reg length:cls, reg r17:V, reg r18:V, reg c12:L, reg c14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg c17:L, reg r20:V, reg idx:*, reg idx1:V, reg is_na:cls, reg r21:V, reg c18:L, reg c19:V, reg c21:L, reg c23:V, reg _in_:cls, reg i7:*, reg i8:V, reg p:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r23:V, reg r24:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r25:V, reg r26:V, reg x3:*, reg x4:V, reg c24:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r27:V, reg unclass:cls, reg r28:V, reg names1:cls, reg r29:V, reg p1:p(V +), reg r31:V, reg c25:L, reg c26:V, reg c28:L, reg stop:cls, reg gettextf:cls, reg i9:*, reg i10:V, reg p2:p(V +), reg r33:V, reg p3:p(V +), reg r35:V, reg idx2:*, reg idx3:V, reg _POSIXlt:cls, reg lapply:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg x7:*, reg x8:V, reg unCfillPOSIXlt:cls, reg r39:V, reg p4:p(V +), reg __1:*, reg __2:V, reg p5:p(V +), reg i11:*, reg i12:V, reg p6:p(V +), reg drop1:*, reg drop2:V, reg p7:p(V +), reg r44:V, reg p8:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg r47:V, reg x9:*, reg x10:V, reg attr:cls, reg r48:V, reg p9:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r50:V, reg r51:V, reg x11:*, reg x12:V, reg oldClass:cls, reg r52:V, reg p10:p(V +), reg r54:V |
    mkenv;
    st x = x;
    st i = i;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L17() else L2(c);
  L15():
    missing = ldf missing in base;
    r2 = dyn missing(<sym i>);
    goto L1(r2);
  L16():
    r = dyn base(<sym i>);
    goto L1(r);
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L22() else L4();
  L17():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L3(c5, r5):
    c7 = `as.logical`(r5);
    c8 = `&&`(c5, c7);
    goto L2(c8);
  L4():
    goto L14();
  L14():
    _POSIXlt = ldf `.POSIXlt`;
    check L54() else D15();
  L18():
    i1 = ld i;
    check L20() else D0();
  L19():
    r4 = dyn base1(<sym i>);
    goto L3(c, r4);
  L22():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D0():
    deopt 5 [c, i1];
  D15():
    deopt 64 [];
  L5(r7):
    st idx = r7;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L20():
    i2 = force? i1;
    checkMissing(i2);
    c6 = `is.character`(i2);
    goto L3(c, c6);
  L23():
    i3 = ld i;
    check L25() else D1();
  L24():
    r6 = dyn base2[, , incomparables](<sym i>, <lang names(x)>, <lang c("", NA_STR)>);
    goto L5(r6);
  L54():
    p8 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        sym9 = ldf unCfillPOSIXlt;
        base9 = ldf unCfillPOSIXlt in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r38):
        return r38;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
        r39 = dyn unCfillPOSIXlt(x8);
        goto L0(r39);
      L2():
        r37 = dyn base9(<sym x>);
        goto L0(r37);
      };
      p5 = prom<V +>{
        __1 = ld `[[`;
        __2 = force? __1;
        checkMissing(__2);
        return __2;
      };
      p6 = prom<V +>{
        i11 = ld i;
        i12 = force? i11;
        checkMissing(i12);
        return i12;
      };
      p7 = prom<V +>{
        drop1 = ld drop;
        drop2 = force? drop1;
        checkMissing(drop2);
        return drop2;
      };
      r44 = dyn lapply[, , , drop](p4, p5, p6, p7);
      return r44;
    };
    p9 = prom<V +>{
      sym10 = ldf attr;
      base10 = ldf attr in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr = ldf attr in base;
      r48 = dyn attr(x10, "tzone");
      goto L0(r48);
    L2():
      r46 = dyn base10(<sym x>, "tzone");
      goto L0(r46);
    };
    p10 = prom<V +>{
      sym11 = ldf oldClass;
      base11 = ldf oldClass in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      oldClass = ldf oldClass in base;
      r52 = dyn oldClass(x12);
      goto L0(r52);
    L2():
      r50 = dyn base11(<sym x>);
      goto L0(r50);
    };
    r54 = dyn _POSIXlt(p8, p9, p10);
    check L55() else D16();
  D1():
    deopt 11 [i3];
  D16():
    deopt 68 [r54];
  L8(r16):
    r18 = `==`(r16, 1);
    c12 = `as.logical`(r18);
    if c12 then L38() else L9(c12);
  L25():
    i4 = force? i3;
    checkMissing(i4);
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L34():
    i5 = ld i;
    check L36() else D6();
  L35():
    r15 = dyn base5(<sym i>);
    goto L8(r15);
  L55():
    popenv;
    return r54;
  D6():
    deopt 31 [i5];
  L6(r9):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L9(c14):
    c21 = `as.logical`(c14);
    if c21 then L44() else L11(c21);
  L26():
    x1 = ld x;
    check L28() else D2();
  L27():
    r8 = dyn base3(<sym x>);
    goto L6(r8);
  L36():
    i6 = force? i5;
    checkMissing(i6);
    length = ldf length in base;
    r17 = dyn length(i6);
    check L37() else D7();
  L38():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L39() else L40();
  D2():
    deopt 15 [x1];
  D7():
    deopt 34 [r17];
  L7(r12):
    match = ldf match in base;
    r14 = dyn match(i4, r9, NA_INT, r12);
    check L33() else D5();
  L10(c17, r20):
    c18 = `as.logical`(r20);
    c19 = `&&`(c17, c18);
    goto L9(c19);
  L11(c23):
    c28 = `as.logical`(c23);
    if c28 then L48() else L12();
  L28():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r10 = dyn names(x2);
    check L29() else D3();
  L30():
    c11 = ldf c in base;
    r13 = dyn c11("", NA_STR);
    check L32() else D4();
  L31():
    r11 = dyn base4("", NA_STR);
    goto L7(r11);
  L37():
    goto L8(r17);
  L39():
    idx = ld idx;
    check L41() else D8();
  L40():
    r19 = dyn base6(<sym idx>);
    goto L10(c12, r19);
  L44():
    _in_ = ldf `%in%`;
    check L45() else D10();
  D3():
    deopt 18 [r10];
  D4():
    deopt 25 [r13];
  D5():
    deopt 27 [r14];
  D8():
    deopt 39 [c12, idx];
  D10():
    deopt 45 [c21];
  L12():
    goto L13();
  L13():
    idx2 = ld idx;
    check L52() else D14();
  L29():
    goto L6(r10);
  L32():
    goto L7(r13);
  L33():
    goto L5(r14);
  L41():
    idx1 = force? idx;
    checkMissing(idx1);
    is_na = ldf `is.na` in base;
    r21 = dyn is_na(idx1);
    check L42() else D9();
  L45():
    p = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      return i8;
    };
    p1 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L3() else L4();
    L0(r24):
      return r24;
    L3():
      sym8 = ldf unclass;
      base8 = ldf unclass in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L5() else L6();
    L4():
      r23 = dyn base7(<lang unclass(`[[`(x, 1))>);
      goto L0(r23);
    L1(r26):
      names1 = ldf names in base;
      r29 = dyn names1(r26);
      goto L0(r29);
    L5():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c24 = `is.object`(x4);
      if c24 then L7() else L8(x4);
    L6():
      r25 = dyn base8(<lang `[[`(x, 1)>);
      goto L1(r25);
    L2(dx1):
      unclass = ldf unclass in base;
      r28 = dyn unclass(dx1);
      goto L1(r28);
    L7():
      dr = tryDispatchBuiltin.1("[[", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(x6):
      __ = ldf `[[` in base;
      r27 = dyn __(x6, 1);
      goto L2(r27);
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    };
    r31 = dyn _in_(p, p1);
    check L46() else D11();
  L48():
    stop = ldf stop;
    check L49() else D12();
  D9():
    deopt 42 [c12, r21];
  D11():
    deopt 48 [c21, r31];
  D12():
    deopt 51 [];
  D14():
    deopt 58 [idx2];
  L42():
    goto L10(c12, r21);
  L46():
    c25 = `as.logical`(r31);
    c26 = `&&`(c21, c25);
    goto L11(c26);
  L49():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        i9 = ld i;
        i10 = force? i9;
        checkMissing(i10);
        return i10;
      };
      r33 = dyn gettextf("No element named \"%s\" found in x, did you mean x[, \"%1$s\"] instead?", p2);
      return r33;
    };
    r35 = dyn stop[, domain](p3, NA_LGL);
    check L50() else D13();
  L52():
    idx3 = force? idx2;
    checkMissing(idx3);
    st i = idx3;
    goto L14();
  D13():
    deopt 55 [r35];
  L50():
    goto L13();
  }
}