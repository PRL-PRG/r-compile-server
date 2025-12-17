fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3054830996;
    st `format.AsIs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3054830996(x, width, `...`) {
  (reg x:*, reg width:*, reg ddd:dots) -+> V { var x:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg x3:*, reg x4:V, reg is_atomic:cls, reg r4:V, reg c7:L, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c16:L, reg c17:L, reg r6:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r7:V, reg c18:L, reg c19:V, reg c22:L, reg c23:V, reg c25:L, reg format_default:cls, reg x7:*, reg x8:V, reg p:p(V +), reg ddd1:dots?, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg width1:*, reg width2:V, reg c26:V, reg c27:L, reg vapply:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg r16:cls, reg p2:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x11:*, reg x12:V, reg dim:cls, reg r21:V, reg l:*, reg dim__:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg x13:*, reg x14:V, reg dimnames:cls, reg r25:V, reg l1:*, reg dimnames__:cls, reg r26:V, reg format_default1:cls, reg rvec:*, reg rvec1:V, reg p3:p(V +), reg r28:V |
    mkenv;
    st x = x;
    width_isMissing = missing.0(width);
    if width_isMissing then L0(12.0) else L0(width);
  L0(width_orDefault):
    st width = width_orDefault;
    st `...` = ddd;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L2(c1) else L16();
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 1 [x1];
  L2(c2):
    c25 = `as.logical`(c2);
    if c25 then L28() else L6();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L1(c);
  L16():
    sym1 = ldf `is.atomic`;
    base1 = ldf `is.atomic` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L3(c6, r3):
    c7 = `as.logical`(r3);
    if c7 then L21() else L4(c6, c7);
  L6():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L17():
    x3 = ld x;
    check L19() else D1();
  L18():
    r2 = dyn base1(<sym x>);
    goto L3(c1, r2);
  L28():
    format_default = ldf `format.default`;
    check L29() else D5();
  D1():
    deopt 6 [c1, x3];
  D5():
    deopt 19 [];
  L4(c10, c11):
    c22 = `as.logical`(c11);
    c23 = `||`(c10, c22);
    goto L2(c23);
  L8(r13):
    c27 = `as.logical`(r13);
    if c27 then L36() else L9();
  L19():
    x4 = force? x3;
    checkMissing(x4);
    is_atomic = ldf `is.atomic` in base;
    r4 = dyn is_atomic(x4);
    check L20() else D2();
  L21():
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L29():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    ddd1 = ld `...`;
    r9 = dyn format_default[, `...`](p, ddd1);
    check L30() else D6();
  L33():
    width1 = ld width;
    check L35() else D7();
  L34():
    r12 = dyn base3(<sym width>);
    goto L8(r12);
  D2():
    deopt 9 [c1, r4];
  D6():
    deopt 22 [r9];
  D7():
    deopt 27 [width1];
  L5(c16, c17, r6):
    c18 = `as.logical`(r6);
    c19 = `&&`(c17, c18);
    goto L4(c16, c19);
  L9():
    goto L10();
  L10():
    vapply = ldf vapply;
    check L38() else D8();
  L20():
    goto L3(c1, r4);
  L22():
    x5 = ld x;
    check L24() else D3();
  L23():
    r5 = dyn base2(<sym x>);
    goto L5(c6, c7, r5);
  L30():
    popenv;
    return r9;
  L35():
    width2 = force? width1;
    checkMissing(width2);
    c26 = `==`(width2, NULL);
    goto L8(c26);
  L36():
    st width = 12;
    goto L10();
  D3():
    deopt 12 [c6, c7, x5];
  D8():
    deopt 36 [];
  L24():
    x6 = force? x5;
    checkMissing(x6);
    is_matrix = ldf `is.matrix` in base;
    r7 = dyn is_matrix(x6);
    check L25() else D4();
  L38():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p2 = prom<V +>{
      r16 = clos inner177517877;
      return r16;
    };
    r18 = dyn vapply(p1, p2, "");
    check L39() else D9();
  D4():
    deopt 15 [c6, c7, r7];
  D9():
    deopt 40 [r18];
  L25():
    goto L5(c6, c7, r7);
  L39():
    st rvec = r18;
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L11(r20):
    l = ld rvec;
    dim__ = ldf `dim<-`;
    check L44() else D12();
  L40():
    x11 = ld x;
    check L42() else D10();
  L41():
    r19 = dyn base4(<sym x>);
    goto L11(r19);
  D10():
    deopt 44 [x11];
  D12():
    deopt 49 [r20, l, r20];
  L42():
    x12 = force? x11;
    checkMissing(x12);
    dim = ldf dim in base;
    r21 = dyn dim(x12);
    check L43() else D11();
  L44():
    r22 = dyn dim__(l, NULL, r20);
    check L45() else D13();
  D11():
    deopt 47 [r21];
  D13():
    deopt 51 [r20, r22];
  L43():
    goto L11(r21);
  L45():
    st rvec = r22;
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L12(r24):
    l1 = ld rvec;
    dimnames__ = ldf `dimnames<-`;
    check L50() else D16();
  L46():
    x13 = ld x;
    check L48() else D14();
  L47():
    r23 = dyn base5(<sym x>);
    goto L12(r23);
  D14():
    deopt 55 [x13];
  D16():
    deopt 60 [r24, l1, r24];
  L48():
    x14 = force? x13;
    checkMissing(x14);
    dimnames = ldf dimnames in base;
    r25 = dyn dimnames(x14);
    check L49() else D15();
  L50():
    r26 = dyn dimnames__(l1, NULL, r24);
    check L51() else D17();
  D15():
    deopt 58 [r25];
  D17():
    deopt 62 [r24, r26];
  L49():
    goto L12(r25);
  L51():
    st rvec = r26;
    format_default1 = ldf `format.default`;
    check L52() else D18();
  D18():
    deopt 65 [];
  L52():
    p3 = prom<V +>{
      rvec = ld rvec;
      rvec1 = force? rvec;
      checkMissing(rvec1);
      return rvec1;
    };
    r28 = dyn format_default1[, justify](p3, "right");
    check L53() else D19();
  D19():
    deopt 69 [r28];
  L53():
    popenv;
    return r28;
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg oldClass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg cl:*, reg cl1:V, reg match:cls, reg r5:V, reg c:L, reg cl2:*, reg cl3:V, reg c1:L, reg cl5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m:*, reg m1:V, reg r6:V, reg __:cls, reg r7:V, reg l:*, reg oldClass__:cls, reg r8:V, reg toString:cls, reg y3:*, reg y4:V, reg p:p(V +), reg width:*, reg width1:V, reg p1:p(V +), reg ddd:*, reg r11:V |
    mkenv;
    st y = y;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st cl = r1;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    y1 = ld y;
    check L7() else D0();
  L6():
    r = dyn base(<sym y>);
    goto L0(r);
  D0():
    deopt 2 [y1];
  L1(r4):
    st m = r4;
    c = `as.logical`(r4);
    if c then L13() else L2();
  L7():
    y2 = force? y1;
    checkMissing(y2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(y2);
    check L8() else D1();
  L9():
    cl = ld cl;
    check L11() else D2();
  L10():
    r3 = dyn base1("AsIs", <sym cl>, 0);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [cl];
  L2():
    goto L4();
  L4():
    toString = ldf toString;
    check L22() else D8();
  L8():
    goto L0(r2);
  L11():
    cl1 = force? cl;
    checkMissing(cl1);
    match = ldf match in base;
    r5 = dyn match("AsIs", cl1, 0, NULL);
    check L12() else D3();
  L13():
    cl2 = ld cl;
    check L14() else D4();
  D3():
    deopt 15 [r5];
  D4():
    deopt 17 [cl2];
  D8():
    deopt 31 [];
  L12():
    goto L1(r5);
  L14():
    cl3 = force? cl2;
    checkMissing(cl3);
    c1 = `is.object`(cl3);
    if c1 then L15() else L16(cl3);
  L22():
    p = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p1 = prom<V +>{
      width = ld width;
      width1 = force? width;
      checkMissing(width1);
      return width1;
    };
    ddd = ld `...`;
    r11 = dyn toString[, width, `...`](p, p1, ddd);
    check L23() else D9();
  D9():
    deopt 36 [r11];
  L3(dx1):
    l = ld y;
    oldClass__ = ldf `oldClass<-`;
    check L19() else D6();
  L15():
    dr = tryDispatchBuiltin.1("[", cl3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(cl5):
    m = ld m;
    check L18() else D5();
  L23():
    popenv;
    return r11;
  D5():
    deopt 19 [cl5, m];
  D6():
    deopt 24 [dx1, l, dx1];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    m1 = force? m;
    checkMissing(m1);
    r6 = `-`(<missing>, m1);
    __ = ldf `[` in base;
    r7 = dyn __(cl5, r6);
    goto L3(r7);
  L19():
    r8 = dyn oldClass__(l, NULL, dx1);
    check L20() else D7();
  D7():
    deopt 26 [dx1, r8];
  L20():
    st y = r8;
    goto L4();
  }
}