fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `$<-.data.frame` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg l:*, reg class__:cls, reg r3:V, reg _row_names_info:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg value1:*, reg value2:V, reg c:V, reg r8:V, reg c1:L, reg NROW:cls, reg value3:*, reg value4:V, reg p1:p(V +), reg r10:V, reg N:*, reg N1:V, reg nrows:*, reg nrows1:V, reg r11:V, reg c2:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg N2:*, reg N3:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg N4:*, reg N5:V, reg p4:p(V +), reg nrows2:*, reg nrows3:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg N6:*, reg N7:V, reg nrows4:*, reg nrows5:V, reg r21:V, reg c3:L, reg N8:*, reg N9:V, reg r22:V, reg c4:L, reg c6:V, reg nrows6:*, reg nrows7:V, reg N10:*, reg N11:V, reg __:cls, reg r23:V, reg r24:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg c15:L, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg c18:L, reg r28:V, reg value5:*, reg value6:V, reg dim:cls, reg r29:V, reg length:cls, reg r30:V, reg r31:V, reg c19:L, reg c20:V, reg c22:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg rep:cls, reg r34:V, reg r35:V, reg stop1:cls, reg sprintf1:cls, reg ngettext1:cls, reg N12:*, reg N13:V, reg p7:p(V +), reg r37:V, reg p8:p(V +), reg N14:*, reg N15:V, reg p9:p(V +), reg nrows8:*, reg nrows9:V, reg p10:p(V +), reg r41:V, reg p11:p(V +), reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg value7:*, reg value8:V, reg is_atomic:cls, reg r47:V, reg c23:L, reg c25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg c28:L, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg c31:L, reg r51:V, reg value9:*, reg value10:V, reg names:cls, reg r52:V, reg c32:V, reg r53:V, reg c33:L, reg c34:V, reg c36:L, reg l1:*, reg names__:cls, reg r54:V, reg r55:dots, reg value11:*, reg value12:V, reg l2:*, reg c37:L, reg value14:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg ____:cls, reg r57:V, reg cl:*, reg cl1:V, reg l5:*, reg class__1:cls, reg r58:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r1):
    st cl = r1;
    l = ld x;
    class__ = ldf `class<-`;
    check L26() else D2();
  L22():
    x1 = ld x;
    check L24() else D0();
  L23():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 10 [NULL, l, NULL];
  L24():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L25() else D1();
  L26():
    r3 = dyn class__(l, NULL, NULL);
    check L27() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 12 [NULL, r3];
  L25():
    goto L0(r2);
  L27():
    st x = r3;
    _row_names_info = ldf `.row_names_info`;
    check L28() else D4();
  D4():
    deopt 15 [];
  L28():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn _row_names_info(p, 2);
    check L29() else D5();
  D5():
    deopt 18 [r5];
  L29():
    st nrows = r5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L1(r7):
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L33() else L2();
  L30():
    value1 = ld value;
    check L32() else D6();
  L31():
    r6 = dyn base1(<sym value>);
    goto L1(r6);
  D6():
    deopt 21 [value1];
  L2():
    goto L20();
  L20():
    value11 = ld value;
    check L84() else D30();
  L32():
    value2 = force? value1;
    checkMissing(value2);
    c = `==`(value2, NULL);
    goto L1(c);
  L33():
    NROW = ldf NROW;
    check L34() else D7();
  D7():
    deopt 26 [];
  D30():
    deopt 112 [value11];
  L34():
    p1 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r10 = dyn NROW(p1);
    check L35() else D8();
  L84():
    value12 = force? value11;
    checkMissing(value12);
    l2 = ld x;
    c37 = `is.object`(l2);
    if c37 then L85() else L86(value12, l2);
  D8():
    deopt 28 [r10];
  L21(dx1):
    st x = dx1;
    cl = ld cl;
    check L89() else D32();
  L35():
    st N = r10;
    N = ld N;
    check L36() else D9();
  L85():
    dr = tryDispatchBuiltin.0("[[<-", l2, value12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L87() else L86(value12, dr);
  L86(value14, l4):
    name1 = ld name;
    check L88() else D31();
  D9():
    deopt 30 [N];
  D31():
    deopt 115 [value14, l4, value12, name1];
  D32():
    deopt 119 [cl];
  L36():
    N1 = force? N;
    checkMissing(N1);
    nrows = ld nrows;
    check L37() else D10();
  L87():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L88():
    name2 = force? name1;
    ____ = ldf `[[<-` in base;
    r57 = dyn ____(l4, value12, name2);
    goto L21(r57);
  L89():
    cl1 = force? cl;
    checkMissing(cl1);
    l5 = ld x;
    class__1 = ldf `class<-`;
    check L90() else D33();
  D10():
    deopt 31 [N1, nrows];
  D33():
    deopt 122 [cl1, l5, cl1];
  L37():
    nrows1 = force? nrows;
    checkMissing(nrows1);
    r11 = `>`(N1, nrows1);
    c2 = `as.logical`(r11);
    if c2 then L38() else L3();
  L90():
    r58 = dyn class__1(l5, NULL, cl1);
    check L91() else D34();
  D34():
    deopt 124 [cl1, r58];
  L3():
    goto L4();
  L4():
    N6 = ld N;
    check L42() else D13();
  L38():
    stop = ldf stop;
    check L39() else D11();
  L91():
    st x = r58;
    x5 = ld x;
    check L92() else D35();
  D11():
    deopt 35 [];
  D13():
    deopt 42 [N6];
  D35():
    deopt 126 [x5];
  L39():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        ngettext = ldf ngettext;
        p2 = prom<V +>{
          N2 = ld N;
          N3 = force? N2;
          checkMissing(N3);
          return N3;
        };
        r13 = dyn ngettext(p2, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
        return r13;
      };
      p4 = prom<V +>{
        N4 = ld N;
        N5 = force? N4;
        checkMissing(N5);
        return N5;
      };
      p5 = prom<V +>{
        nrows2 = ld nrows;
        nrows3 = force? nrows2;
        checkMissing(nrows3);
        return nrows3;
      };
      r17 = dyn sprintf(p3, p4, p5);
      return r17;
    };
    r19 = dyn stop[, domain](p6, NA_LGL);
    check L40() else D12();
  L42():
    N7 = force? N6;
    checkMissing(N7);
    nrows4 = ld nrows;
    check L43() else D14();
  L92():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D12():
    deopt 39 [r19];
  D14():
    deopt 43 [N7, nrows4];
  L40():
    goto L4();
  L43():
    nrows5 = force? nrows4;
    checkMissing(nrows5);
    r21 = `<`(N7, nrows5);
    c3 = `as.logical`(r21);
    if c3 then L44() else L5();
  L5():
    goto L13();
  L13():
    sym5 = ldf `is.atomic`;
    base5 = ldf `is.atomic` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L44():
    N8 = ld N;
    check L45() else D15();
  D15():
    deopt 46 [N8];
  L14(r46):
    c23 = `as.logical`(r46);
    if c23 then L71() else L15(c23);
  L45():
    N9 = force? N8;
    checkMissing(N9);
    r22 = `>`(N9, 0);
    c4 = `as.logical`(r22);
    if c4 then L46() else L6(c4);
  L67():
    value7 = ld value;
    check L69() else D24();
  L68():
    r45 = dyn base5(<sym value>);
    goto L14(r45);
  D24():
    deopt 87 [value7];
  L6(c6):
    c10 = `as.logical`(c6);
    if c10 then L51() else L7(c10);
  L15(c25):
    c36 = `as.logical`(c25);
    if c36 then L79() else L18();
  L46():
    nrows6 = ld nrows;
    check L47() else D16();
  L69():
    value8 = force? value7;
    checkMissing(value8);
    is_atomic = ldf `is.atomic` in base;
    r47 = dyn is_atomic(value8);
    check L70() else D25();
  L71():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  D16():
    deopt 51 [c4, nrows6];
  D25():
    deopt 90 [r47];
  L7(c12):
    c22 = `as.logical`(c12);
    if c22 then L60() else L10();
  L16(c28, r49):
    r53 = `!`(r49);
    c33 = `as.logical`(r53);
    c34 = `&&`(c28, c33);
    goto L15(c34);
  L18():
    goto L19(NULL);
  L19(r55):
    goto L20();
  L47():
    nrows7 = force? nrows6;
    checkMissing(nrows7);
    N10 = ld N;
    check L48() else D17();
  L51():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L70():
    goto L14(r47);
  L72():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L73():
    r48 = dyn base6(<lang names(value)>);
    goto L16(c23, r48);
  L79():
    l1 = ld value;
    names__ = ldf `names<-`;
    check L80() else D28();
  D17():
    deopt 53 [c4, N10];
  D28():
    deopt 104 [NULL, l1, NULL];
  L8(c15, r26):
    r31 = `<=`(r26, 1);
    c19 = `as.logical`(r31);
    c20 = `&&`(c15, c19);
    goto L7(c20);
  L10():
    stop1 = ldf stop;
    check L64() else D22();
  L12(r35):
    goto L13();
  L17(c31, r51):
    c32 = `==`(r51, NULL);
    goto L16(c31, c32);
  L48():
    N11 = force? N10;
    checkMissing(N11);
    __ = ldf `%%` in base;
    r23 = dyn __(nrows7, N11);
    check L49() else D18();
  L52():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L53():
    r25 = dyn base2(<lang dim(value)>);
    goto L8(c10, r25);
  L60():
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L74():
    value9 = ld value;
    check L76() else D26();
  L75():
    r50 = dyn base7(<sym value>);
    goto L17(c23, r50);
  L80():
    r54 = dyn names__(l1, NULL, NULL);
    check L81() else D29();
  D18():
    deopt 56 [c4, r23];
  D22():
    deopt 78 [];
  D26():
    deopt 94 [c23, value9];
  D29():
    deopt 106 [NULL, r54];
  L9(c18, r28):
    length = ldf length in base;
    r30 = dyn length(r28);
    check L58() else D21();
  L11(r33):
    st value = r33;
    goto L12(r33);
  L49():
    r24 = `==`(r23, 0);
    c7 = `as.logical`(r24);
    c8 = `&&`(c4, c7);
    goto L6(c8);
  L54():
    value5 = ld value;
    check L56() else D19();
  L55():
    r27 = dyn base3(<sym value>);
    goto L9(c10, r27);
  L61():
    rep = ldf rep in base;
    r34 = dyn rep(<sym value>, <sym nrows>);
    goto L11(r34);
  L62():
    r32 = dyn base4[, `length.out`](<sym value>, <sym nrows>);
    goto L11(r32);
  L64():
    p11 = prom<V +>{
      sprintf1 = ldf sprintf;
      p8 = prom<V +>{
        ngettext1 = ldf ngettext;
        p7 = prom<V +>{
          N12 = ld N;
          N13 = force? N12;
          checkMissing(N13);
          return N13;
        };
        r37 = dyn ngettext1(p7, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
        return r37;
      };
      p9 = prom<V +>{
        N14 = ld N;
        N15 = force? N14;
        checkMissing(N15);
        return N15;
      };
      p10 = prom<V +>{
        nrows8 = ld nrows;
        nrows9 = force? nrows8;
        checkMissing(nrows9);
        return nrows9;
      };
      r41 = dyn sprintf1(p8, p9, p10);
      return r41;
    };
    r43 = dyn stop1[, domain](p11, NA_LGL);
    check L65() else D23();
  L76():
    value10 = force? value9;
    checkMissing(value10);
    names = ldf names in base;
    r52 = dyn names(value10);
    check L77() else D27();
  L81():
    st value = r54;
    goto L19(NULL);
  D19():
    deopt 64 [c10, value5];
  D21():
    deopt 69 [c18, r30];
  D23():
    deopt 82 [r43];
  D27():
    deopt 97 [c23, r52];
  L56():
    value6 = force? value5;
    checkMissing(value6);
    dim = ldf dim in base;
    r29 = dyn dim(value6);
    check L57() else D20();
  L58():
    goto L8(c18, r30);
  L65():
    goto L12(r43);
  L77():
    goto L17(c23, r52);
  D20():
    deopt 67 [c10, r29];
  L57():
    goto L9(c10, r29);
  }
}