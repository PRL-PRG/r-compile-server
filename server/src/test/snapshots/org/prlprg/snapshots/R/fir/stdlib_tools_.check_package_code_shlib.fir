fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_shlib` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg r:cls, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg predicate:*, reg predicate1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x:*, reg x1:V, reg length2:cls, reg r9:V, reg c:L, reg writeLines:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg unlist:cls, reg Map:cls, reg _format_calls_in_file:*, reg _format_calls_in_file1:V, reg p4:p(V +), reg x2:*, reg x3:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg x4:*, reg x5:V, reg names:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg c1:cls, reg r21:V, reg p8:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg x6:*, reg x7:V, reg invisible:cls, reg r27:V |
    mkenv;
    st dir = dir;
    r = clos inner3708401697;
    st predicate = r;
    Filter = ldf Filter;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p3 = prom<V +>{
      _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p2 = prom<V +>{
        predicate = ld predicate;
        predicate1 = force? predicate;
        checkMissing(predicate1);
        return predicate1;
      };
      r4 = dyn _find_calls_in_package_code[, , recursive](p1, p2, TRUE);
      return r4;
    };
    r6 = dyn Filter(p, p3);
    check L5() else D1();
  D1():
    deopt 7 [r6];
  L5():
    st x = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r8):
    c = `as.logical`(r8);
    if c then L10() else L1();
  L6():
    x = ld x;
    check L8() else D2();
  L7():
    r7 = dyn base(<sym x>);
    goto L0(r7);
  D2():
    deopt 11 [x];
  L1():
    goto L2();
  L2():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L8():
    x1 = force? x;
    checkMissing(x1);
    length2 = ldf length in base;
    r9 = dyn length2(x1);
    check L9() else D3();
  L10():
    writeLines = ldf writeLines;
    check L11() else D4();
  D3():
    deopt 14 [r9];
  D4():
    deopt 16 [];
  L3(r26):
    popenv;
    return r26;
  L9():
    goto L0(r9);
  L11():
    p8 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      unlist = ldf unlist;
      p7 = prom<V +>{
        Map = ldf Map;
        p4 = prom<V +>{
          _format_calls_in_file = ld `.format_calls_in_file`;
          _format_calls_in_file1 = force? _format_calls_in_file;
          checkMissing(_format_calls_in_file1);
          return _format_calls_in_file1;
        };
        p5 = prom<V +>{
          x2 = ld x;
          x3 = force? x2;
          checkMissing(x3);
          return x3;
        };
        p6 = prom<V +>{
          sym2 = ldf names;
          base2 = ldf names in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r15):
          return r15;
        L1():
          x4 = ld x;
          x5 = force? x4;
          checkMissing(x5);
          names = ldf names in base;
          r16 = dyn names(x5);
          goto L0(r16);
        L2():
          r14 = dyn base2(<sym x>);
          goto L0(r14);
        };
        r18 = dyn Map(p4, p5, p6);
        return r18;
      };
      r20 = dyn unlist(p7);
      c1 = ldf c in base;
      r21 = dyn c1(r20, "");
      goto L0(r21);
    L2():
      r10 = dyn base1(<lang unlist(Map(.format_calls_in_file, x, names(x)))>, "");
      goto L0(r10);
    };
    r23 = dyn writeLines(p8);
    check L12() else D5();
  L14():
    x6 = ld x;
    check L16() else D6();
  L15():
    r25 = dyn base3(<sym x>);
    goto L3(r25);
  D5():
    deopt 18 [r23];
  D6():
    deopt 23 [x6];
  L12():
    goto L2();
  L16():
    x7 = force? x6;
    checkMissing(x7);
    invisible = ldf invisible in base;
    r27 = dyn invisible(x7);
    check L17() else D7();
  D7():
    deopt 26 [r27];
  L17():
    goto L3(r27);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c8:L, reg r7:V, reg e3:*, reg e4:V, reg c9:L, reg c11:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c13:L, reg dx1:V, reg __:cls, reg r8:V, reg as_character:cls, reg r9:V, reg length1:cls, reg r10:V, reg r11:V, reg c14:L, reg c15:V, reg c17:L, reg c19:V, reg _in_:cls, reg x:*, reg x1:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg c20:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg c21:L, reg c22:V, reg c24:L, reg c26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c29:L, reg r19:V, reg e7:*, reg e8:V, reg c30:L, reg c32:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c34:L, reg dx3:V, reg __1:cls, reg r20:V, reg length2:cls, reg r21:V, reg r22:V, reg c35:L, reg c36:V, reg c38:L, reg c40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg c43:L, reg r24:V, reg y:*, reg y1:V, reg c44:L, reg c45:L, reg c46:V, reg c48:L, reg c50:V, reg grepl:cls, reg y2:*, reg y3:V, reg p2:p(V +), reg r26:V, reg c51:L, reg c52:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L16() else L1(c);
  L12():
    e1 = ld e;
    check L14() else D0();
  L13():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c17 = `as.logical`(c2);
    if c17 then L28() else L5(c17);
  L14():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L15() else D1();
  L16():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r11 = `==`(r5, 1);
    c14 = `as.logical`(r11);
    c15 = `&&`(c5, c14);
    goto L1(c15);
  L5(c19):
    c24 = `as.logical`(c19);
    if c24 then L32() else L6(c24);
  L15():
    goto L0(r2);
  L17():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L18():
    r4 = dyn base1(<lang `<-`(x, as.character(`[[`(e, 1)))>);
    goto L2(c, r4);
  L28():
    _in_ = ldf `%in%`;
    check L29() else D5();
  D5():
    deopt 26 [c17];
  L3(c8, r7):
    st x = r7;
    length1 = ldf length in base;
    r10 = dyn length1(r7);
    check L26() else D4();
  L6(c26):
    c38 = `as.logical`(c26);
    if c38 then L41() else L9(c38);
  L19():
    e3 = ld e;
    check L21() else D2();
  L20():
    r6 = dyn base2(<lang `[[`(e, 1)>);
    goto L3(c, r6);
  L29():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c20 = ldf c in base;
      r15 = dyn c20("library.dynam", "library.dynam.unload");
      goto L0(r15);
    L2():
      r13 = dyn base3("library.dynam", "library.dynam.unload");
      goto L0(r13);
    };
    r17 = dyn _in_(p, p1);
    check L30() else D6();
  L32():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  D2():
    deopt 12 [c, e3];
  D4():
    deopt 21 [c8, r10];
  D6():
    deopt 29 [c17, r17];
  L7(c29, r19):
    r22 = `==`(r19, 1);
    c35 = `as.logical`(r22);
    c36 = `&&`(c29, c35);
    goto L6(c36);
  L9(c40):
    c48 = `as.logical`(c40);
    if c48 then L46() else L11(c48);
  L21():
    e4 = force? e3;
    checkMissing(e4);
    c9 = `is.object`(e4);
    if c9 then L22() else L23(c, e4);
  L26():
    goto L2(c8, r10);
  L30():
    c21 = `as.logical`(r17);
    c22 = `&&`(c17, c21);
    goto L5(c22);
  L33():
    e7 = ld e;
    check L35() else D7();
  L34():
    r18 = dyn base4(<lang `<-`(y, `[[`(e, 2))>);
    goto L7(c24, r18);
  L41():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  D7():
    deopt 33 [c24, e7];
  L4(c13, dx1):
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(dx1);
    check L25() else D3();
  L10(c43, r24):
    c45 = `as.logical`(r24);
    c46 = `&&`(c43, c45);
    goto L9(c46);
  L11(c50):
    visible.0();
    popenv;
    return c50;
  L22():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(c, dr);
  L23(c11, e6):
    __ = ldf `[[` in base;
    r8 = dyn __(e6, 1);
    goto L4(c11, r8);
  L35():
    e8 = force? e7;
    checkMissing(e8);
    c30 = `is.object`(e8);
    if c30 then L36() else L37(c24, e8);
  L42():
    y = ld y;
    check L44() else D9();
  L43():
    r23 = dyn base5(<sym y>);
    goto L10(c38, r23);
  L46():
    grepl = ldf grepl;
    check L47() else D10();
  D3():
    deopt 18 [c13, r9];
  D9():
    deopt 45 [c38, y];
  D10():
    deopt 50 [c48];
  L8(c34, dx3):
    st y = dx3;
    length2 = ldf length in base;
    r21 = dyn length2(dx3);
    check L39() else D8();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c, dx);
  L25():
    goto L3(c13, r9);
  L36():
    dr2 = tryDispatchBuiltin.1("[[", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(c24, dr2);
  L37(c32, e10):
    __1 = ldf `[[` in base;
    r20 = dyn __1(e10, 2);
    goto L8(c32, r20);
  L44():
    y1 = force? y;
    checkMissing(y1);
    c44 = `is.character`(y1);
    goto L10(c38, c44);
  L47():
    p2 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r26 = dyn grepl("\\.(so|sl|dll)$", p2);
    check L48() else D11();
  D8():
    deopt 40 [c34, r21];
  D11():
    deopt 53 [c48, r26];
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(c24, dx2);
  L39():
    goto L7(c34, r21);
  L48():
    c51 = `as.logical`(r26);
    c52 = `&&`(c48, c51);
    goto L11(c52);
  }
}