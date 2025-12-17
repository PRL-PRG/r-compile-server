fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2110512843;
    st `sortedXyData.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2110512843(x, y, data) {
  (reg x:*, reg y:*, reg data:*) -+> V { var x:*, var y:*, var data:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_language:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x3:*, reg x4:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c15:L, reg c16:L, reg r8:V, reg x5:*, reg x6:V, reg c17:L, reg c18:L, reg c19:V, reg c22:L, reg c23:V, reg c25:L, reg eval:cls, reg asOneSidedFormula:cls, reg x7:*, reg x8:V, reg p:p(V +), reg r10:V, reg c26:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x9:*, reg x10:V, reg as_numeric:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg y1:*, reg y2:V, reg is_language1:cls, reg r23:V, reg c27:L, reg c28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c32:L, reg r25:V, reg y3:*, reg y4:V, reg length1:cls, reg r26:V, reg r27:V, reg c33:L, reg c36:L, reg c37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg c42:L, reg c43:L, reg r29:V, reg y5:*, reg y6:V, reg c44:L, reg c45:L, reg c46:V, reg c49:L, reg c50:V, reg c52:L, reg eval1:cls, reg asOneSidedFormula1:cls, reg y7:*, reg y8:V, reg p3:p(V +), reg r31:V, reg c53:L, reg r33:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r34:V, reg p4:p(V +), reg data3:*, reg data4:V, reg p5:p(V +), reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg y9:*, reg y10:V, reg as_numeric1:cls, reg r41:V, reg tapply:cls, reg y11:*, reg y12:V, reg p6:p(V +), reg x11:*, reg x12:V, reg p7:p(V +), reg mean:*, reg mean1:V, reg p8:p(V +), reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg chartr:cls, reg getOption:cls, reg r48:V, reg p9:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg y_avg:*, reg y_avg1:V, reg names:cls, reg r52:V, reg p10:p(V +), reg r54:V, reg as_numeric2:cls, reg r55:V, reg order:cls, reg xvals:*, reg xvals1:V, reg p11:p(V +), reg r57:V, reg na_omit:cls, reg data_frame:cls, reg xvals2:*, reg xvals3:V, reg c54:L, reg xvals5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ord:*, reg ord1:V, reg __2:cls, reg r58:V, reg p12:p(V +), reg as_vector:cls, reg y_avg2:*, reg y_avg3:V, reg c55:L, reg y_avg5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ord2:*, reg ord3:V, reg __3:cls, reg r60:V, reg p13:p(V +), reg r62:V, reg p14:p(V +), reg r64:V, reg p15:p(V +), reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg c56:cls, reg r69:V, reg l:*, reg class__:cls, reg r70:V, reg value:*, reg value1:V |
    mkenv;
    st x = x;
    st y = y;
    st data = data;
    sym = ldf `is.language`;
    base = ldf `is.language` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L22();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c1):
    c25 = `as.logical`(c1);
    if c25 then L33() else L5();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    is_language = ldf `is.language` in base;
    r2 = dyn is_language(x2);
    check L21() else D1();
  L22():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    r6 = `==`(r4, 1);
    c6 = `as.logical`(r6);
    if c6 then L27() else L3(c5, c6);
  L5():
    goto L6();
  L6():
    sym3 = ldf `as.numeric`;
    base3 = ldf `as.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L21():
    goto L0(r2);
  L23():
    x3 = ld x;
    check L25() else D2();
  L24():
    r3 = dyn base1(<sym x>);
    goto L2(c, r3);
  L33():
    eval = ldf eval;
    check L34() else D5();
  D2():
    deopt 8 [c, x3];
  D5():
    deopt 21 [];
  L3(c9, c10):
    c22 = `as.logical`(c10);
    c23 = `||`(c9, c22);
    goto L1(c23);
  L7(r19):
    st x = r19;
    sym4 = ldf `is.language`;
    base4 = ldf `is.language` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L25():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r5 = dyn length(x4);
    check L26() else D3();
  L27():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L34():
    p1 = prom<V +>{
      asOneSidedFormula = ldf asOneSidedFormula;
      p = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r10 = dyn asOneSidedFormula(p);
      c26 = `is.object`(r10);
      if c26 then L1() else L2(r10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", r10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r12):
      __ = ldf `[[` in base;
      r13 = dyn __(r12, 2);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r16 = dyn eval(p1, p2);
    check L35() else D6();
  L37():
    x9 = ld x;
    check L39() else D7();
  L38():
    r18 = dyn base3(<sym x>);
    goto L7(r18);
  D3():
    deopt 11 [c, r5];
  D6():
    deopt 24 [r16];
  D7():
    deopt 30 [x9];
  L4(c15, c16, r8):
    c18 = `as.logical`(r8);
    c19 = `&&`(c16, c18);
    goto L3(c15, c19);
  L8(r22):
    c27 = `as.logical`(r22);
    if c27 then L9(c27) else L45();
  L26():
    goto L2(c, r5);
  L28():
    x5 = ld x;
    check L30() else D4();
  L29():
    r7 = dyn base2(<sym x>);
    goto L4(c5, c6, r7);
  L35():
    st x = r16;
    goto L6();
  L39():
    x10 = force? x9;
    checkMissing(x10);
    as_numeric = ldf `as.numeric` in base;
    r20 = dyn as_numeric(x10);
    check L40() else D8();
  L41():
    y1 = ld y;
    check L43() else D9();
  L42():
    r21 = dyn base4(<sym y>);
    goto L8(r21);
  D4():
    deopt 15 [c5, c6, x5];
  D8():
    deopt 33 [r20];
  D9():
    deopt 37 [y1];
  L9(c28):
    c52 = `as.logical`(c28);
    if c52 then L56() else L13();
  L30():
    x6 = force? x5;
    checkMissing(x6);
    c17 = `is.character`(x6);
    goto L4(c5, c6, c17);
  L40():
    goto L7(r20);
  L43():
    y2 = force? y1;
    checkMissing(y2);
    is_language1 = ldf `is.language` in base;
    r23 = dyn is_language1(y2);
    check L44() else D10();
  L45():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  D10():
    deopt 40 [r23];
  L10(c32, r25):
    r27 = `==`(r25, 1);
    c33 = `as.logical`(r27);
    if c33 then L50() else L11(c32, c33);
  L13():
    goto L14();
  L14():
    sym7 = ldf `as.numeric`;
    base7 = ldf `as.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L60() else L61();
  L44():
    goto L8(r23);
  L46():
    y3 = ld y;
    check L48() else D11();
  L47():
    r24 = dyn base5(<sym y>);
    goto L10(c27, r24);
  L56():
    eval1 = ldf eval;
    check L57() else D14();
  D11():
    deopt 43 [c27, y3];
  D14():
    deopt 56 [];
  L11(c36, c37):
    c49 = `as.logical`(c37);
    c50 = `||`(c36, c49);
    goto L9(c50);
  L15(r40):
    st y = r40;
    tapply = ldf tapply;
    check L64() else D18();
  L48():
    y4 = force? y3;
    checkMissing(y4);
    length1 = ldf length in base;
    r26 = dyn length1(y4);
    check L49() else D12();
  L50():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L51() else L52();
  L57():
    p4 = prom<V +>{
      asOneSidedFormula1 = ldf asOneSidedFormula;
      p3 = prom<V +>{
        y7 = ld y;
        y8 = force? y7;
        checkMissing(y8);
        return y8;
      };
      r31 = dyn asOneSidedFormula1(p3);
      c53 = `is.object`(r31);
      if c53 then L1() else L2(r31);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", r31);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r33):
      __1 = ldf `[[` in base;
      r34 = dyn __1(r33, 2);
      goto L0(r34);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p5 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r37 = dyn eval1(p4, p5);
    check L58() else D15();
  L60():
    y9 = ld y;
    check L62() else D16();
  L61():
    r39 = dyn base7(<sym y>);
    goto L15(r39);
  D12():
    deopt 46 [c27, r26];
  D15():
    deopt 59 [r37];
  D16():
    deopt 65 [y9];
  D18():
    deopt 71 [];
  L12(c42, c43, r29):
    c45 = `as.logical`(r29);
    c46 = `&&`(c43, c45);
    goto L11(c42, c46);
  L49():
    goto L10(c27, r26);
  L51():
    y5 = ld y;
    check L53() else D13();
  L52():
    r28 = dyn base6(<sym y>);
    goto L12(c32, c33, r28);
  L58():
    st y = r37;
    goto L14();
  L62():
    y10 = force? y9;
    checkMissing(y10);
    as_numeric1 = ldf `as.numeric` in base;
    r41 = dyn as_numeric1(y10);
    check L63() else D17();
  L64():
    p6 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    p7 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p8 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r45 = dyn tapply[, , , `na.rm`](p6, p7, p8, TRUE);
    check L65() else D19();
  D13():
    deopt 50 [c32, c33, y5];
  D17():
    deopt 68 [r41];
  D19():
    deopt 77 [r45];
  L53():
    y6 = force? y5;
    checkMissing(y6);
    c44 = `is.character`(y6);
    goto L12(c32, c33, c44);
  L63():
    goto L15(r41);
  L65():
    st `y.avg` = r45;
    sym8 = ldf `as.numeric`;
    base8 = ldf `as.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L66() else L67();
  L16(r47):
    st xvals = r47;
    order = ldf order;
    check L71() else D23();
  L66():
    chartr = ldf chartr;
    check L68() else D20();
  L67():
    r46 = dyn base8(<lang chartr(getOption("OutDec"), ".", names(y.avg))>);
    goto L16(r46);
  D20():
    deopt 82 [];
  D23():
    deopt 91 [];
  L68():
    p9 = prom<V +>{
      getOption = ldf getOption;
      r48 = dyn getOption("OutDec");
      return r48;
    };
    p10 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      y_avg = ld `y.avg`;
      y_avg1 = force? y_avg;
      checkMissing(y_avg1);
      names = ldf names in base;
      r52 = dyn names(y_avg1);
      goto L0(r52);
    L2():
      r50 = dyn base9(<sym y.avg>);
      goto L0(r50);
    };
    r54 = dyn chartr(p9, ".", p10);
    check L69() else D21();
  L71():
    p11 = prom<V +>{
      xvals = ld xvals;
      xvals1 = force? xvals;
      checkMissing(xvals1);
      return xvals1;
    };
    r57 = dyn order(p11);
    check L72() else D24();
  D21():
    deopt 86 [r54];
  D24():
    deopt 93 [r57];
  L69():
    as_numeric2 = ldf `as.numeric` in base;
    r55 = dyn as_numeric2(r54);
    check L70() else D22();
  L72():
    st ord = r57;
    na_omit = ldf `na.omit`;
    check L73() else D25();
  D22():
    deopt 88 [r55];
  D25():
    deopt 96 [];
  L70():
    goto L16(r55);
  L73():
    p15 = prom<V +>{
      data_frame = ldf `data.frame`;
      p12 = prom<V +>{
        xvals2 = ld xvals;
        xvals3 = force? xvals2;
        checkMissing(xvals3);
        c54 = `is.object`(xvals3);
        if c54 then L1() else L2(xvals3);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", xvals3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(xvals5):
        ord = ld ord;
        ord1 = force? ord;
        __2 = ldf `[` in base;
        r58 = dyn __2(xvals5, ord1);
        goto L0(r58);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p14 = prom<V +>{
        as_vector = ldf `as.vector`;
        p13 = prom<V +>{
          y_avg2 = ld `y.avg`;
          y_avg3 = force? y_avg2;
          checkMissing(y_avg3);
          c55 = `is.object`(y_avg3);
          if c55 then L1() else L2(y_avg3);
        L0(dx7):
          return dx7;
        L1():
          dr6 = tryDispatchBuiltin.1("[", y_avg3);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2(dr6);
        L2(y_avg5):
          ord2 = ld ord;
          ord3 = force? ord2;
          __3 = ldf `[` in base;
          r60 = dyn __3(y_avg5, ord3);
          goto L0(r60);
        L3():
          dx6 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx6);
        };
        r62 = dyn as_vector(p13);
        return r62;
      };
      r64 = dyn data_frame[x, y](p12, p14);
      return r64;
    };
    r66 = dyn na_omit(p15);
    check L74() else D26();
  D26():
    deopt 98 [r66];
  L74():
    st value = r66;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L75() else L76();
  L17(r68):
    l = ld value;
    class__ = ldf `class<-`;
    check L78() else D28();
  L75():
    c56 = ldf c in base;
    r69 = dyn c56("sortedXyData", "data.frame");
    check L77() else D27();
  L76():
    r67 = dyn base10("sortedXyData", "data.frame");
    goto L17(r67);
  D27():
    deopt 105 [r69];
  D28():
    deopt 107 [r68, l, r68];
  L77():
    goto L17(r69);
  L78():
    r70 = dyn class__(l, NULL, r68);
    check L79() else D29();
  D29():
    deopt 109 [r68, r70];
  L79():
    st value = r70;
    value = ld value;
    check L80() else D30();
  D30():
    deopt 111 [value];
  L80():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}